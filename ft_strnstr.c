/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moazzedd <moazzedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 21:30:05 by moazzedd          #+#    #+#             */
/*   Updated: 2022/10/19 05:48:57 by moazzedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*cas(char *hay, char *nee, size_t len, size_t i)
{
	size_t	j;
	size_t	x;

	j = 0;
	while (i < len && hay[i])
	{
		x = i;
		if (hay[i] == nee[j])
		{
			while (hay[i] == nee[j] && i < len && hay[i])
			{
				i++;
				j++;
			}			
			if (nee[j] == '\0')
				return (&hay[i - ft_strlen((const char *)nee)]);
			else if (hay[i] != '\0')
			{
				j = 0;
				i = x;
			}
		}
		i++;
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hay;
	char	*nee;

	hay = (char *)haystack;
	nee = (char *)needle;
	if ((len == 0 && haystack == NULL ) || (needle == NULL && len == 0))
		return (0);
	if ((ft_strncmp(haystack, needle, sizeof(haystack)) == 0
			&& len > ft_strlen(haystack)) || ft_strlen(needle) == 0
		|| (ft_strlen(needle) == 0 && len >= ft_strlen(haystack)))
		return (hay);
	return (cas (hay, nee, len, 0));
}
