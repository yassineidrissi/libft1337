/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 22:57:21 by yaidriss          #+#    #+#             */
/*   Updated: 2022/10/03 22:57:24 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

void	*ft_memchr(const void *s1, int c, size_t n)
{
	unsigned char		*temp;
	size_t				i;

	i = 0;
	temp = (unsigned char *)s1;
	if (!n)
		return (0);
	while (i < n)
	{
		if (temp[i] == (unsigned char )c)
			return ((void *)&temp[i]);
		i++;
	}
	return (0);
}
