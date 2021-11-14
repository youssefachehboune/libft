/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:49:58 by yachehbo          #+#    #+#             */
/*   Updated: 2021/11/01 18:37:10 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dsti;
	size_t	srci;
	size_t	totlen;

	if (dstsize == 0)
		return (ft_strlen(src));
	else if (dstsize < ft_strlen(dst))
		totlen = ft_strlen(src) + dstsize;
	else
		totlen = ft_strlen(src) + ft_strlen(dst);
	dsti = 0;
	while (dst[dsti])
		dsti++;
	srci = 0;
	while (src[srci] && dsti < dstsize - 1)
	{
		dst[dsti] = src[srci];
		dsti++;
		srci++;
	}
	dst[dsti] = '\0';
	return (totlen);
}
