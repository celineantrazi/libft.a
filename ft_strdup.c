/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cantrazi <cantrazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 12:50:07 by cantrazi          #+#    #+#             */
/*   Updated: 2026/11/16 13:33:14 by cantrazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(const char *s)
{
	int		i;
	char	*a;

	i = 0;
	while (s[i])
		i ++;
	a = malloc(i * 1);
	if (a == '\0')
		return ('\0');
	i = 0;
	while (s[i])
	{
		a[i] = s[i];
		i ++;
	}
	return (a);
}

int main (void)
{
	char s1[] = "hello";
	char *s = ft_strdup(s1);
	int i = 0;
	while (i < 5)
	{
		printf("%c", s[i]);
		i ++;
	}
	free (s);
}
