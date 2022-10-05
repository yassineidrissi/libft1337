/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:04:51 by yaidriss          #+#    #+#             */
/*   Updated: 2022/10/05 19:13:05 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	i;

	i = -1;
	result = (char *)malloc(ft_strlen(s) + 1);
	if (!s || !result)
		return (NULL);
	while (++i < ft_strlen(s))
		result[i] = f(i, s[i]);
	result[i] = 0;
	return (result);
}
