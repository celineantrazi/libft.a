/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cantrazi <cantrazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 11:30:25 by cantrazi          #+#    #+#             */
/*   Updated: 2026/11/10 13:04:11 by cantrazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	length;
	size_t	i;
	char	*str;

	length = 0;
	i = 0;
	str = s;
	while (str[i])
	{
		length++;
		i++;
	}
	if (n > length)
		n = length;
	i = 0;
	while (str[i] && i < n)
	{
		str[i] = '\0';
		i++;
	}
}

int main ()
{
	int i = 0;
	char s[6] = "hello";
	printf("%s\n", s);
	ft_bzero(s, 3);
	while (i < 5)
	{
		write(1, &s[i], 1);
		i++;
	}
}
