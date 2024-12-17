/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontive <dfontive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 09:21:08 by dfontive          #+#    #+#             */
/*   Updated: 2024/12/11 19:51:08 by dfontive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*move_forward(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*destination;
	char		*source;

	destination = (char *)dest;
	source = (char *)src;
	i = 0;
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (destination);
}

void	*move_backward(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*destination;
	char		*source;

	destination = (char *)dest;
	source = (char *)src;
	i = 0;
	while (i < n)
	{
		destination[n - i - 1] = source[n - i - 1];
		i++;
	}
	return (destination);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (src == NULL && dest == NULL)
		return (NULL);
	if (dest > src)
		move_backward(dest, src, n);
	else
		move_forward(dest, src, n);
	return (dest);
}

/* int	main(void)
{
	char src_1[] = "aaaaaa";
 	char dest_1[7];
	char src_2[] = "aaaaaa";
 	char dest_2[7];
	ft_memmove(dest_1, src_1, 3);
	printf("%s", dest_1);
	printf("\n");
	printf("%s", (char *)memmove(dest_2, src_2, 3));
	return (0);
} */
