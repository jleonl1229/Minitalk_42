/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 15:00:37 by jleon-la          #+#    #+#             */
/*   Updated: 2023/12/29 15:27:02 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*memory;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if ((!s1 || s1 == NULL) || (!s2 || s2 == NULL))
		return (NULL);
	memory = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!memory)
		return (NULL);
	while (s1[i] && s1[i] != '\0')
	{
		memory[i] = s1[i];
		i++;
	}
	while (s2[j] && s2[j] != '\0')
	{
		memory[i] = s2[j];
		i++;
		j++;
	}
	memory[i] = '\0';
	return (memory);
}

// int	main(void)
// {
// 	printf("%s", ft_strjoin("Hola,", " buenas tardes"));
// 	return (0);
// }
