/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gparpine <gparpine@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:52:41 by gparpine          #+#    #+#             */
/*   Updated: 2023/04/24 17:58:47 by gparpine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_words(char *str, char c)
{
	int	num_words;
	int	flag;

	num_words = 0;
	flag = 0;
	while (*str)
	{
		if (*str != c && flag == 0)
		{
			num_words++;
			flag = 1;
		}
		else if (*str == c)
			flag = 0;
		str++;
	}
	return (num_words);
}

char	**ft_split(char const *s, char c)
{
	int		num_words;
	char	**words;

	num_words = count_words(str);
}
