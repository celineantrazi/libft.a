/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cantrazi <cantrazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 07:31:52 by cantrazi          #+#    #+#             */
/*   Updated: 2026/11/17 09:03:59 by cantrazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i])
		i ++;
	while (src[j] && j < size - i - 1)
	{
		dst[i] = src[j];
		i ++;
		j ++;
	}
	dst[j] = '\0';
	return (i + j);
}

int main ()
{
	char d[] = "hello";
	char s[] = "hi";
	printf("%ld", ft_strlcat(d, s, 1));
}
