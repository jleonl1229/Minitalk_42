/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 18:09:12 by jleon-la          #+#    #+#             */
/*   Updated: 2024/04/04 19:38:25 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>
#include <time.h>

void	av2slicer(unsigned int pid, unsigned char *str, int *i)
{
	int	bits;

	bits = 8;
	while (str[*i])
	{
		bits = 8;
		while (--bits >= 0)
		{
			if ((str[*i] >> bits) & 1)
			{
				if (kill(pid, SIGUSR2) == -1)
					ft_printf("Client failed sending SIGUSR2\n");
			}
			else
			{
				if (kill(pid, SIGUSR1) == -1)
					ft_printf("Client failed sending SIGUSR1\n");
			}
			usleep(200);
		}
		(*i)++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac != 3 || av[1][0] == '-' || av[1][0] == '0' || !av[2])
		return (ft_printf("Error"), 1);
	av2slicer(ft_atoi(av[1]), (unsigned char *)av[2], &i);
	ft_printf("The amount of characters sent to the server is: %d", i);
	return (0);
}
