/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontive <dfontive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:25:47 by dfontive          #+#    #+#             */
/*   Updated: 2024/12/10 19:51:57 by dfontive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*duplicate;
	int		size;

	size = 0;
	while (s[size])
	{
		size++;
	}
	size = size + 1;
	duplicate = malloc((size) * sizeof(char));
	if (!duplicate)
		return (NULL);
	i = 0;
	while (size > 0)
	{
		duplicate[i] = s[i];
		i++;
		size--;
	}
	return (duplicate);
}

/* int main(void)
{
	const char s[] = "aaaaaaaaaaaaa";
    char *dup = ft_strdup(s);
    printf("%s", dup);
	free (dup);
	return (0);
} */