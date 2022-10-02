/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 19:51:13 by yaidriss          #+#    #+#             */
/*   Updated: 2022/10/02 21:09:40 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	if (!dst || !src)
		return (NULL);
	i = -1;
	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	while (++i < n)
		s2[i] = s1[i];
	return (dst);
}
