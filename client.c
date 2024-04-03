/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 18:09:12 by jleon-la          #+#    #+#             */
/*   Updated: 2024/04/03 12:33:30 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>
#include <time.h>

int	main(int ac, char **av)
{
	if (ac != 3 || av[1][0] == '-' || av[1][0] == '0')
		return (ft_printf("Error"), 1);
	ft_printf("I'm the client :)");
	return (0);
}
