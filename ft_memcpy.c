/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cantrazi <cantrazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 13:05:58 by cantrazi          #+#    #+#             */
/*   Updated: 2026/11/11 10:34:13 by cantrazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*s;
	char	*d;
	size_t	i;

	s = src;
	d = dest;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i ++;
	}
	return (d);
}

int main ()
{
	char s[] = "hello";
	char d[] = "hello";
	char *r = ft_memcpy(d, s, 10);
	printf("%s", r);

}
