/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontive <dfontive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:12:33 by dfontive          #+#    #+#             */
/*   Updated: 2024/12/10 21:57:27 by dfontive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;

	i = 0;
	while (*s)
	{
		s++;
		i++;
	}
	while (i >= 0)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s--;
		i--;
	}
	return (NULL);
}

/* int	main(void)
{
	const char s[] = "0x591310d19021";
	printf("%s", ft_strrchr(s, '0'));
	return (0);
} */
