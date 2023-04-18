/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gparpine <gparpine@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:22:52 by gparpine          #+#    #+#             */
/*   Updated: 2023/04/18 14:22:00 by gparpine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * strlcpy() take the full size of the destination buffer and guarantee
 * NUL-termination if there is room.  Note that room for the NUL should
 * be included in dstsize.  Also note that strlcpy() only operate on true
 * ''C'' strings. This means that src must be NUL-terminated.
 *
 * strlcpy() copies up to dstsize - 1 characters from the string src to dst,
 * NUL-terminating the result if dstsize is not 0.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	int		i;

	src_len = ft_strlen(src);
	i = -1;
	if (dstsize != 0)
	{
		while (src[++i] && i < (dstsize - 1))
			dst[i] = src[i];
		dst[i] = '\0';
	}
	return (src_len);
}
