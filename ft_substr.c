/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 20:30:50 by yaidriss          #+#    #+#             */
/*   Updated: 2022/10/09 18:18:52 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*result;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (len < 0 || ft_strlen(s) < start)
		result = malloc(sizeof(*s));
	else if (ft_strlen(s) + len < start)
		result = malloc((ft_strlen(s) - start + 1) * sizeof(*s));
	else
		result = malloc((len + 1) * sizeof(*s));
	if (!result)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
			result[j++] = s[i];
		i++;
	}
	result[j] = 0;
	return (result);
}
