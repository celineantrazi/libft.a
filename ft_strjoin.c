/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cantrazi <cantrazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 14:04:54 by cantrazi          #+#    #+#             */
/*   Updated: 2026/11/17 12:53:00 by cantrazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*result;

	i = 0;
	j = 0;
	while (s1[i])
		i ++;
	while (s2[j])
		j ++;
	result = malloc ((i + j) * 1);
	if (result == NULL)
		return ('\0');
	i = 0;
	while (s1[i])
	{
		result[i] = s1[i];
		i ++;
	}
	j = 0;
	while (s2[j])
	{
		result[i] = s2[j];
		i ++;
		j ++;
	}
	return (result);
}

int main (void)
{
	char s1[] = "hello";
	char s2[] = "hi";
	printf("%s", ft_strjoin(s1, s2));
	// printf("%d, %d", sizeof(char), sizeof(char*));
}
