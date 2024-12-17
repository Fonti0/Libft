/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontive <dfontive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:10:42 by dfontive          #+#    #+#             */
/*   Updated: 2024/12/11 16:24:49 by dfontive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	total_len;

	if (!s)
		return (NULL);
	total_len = 0;
	while (s[total_len])
		total_len++;
	if (start >= total_len)
		return (ft_calloc(1, sizeof(char)));
	if (start + len > total_len)
		len = total_len - start;
	total_len = 0;
	substring = malloc((len + 1) * sizeof(char));
	if (!substring)
		return (NULL);
	while (total_len < len)
	{
		substring[total_len] = s[start];
		start++;
		total_len++;
	}
	substring [total_len] = '\0';
	return (substring);
}

/* int main(void)
{
	char const s[] = "aaabcdef";
	printf("%s", ft_substr(s, 3, 23452));
	return(0);
} */