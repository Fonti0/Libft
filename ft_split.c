/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontive <dfontive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:14:32 by dfontive          #+#    #+#             */
/*   Updated: 2024/12/13 23:38:45 by dfontive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	word_count;

	i = 0;
	word_count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i - 1] == c || i == 0))
			word_count++;
		i++;
	}
	return (word_count);
}

static void	*total_free(char **s, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(s[i]);
		i++;
	}
	free (s);
	return (NULL);
}

static char	*complete_word(const char *s, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

static void	put_var_values(size_t *i, int *j, int *first_char)
{
	*i = 0;
	*j = 0;
	*first_char = -1;
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	int		j;
	int		first_char;
	char	**result;

	put_var_values(&i, &j, &first_char);
	result = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && first_char < 0)
			first_char = i;
		else if ((s[i] == c || i == ft_strlen(s)) && first_char >= 0)
		{
			result[j] = complete_word(s, first_char, i);
			if (!result[j])
				return (total_free(result, j));
			j++;
			first_char = -1;
		}
		i++;
	}
	result[j] = NULL;
	return (result);
}

/* int	main(void)
{
	int	i = 0;
	char c = ' ';
	const char s[] = "Hello my name is Darwin";
	char **result = ft_split(s, c);
	while (result[i])
	{
		printf("%s", result[i]);
		printf("\n");
		i++;
	}
	free(result);
	return (0);
} */
