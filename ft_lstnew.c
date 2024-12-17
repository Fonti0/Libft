/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontive <dfontive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 00:47:11 by dfontive          #+#    #+#             */
/*   Updated: 2024/12/15 20:06:44 by dfontive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}

/* int main(void)
{
    char *str = "Hello, World!";
    t_list *new_node = ft_lstnew(str);
    if (new_node == NULL)
    {
        printf("Error al crear el nodo\n");
        return (1);
    }
    printf("Contenido del nodo: %s\n", (char *)new_node->content);
    if (new_node->next == NULL)
    {
        printf("El puntero 'next' es NULL, como se esperaba.\n");
    }
    free(new_node);
    return (0);
} */
