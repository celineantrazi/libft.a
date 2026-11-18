/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cantrazi <cantrazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 09:21:20 by cantrazi          #+#    #+#             */
/*   Updated: 2026/11/12 09:45:07 by cantrazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;
	int	index;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			j ++;
			index = i;
		}
		i ++;
	}
	if (j == 0)
		return ('\0');
	else
		return ((char *)&s[index]);
}

int main ()
{
	char c = 'c';
	char s[] = "coofjhgrjhch";
	printf("%s", ft_strrchr(s, c));
}
