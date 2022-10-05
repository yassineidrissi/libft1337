/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 23:56:12 by yaidriss          #+#    #+#             */
/*   Updated: 2022/10/05 19:04:23 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_handle(int z)
{
	if (z == 0)
		return (ft_strdup("0"));
	return (ft_strdup("-2147483648"));
}

static void	fill(char *result, int i, int n)
{
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
	}
	result[i] = 0;
	while (n)
	{
		result[i - 1] = n % 10 + 48;
		n /= 10;
		i--;
	}
}

char	*ft_itoa(int n)
{
	int		num;
	int		i;
	char	*result;

	i = 0;
	num = n;
	if (n == 0 || n == -2147483648)
		return (ft_handle(n));
	if (num < 0)
		i++;
	while (num)
	{
		num /= 10;
		i++;
	}
	result = (char *)malloc(i + 1);
	if (!result)
		return (NULL);
	fill(result, i, n);
	return (result);
}

// int main(int ac,char **av)
// {
// 	(void)ac;
// 	printf("%s",ft_itoa(ft_atoi(av[1])));
// }