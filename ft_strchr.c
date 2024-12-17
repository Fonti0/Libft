/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontive <dfontive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:16:24 by dfontive          #+#    #+#             */
/*   Updated: 2024/12/10 21:34:06 by dfontive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	if (ch == '\0')
	{
		while (*s)
			s++;
		return ((char *)s);
	}
	while (*s)
	{
		if (*s == ch)
		{
			return ((char *)s);
		}
		s++;
	}
	return (NULL);
}

/* int	main(void)
{
	const char s[] = "0x57c6185e0020";
	printf("%s", ft_strchr(s, 'e'));
	return (0);
} */