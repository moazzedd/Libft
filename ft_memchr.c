/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moazzedd <moazzedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:56:00 by moazzedd          #+#    #+#             */
/*   Updated: 2022/10/20 14:15:44 by moazzedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ss;
	unsigned char	cc;
	size_t			i;

	i = 0;
	ss = (unsigned char *)s;
	cc = (unsigned char )c;
	while (i < n)
	{
		if (ss[i] == cc)
			return (&ss[i]);
		i++;
	}
	return (0);
}
