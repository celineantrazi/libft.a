/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cantrazi <cantrazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 09:51:58 by cantrazi          #+#    #+#             */
/*   Updated: 2026/11/12 11:17:06 by cantrazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])

			return (s1[i] - s2[i]);
		else
			i++;
	}
	return (0);
}

int main()
{
	char s1[] = "apple";
	char s2[] = "apple";
	printf("%d", ft_strncmp(s1, s2, 3));
}
