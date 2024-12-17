/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontive <dfontive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:44:11 by dfontive          #+#    #+#             */
/*   Updated: 2024/12/10 22:13:21 by dfontive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	value;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	value = (unsigned char)c;
	while (i < n)
	{
		ptr[i] = value;
		i++;
	}
	return (s);
}

/* int	main(void)
{
	char s[] = "";
	ft_memset(s, 'A', 4);
	printf("%s", s);
	return (0);
} */