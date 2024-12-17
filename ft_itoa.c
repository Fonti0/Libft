/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontive <dfontive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 20:35:48 by dfontive          #+#    #+#             */
/*   Updated: 2024/12/13 21:11:29 by dfontive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_len(int n)
{
	int	temp;
	int	len;

	len = 0;
	temp = n;
	if (n == 0)
		return (1);
	while (temp)
	{
		temp /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		total_len;
	char	*result;
	int		sign;

	sign = 1;
	total_len = count_len(n);
	if (n < 0)
	{
		sign = -1;
		total_len++;
	}
	result = malloc((total_len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[total_len] = '\0';
	if (n == 0)
		result[0] = '0';
	while (n)
	{
		result[--total_len] = ((n % 10) * sign) + '0';
		n /= 10;
	}
	if (sign == -1)
		result[0] = '-';
	return (result);
}

/* int main(void)
{
	char *res = ft_itoa(-234789-56);
    printf("%s", res);
	free (res);
    return (0);
} */