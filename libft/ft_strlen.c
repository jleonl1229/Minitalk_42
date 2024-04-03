/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:24:17 by jleon-la          #+#    #+#             */
/*   Updated: 2023/12/18 09:16:40 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *length)
{
	int	counter;

	counter = 0;
	while (*length && *length != '\0')
	{
		length++;
		counter++;
	}
	return (counter);
}

/*int main(void)
{
	int i =	ft_strlen("Hola");
	printf("%d", i);
	return (0);
}*/
