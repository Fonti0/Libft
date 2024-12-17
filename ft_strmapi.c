/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontive <dfontive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 20:35:11 by dfontive          #+#    #+#             */
/*   Updated: 2024/12/13 20:50:10 by dfontive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*result;

	i = 0;
	result = malloc(ft_strlen(s) + 1 * sizeof(char));
	if (!result)
		return (NULL);
	while (i < ft_strlen(s))
	{
		result[i] = (*f)(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

/* char	to_upper(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return c;
} */

/* int main(void)
{
    const char s[] = "a23p5";
    printf("%s", ft_strmapi(s, to_upper));
    return (0);
} */