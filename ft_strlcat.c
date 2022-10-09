/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 23:11:41 by yaidriss          #+#    #+#             */
/*   Updated: 2022/10/09 18:22:22 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t			i;
	size_t			len_dest;

	i = 0;
	if (!size)
		return (ft_strlen(src));
	len_dest = ft_strlen(dest);
	if (len_dest >= size)
		return (ft_strlen(src) + size);
	while (size != 0 && src[i] != '\0' && (len_dest + i < size - 1))
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (ft_strlen(src) + len_dest);
}
