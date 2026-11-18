/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cantrazi <cantrazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 09:31:16 by cantrazi          #+#    #+#             */
/*   Updated: 2026/11/17 15:47:17 by cantrazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count_words(char const *str, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if(str[i])
		{
			count++;
			while (str[i] != c)
				i++;
		}
	}
	return (count);
}

char *get_word(char const *s, int start, int end)
{
	char *word;
	int i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int 	start;
	char	**arr;
	int j;

	j = 0;
	arr = malloc((count_words(s, c) + 1)* sizeof(char *));
	if (arr == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c)
			i++;
		arr[j++] = get_word(s, start, i);
	}
	arr[j] = NULL;
	return (arr);
}
