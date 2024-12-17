/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontive <dfontive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:45:47 by dfontive          #+#    #+#             */
/*   Updated: 2024/12/11 19:50:17 by dfontive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*little == '\0')
		return ((char *)big);
	if (len < 0)
		return (NULL);
	while ((big [i]) && i < len)
	{
		if (big[i] == little[0])
		{
			while ((big[i + j] == little[j]) && (i + j) < len && little[j])
			{
				j++;
			}
		}
		if (little[j] == '\0')
			return ((char *)big + i);
		else
			j = 0;
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	const char big[] = "aaaaa";
	const char little[] = "aaaa";
	printf("%s", ft_strnstr(big, little, -1));
	return (0);
} */