/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gparpine <gparpine@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:22:52 by gparpine          #+#    #+#             */
/*   Updated: 2023/04/18 14:22:11 by gparpine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * The strnstr() function locates the first occurrence of the null-terminated
 * string needle in the string haystack, where not more than len characters
 * are searched. Characters that appear after a ‘\0’ character are not searched.
 * Since the strnstr() function is a FreeBSD specific API, it should only be
 * used when portability is not a concern.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[j] == 0)
		return ((char *)haystack);
	while (haystack[i])
	{
		while (haystack[i + j] && haystack[i + j] == needle[j] && len > (i + j))
			j++;
		if (!(needle[j]))
			return ((char *)haystack + i);
		j = 0;
		i++;
	}
	return (0);
}
