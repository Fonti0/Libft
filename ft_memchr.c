/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontive <dfontive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 19:07:52 by dfontive          #+#    #+#             */
/*   Updated: 2024/12/10 21:32:50 by dfontive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*string;
	unsigned char	ch;	

	string = (unsigned char *)s;
	ch = (unsigned char)c;
	while (n > 0)
	{
		if (*string == ch)
			return (string);
		string++;
		n--;
	}
	return (NULL);
}

/* int	main(void)
{
	unsigned char s[] = "tomorrow I'm going to madrid";
	printf ("%s", (char *)ft_memchr(s, 'm', 2));
	return (0);
} */