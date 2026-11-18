/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cantrazi <cantrazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 12:32:35 by cantrazi          #+#    #+#             */
/*   Updated: 2026/11/18 13:20:57 by cantrazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	f(unsigned int n, char *c)
{
	(void) n;
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;// c = c - 32; c = -32
	else if (*c >= 'A' && *c <= 'Z')
		*c += 32;
	else
		*c = *c;
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i ++;
	}
}

int main (void)
{
	char s[] = "hElLo974#";
	ft_striteri(s, f);
	printf("%s", s);
}
