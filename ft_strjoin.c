/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontive <dfontive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:12:00 by dfontive          #+#    #+#             */
/*   Updated: 2024/12/10 19:58:30 by dfontive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*mix;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	mix = malloc((i + j + 1) * sizeof(char));
	if (!mix)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		mix[i] = s1[i];
		i++;
	}
	while (s2[j])
		mix [i++] = s2[j++];
	mix[i] = '\0';
	return (mix);
}

/* int main(void)
{
    char const s1[] = "HOLA ME ";
    char const s2[] = "LLAMO DANIEL";
    char *result = ft_strjoin (s1, s2);
    printf("%s", result);
    free (result);
    return (0);
} */