/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moazzedd <moazzedd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:33:00 by moazzedd          #+#    #+#             */
/*   Updated: 2022/10/22 00:17:50 by moazzedd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	overflow(int i, int j, int x, int nb)
{
	if (j - i > 19 && x == -1)
		return (0);
	else if (j - i >= 19 && x == 1)
		return (-1);
	else
		return (nb * x);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				x;
	unsigned long	nb;
	int				j;

	i = 0;
	nb = 0;
	x = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			x = -1;
		i++;
	}
	while (str[i] == '0')
		i++;
	j = i;
	while (str[j] >= '0' && str[j] <= '9')
	{
		nb *= 10;
		nb += str[j++] - 48;
	}
	return (overflow(i, j, x, nb));
}
