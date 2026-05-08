/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaktaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:26:51 by mlaktaou          #+#    #+#             */
/*   Updated: 2025/10/19 16:26:55 by mlaktaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	digit_count(long n)
{
	int	digit_num;

	if (n < 0)
	{
		digit_num = 2;
		n = -n;
	}
	else
		digit_num = 1;
	while (n > 9)
	{
		n /= 10;
		digit_num++;
	}
	return (digit_num);
}

char	*ft_itoa(int n)
{
	int		digit_num;
	char	*result;
	long	nb;
	int		i;

	i = 0;
	nb = n;
	digit_num = digit_count(nb);
	result = malloc((digit_num + 1) * sizeof(char));
	if (!result)
		return (NULL);
	if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
		i = 1;
	}
	result[digit_num] = '\0';
	while (digit_num > i)
	{
		result[digit_num - 1] = nb % 10 + '0';
		nb /= 10;
		digit_num--;
	}
	return (result);
}
/* 
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*result;


	result = ft_itoa(-684682);
	printf("ft_itoa(-684682) = %s\n", result);
	free(result);
	return (0);
} */
