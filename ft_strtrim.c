/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cantrazi <cantrazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 15:28:07 by cantrazi          #+#    #+#             */
/*   Updated: 2026/11/17 09:30:45 by cantrazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static int	char_found(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i ++;
	}
	return (0);
}

// const char	*ft_strtrim(char const *s1, char const *set)
// {
// 	const char	*trimmed;
// 	const char	*start;
// 	const char	*end;
// 	int		i;
// 	// int		j;

// 	i = 0;
// 	// j = 0;
// 	while (s1[i])
// 		i ++;
// 	start = &s1[0];
// 	end = &s1[i - 1];

// 	trimmed = malloc (i * 1);
// 	if (trimmed == NULL)
// 		return ('\0');
// 	while (char_found(*start, set) == 1)
// 	{
// 		start ++;
// 	}
// 	while (char_found(*end, set) == 1)
// 	{
// 		end --;
// 	}
// 	trimmed = ft_strjoin(start, end);
// 	return (trimmed);
// }

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*trimmed;

	i = 0;
	j = 0;
	k = 0;
	while (s1[i])
		i ++;
	trimmed = malloc (i * 1);
	while (char_found(s1[j], set))
		j ++;
	i -= 1;
	while (char_found(s1[i], set))
		i --;
	while (j <= i)
	{
		trimmed[k] = s1[j];
		j ++;
		k ++;
	}
	return (trimmed);
}

int main (void)
{
	char s[] = "ababaaaMy name is Simonbbaaabbad";
	char set[] = "M";
	// char * s2 = s;
	// printf("%p\n", &s);
	// printf("%p", s2);
	printf("%s", ft_strtrim(s, set));
}
