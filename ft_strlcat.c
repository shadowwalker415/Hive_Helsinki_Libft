/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnkwelle <jnkwelle@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:36:55 by jnkwelle          #+#    #+#             */
/*   Updated: 2024/05/13 17:18:23 by jnkwelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	total_length;
	size_t	dst_len;
	size_t	counter;

	dst_len = ft_strlen(dst);
	if (dst_len > dstsize)
		total_length = dstsize + ft_strlen(src);
	else
		total_length = dst_len + ft_strlen(src);
	dst += dst_len;
	counter = 0;
	while (counter + dst_len + 1 < dstsize && src[counter])
	{
		dst[counter] = src[counter];
		counter++;
	}
	if (dstsize && !(dstsize < dst_len))
		dst[counter] = 0;
	return (total_length);
}
