/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 10:38:47 by yachehbo          #+#    #+#             */
/*   Updated: 2021/11/09 18:10:25 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

static size_t	ft_min(char const *s, unsigned int start, size_t len)
{
	size_t	slen;

	slen = ft_strlen(s) - start;
	if (len < slen)
		return (len);
	else
		return (slen);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	min;

	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	min = ft_min(s, start, len);
	dest = (char *)malloc(sizeof(char) * min + 1);
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, s + start, min);
	dest[len] = '\0';
	return (dest);
}
