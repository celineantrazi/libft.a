/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cantrazi <cantrazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 08:29:12 by cantrazi          #+#    #+#             */
/*   Updated: 2026/11/10 11:28:43 by cantrazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	length;
	size_t	i;
	char	*s;

	length = 0;
	i = 0;
	s = str;
	while (s[i])
	{
		length++;
		i++;
	}
	if (n > length)
		n = length;
	i = 0;
	while (s[i] && i < n)
	{
		s[i] = c;
		i++;
	}
	return (s);
}

int main ()
{
	char s[6] = "hello";
	printf("%s\n", s);
	ft_memset(s, 97, 3);
	printf("%s\n", s);
}
