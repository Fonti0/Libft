/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontive <dfontive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:00:40 by dfontive          #+#    #+#             */
/*   Updated: 2024/12/11 17:43:51 by dfontive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*destination;
	unsigned const char	*source;

	i = 0;
	if (dest == NULL && src == NULL)
		return (dest);
	destination = dest;
	source = src;
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (dest);
}

/* int	main(void)
{
	char src[] = "Hello, my name is Manolo";
	char dest[50];
	ft_memcpy(src, NULL, 5);
	printf("%s", dest);
} */