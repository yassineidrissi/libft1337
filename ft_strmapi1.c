/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:36:52 by yaidriss          #+#    #+#             */
/*   Updated: 2022/10/08 20:53:46 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

int	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

char	*ft_strmapi1(char const *str, int (*f)(char))
{
	char	*result;
	int		i;

	i = -1;
	result = (char *)malloc(ft_strlen(str) + 1);
	while (str[++i])
		result[i] = f(i ,str[i]);
	result[i] = 0;
	return result;
}

int main(int ac, char **av)
{
	printf("%s\n av[1] is : %s", ft_strmapi1(av[1],ft_tolower),av[1]);
}