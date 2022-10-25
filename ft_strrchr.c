/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moazzedd <moazzedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:40:18 by moazzedd          #+#    #+#             */
/*   Updated: 2022/10/21 21:22:44 by moazzedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		s_lenght;
	char	*string;

	string = (char *)s;
	s_lenght = ft_strlen(s);
	c = (char)c;
	if (c == 0)
		return (string + ft_strlen(s));
	while (s_lenght != 0)
	{
		if (string[s_lenght] == c)
			return (&string[s_lenght]);
		s_lenght--;
	}
	if (string[0] == c)
		return (&string[s_lenght]);
	return (0);
}
