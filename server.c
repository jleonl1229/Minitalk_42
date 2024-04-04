/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 18:09:16 by jleon-la          #+#    #+#             */
/*   Updated: 2024/04/04 16:32:08 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>

void	handle_sigusr(int sigsent)
{
	static size_t	c;
	static size_t	i;

	if (sigsent == SIGUSR1)
		c = c << 1;
	else if (sigsent == SIGUSR2)
	{
		c = c << 1;
		c = c | 1;
	}
	i++;
	if (i == 8)
	{
		ft_printf("%c", (char)c);
		i = 0;
		c = 0;
	}
}

int	main(void)
{
	ft_printf("I'm the process number: %d\n", getpid());
	signal(SIGUSR1, handle_sigusr);
	signal(SIGUSR2, handle_sigusr);
	while (1)
	{
		pause();
	}
	return (0);
}
