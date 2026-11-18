/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cantrazi <cantrazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 10:13:00 by cantrazi          #+#    #+#             */
/*   Updated: 2026/11/16 13:32:37 by cantrazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*array;
	size_t	i;

	if (nmemb == 0 || size == 0)
		return ('\0');
	array = malloc(nmemb * size);
	if (array == '\0')
		return ('\0');
	i = 0;
	while (i < nmemb)
	{
		array[i] = '\0';
		i ++;
	}
	return (array);
}

int main ()
{
	char *s = ft_calloc(10, 4);
	int i = 0;
	while (i < 10)
	{
		printf("%d\t", s[i]);
		i ++;
	}
	free (s);
}
