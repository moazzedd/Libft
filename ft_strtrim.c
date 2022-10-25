/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moazzedd <moazzedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:15:09 by moazzedd          #+#    #+#             */
/*   Updated: 2022/10/22 00:19:23 by moazzedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	every_begin(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (set[j])
	{
		if (set[j] == s1[i])
		{
			j = 0;
			i++;
		}
		else
			j++;
	}
	return (i);
}

size_t	every_end(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(s1) - 1;
	j = 0;
	while (set[j] && i != 0)
	{
		if (s1[i] == set[j])
		{
			j = 0;
			i--;
		}
		else
			j++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	begin;
	size_t	end;
	char	*ptr;
	size_t	i;

	i = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	begin = every_begin(s1, set);
	end = every_end(s1, set);
	if (end <= 0 && begin == ft_strlen(s1))
		return (ft_strdup(""));
	ptr = (char *)malloc((end - begin + 2) * sizeof(char));
	if (!ptr)
		return (0);
	while (begin <= end)
	{
		ptr[i] = s1[begin];
		begin++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
