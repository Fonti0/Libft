/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontive <dfontive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 01:35:29 by dfontive          #+#    #+#             */
/*   Updated: 2024/12/15 20:09:07 by dfontive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/* int	main(void)
{
	t_list *head = NULL;
	t_list *new_node = ft_lstnew((void *)42);
	ft_lstadd_front(&head, new_node);
} */