/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cantrazi <cantrazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 08:44:19 by cantrazi          #+#    #+#             */
/*   Updated: 2026/11/19 14:09:03 by cantrazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*t;

	t = malloc (sizeof(t_list));
	if (t == NULL)
		return (NULL);
	t->content = content;
	t->next = NULL;
	return (t);
}

int main (void)
{
	int n;
	n = 3;

	t_list *t;
	t = ft_lstnew(&n);
	printf("%p", (int *)t->content);
}
