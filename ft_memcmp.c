/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cantrazi <cantrazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 14:27:51 by cantrazi          #+#    #+#             */
/*   Updated: 2026/11/12 14:48:50 by cantrazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*str1;
	const char	*str2;
	size_t		i;

	i = 0;
	str1 = s1;
	str2 = s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (str1[i] != str2[i])

			return (str1[i] - str2[i]);
		i ++;
	}
	return (0);
}

int main ()
{
	char s1[] = "applo";
	char s2[] = "apple";
	printf("%d", ft_memcmp(s1, s2, 5));

}
