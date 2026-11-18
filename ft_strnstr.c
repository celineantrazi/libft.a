/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cantrazi <cantrazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 14:50:12 by cantrazi          #+#    #+#             */
/*   Updated: 2026/11/16 08:26:53 by cantrazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size_little;
	size_t	index;

	i = 0;
	j = 0;
	size_little = 0;
	if (!little || little[0] == '\0')
		return (big);
	while (little[size_little])
		size_little++;
	while (big[i] && little[j] && i < len)
	{
		if (big[i] == little[j])
		{
			index = i;
			j++;
		}
		else
			j = 0;
		i++;
	}
	if (j == 0)
		return (NULL);
	return (char *)(&(big[index]));
}

int main()
{
	const char *largestring = "Bar Baz";
	const char *smallstring = "Baz";
	char *ptr;

	ptr = strnstr(largestring, smallstring, 80);
	printf("%s", ptr);
}
