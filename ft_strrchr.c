/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gparpine <gparpine@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:22:52 by gparpine          #+#    #+#             */
/*   Updated: 2023/04/18 14:22:23 by gparpine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * The strrchr() function locates the last occurrence of c (converted to a
 * char) in the string pointed to by s. The terminating null character is
 * considered to be part of the string; therefore if c is ‘\0’, the
 * functions locate the terminating ‘\0’.
 */
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = -1;
	while (s[++i])
		;
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return (&((char *)s)[i]);
		i--;
	}
	return (0);
}
