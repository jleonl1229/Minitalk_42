/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 18:09:16 by jleon-la          #+#    #+#             */
/*   Updated: 2024/04/03 12:23:56 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>

int	main(void)
{
	ft_printf("I'm the process number: %d", getpid());
	while (1)
	{
		usleep(2000000);
		pause();
	}
	return (0);
}
