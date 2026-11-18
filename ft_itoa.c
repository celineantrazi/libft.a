/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cantrazi <cantrazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 08:16:38 by cantrazi          #+#    #+#             */
/*   Updated: 2026/11/18 15:12:03 by cantrazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// int	count_digits(int n)
// {
// 	int	digits;

// 	digits = 0;
// 	while (n != 0 && n != '-')
// 	{
// 		n /= 10;
// 		digits ++;
// 	}
// 	return (digits);
// }
#include <stdio.h>

char	*ft_itoa(int n)
{
	int		digits;
	int		temp;
	char	*result;

	digits = 0;
	temp = n;
	if (n == 0)
		return ("0\0");
	if (n < 0)
	{
		digits++;
		n = -n;
	}
	while (temp != 0)
	{
		temp /= 10;
		digits ++;
	}
	result = malloc((digits + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	result[digits--] = '\0';
	while (n != 0)
	{
		result[digits--] = (n % 10) + '0';
		n = n / 10;
	}
	if (digits == 0)
		result[0] = '-';
	return (result);
}

// int main(void)
// {
// 	int n = 12345;
// 	printf("%s", ft_itoa(n));
// }
