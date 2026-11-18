/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cantrazi <cantrazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 08:15:14 by cantrazi          #+#    #+#             */
/*   Updated: 2026/11/11 12:07:47 by cantrazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*s;
	char		*d;
	size_t		i;

	s = src;
	d = dest;
	i = 0;
	if (d > s)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (d);
}

int main()
{
	int i = 0;
	int s[] = {1, 2, 3, 4, 5, 6};
	// int d[] = {2, 3, 4, 5, 6};
	// while (i < 4)
	// {
	// 	printf("%d\n", s[i]);
	// 	printf("%d", d[i]);
	// 	i++;
	// }
	ft_memmove(s, s+1, 4 * sizeof(int));
	i = 0;
	while (i < 6)
	{
		printf("%d\t", s[i]);
		i++;
	}
}
