/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cantrazi <cantrazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 08:07:13 by cantrazi          #+#    #+#             */
/*   Updated: 2026/11/12 08:24:24 by cantrazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		return (c - 32);
	else
		return (c);
}

int main ()
{
	int a = 7;
	printf("%d", a);
	printf("%d", ft_toupper(a));
	int b = ft_toupper(a);
	char c = (char)b;
	printf("%c", c);


}
