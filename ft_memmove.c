/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 22:57:51 by yaidriss          #+#    #+#             */
/*   Updated: 2022/10/03 22:57:52 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	i = -1;
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (d > s && s + len > d)
		while (++i < len)
			d[len - i - 1] = s[len - i - 1];
	else
		while (++i < len)
			d[i] = s[i];
	return (dst);
}
