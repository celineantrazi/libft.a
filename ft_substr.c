/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cantrazi <cantrazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 10:02:52 by cantrazi          #+#    #+#             */
/*   Updated: 2026/11/17 08:01:30 by cantrazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub;

	if (len <= 0)
		return ('\0');
	sub = malloc (len * 1);
	if (sub == NULL)
		return ('\0');
	i = start;
	j = 0;
	while (j < len)
	{
		sub[j] = s[i];
		i ++;
		j ++;
	}
	return (sub);
}

int main (void)
{
	char s[] = "hellohijfhgdftgd";
	printf("%s", ft_substr(s, 5, 7));

}
