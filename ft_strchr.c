/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moazzedd <moazzedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 23:56:02 by moazzedd          #+#    #+#             */
/*   Updated: 2022/10/21 21:22:26 by moazzedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	char			*string;
	unsigned char	c2;

	string = (char *)s;
	i = 0;
	c = (char)c;
	c2 = c;
	if (c == 0)
		return (string + ft_strlen(s));
	if (c > 256)
		c2 = c - 256;
	while (string[i])
	{
		if (string[i] == c2)
			return (&string[i]);
		i++;
	}
	return (0);
}
