/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontive <dfontive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 10:21:05 by dfontive          #+#    #+#             */
/*   Updated: 2024/12/05 19:24:27 by dfontive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h> 

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	int		length;

	i = 0;
	length = 0;
	while (src[length] != '\0')
		length++;
	if (size == 0)
	{
		return (length);
	}
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (length);
}

/* int	main(void)
{
	char src[] = "LA JAULA";
	char dest[50];
	ft_strlcpy(dest, src, 4);
	printf("%s\n", dest);
	printf("%zu", ft_strlcpy(dest, src, 4));
	return (0);
} */