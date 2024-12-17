/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontive <dfontive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:49:38 by dfontive          #+#    #+#             */
/*   Updated: 2024/12/10 21:46:25 by dfontive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)(s1[i]) - ((unsigned char)(s2[i])));
		i++;
	}
	return (0);
}

/* int	main(void)
{
	const char s1[] = "test\200";
	const char s2[] = "test\0";
	printf("%d", ft_strncmp(s1, s2, 6));
	return (0);
} */