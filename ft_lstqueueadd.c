/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstqueueadd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/04 22:55:28 by cfeijoo           #+#    #+#             */
/*   Updated: 2013/12/05 15:09:54 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstqueueadd(t_list **alst, t_list *new)
{
	t_list	*current;

	ft_putstr("   *1\n");
	if (new && alst)
	{
		ft_putstr("   *2\n");
		current = *alst;
		ft_putstr("   *3\n");
		if (current)
		{
			
			
			ft_putlnbr((long int)current);
			while (current->next)
			{
				ft_putstr("          +A\n");
				current = current->next;
			}
			ft_putstr("   *4\n");
			current->next = new;
		}
		else
		{
			ft_lstadd(alst, new);
		}
		ft_putstr("   *5\n");
	}
}
