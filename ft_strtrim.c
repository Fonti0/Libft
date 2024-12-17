/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontive <dfontive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:11:18 by dfontive          #+#    #+#             */
/*   Updated: 2024/12/11 17:42:48 by dfontive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		total_len;
	char	*string;

	total_len = 0;
	while (s1[total_len])
		total_len++;
	i = 0;
	while (s1[i] && is_in_set(s1[i], set))
		i++;
	while (s1[total_len - 1] && is_in_set(s1[total_len - 1], set))
		total_len--;
	if (total_len <= i)
		return (ft_calloc(1, sizeof(char)));
	else
		string = malloc((total_len - i + 1) * sizeof(char));
	if (!string)
		return (NULL);
	j = 0;
	while (s1[i] && i < total_len)
		string[j++] = s1[i++];
	string[j] = '\0';
	return (string);
}

/* int main(void)
{
	const char s1[]= "  \t \t \n   \n\n\n\t";
	const char set[] = "";
	char    *result = ft_strtrim (s1, set);
	printf("%s", result);
	free (result);
	return (0);
} */