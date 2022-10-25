/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moazzedd <moazzedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:26:44 by moazzedd          #+#    #+#             */
/*   Updated: 2022/10/19 04:11:39 by moazzedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			counter;
	unsigned char	*x;

	counter = 0;
	c = (unsigned char)c;
	x = (unsigned char *)b;
	while (counter < len)
	{
		x[counter] = c;
		counter++;
	}
	return (b);
}
