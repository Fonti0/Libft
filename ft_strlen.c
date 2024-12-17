/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontive <dfontive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:48:19 by dfontive          #+#    #+#             */
/*   Updated: 2024/12/10 21:53:37 by dfontive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *a)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	return (i);
}

/* int main(void)
{
	char a[] = "";
    printf("%d", ft_strlen(a));
    return (0);
} */