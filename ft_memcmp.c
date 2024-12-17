/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontive <dfontive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 19:52:38 by dfontive          #+#    #+#             */
/*   Updated: 2024/12/10 22:21:13 by dfontive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (str1[i] != str2[i])
			return ((unsigned int)str1[i] - (unsigned int)str2[i]);
		i++;
		n--;
	}
	return (0);
}

/* int	main(void)
{
	unsigned char s1[] = "Hello, my name is";
	unsigned char s2[] = "Hello, my name is Daniel";
	printf("%d", ft_memcmp((char *)s1, (char *)s2, 5));
	return (0);
} */