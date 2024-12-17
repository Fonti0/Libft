/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontive <dfontive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 19:23:43 by dfontive          #+#    #+#             */
/*   Updated: 2024/12/10 22:40:27 by dfontive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	size_t			total_length;
	unsigned char	*ptr;

	i = 0;
	total_length = nmemb * size;
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (ptr);
	while (i < total_length)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

/* int	main(void)
{
	char *str;
	str = (void *)ft_calloc(10, sizeof(char));
	printf("%s", str);
	free (str);
	return (0);
} */