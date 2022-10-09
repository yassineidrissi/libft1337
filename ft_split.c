/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 23:50:45 by yaidriss          #+#    #+#             */
/*   Updated: 2022/10/08 20:12:58 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countword(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] && s[i] == c)
		i++;
	i--;
	while (s[++i])
		if (s[i] == c && s[i + 1] != (c && '\0'))
			count++;
	return (count + 1);
}

char	*ft_add_word(char const *s, int i, int j)
{
	char	*word;
	int		k;

	k = 0;
	word = (char *)malloc(sizeof(char) * (j - i + 1));
	while (i < j)
		word[k++] = s[i++];
	word[k] = '\0';
	return (word);
}

char	**ft_add_ponter(char const *s, char c)
{
	char	**result;

	result = (char **)malloc(sizeof(char *) * (ft_countword(s, c) + 1));
	if (!result)
		return (NULL);
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		k;

	if (!s)
		return (NULL);
	result = ft_add_ponter(s, c);
	k = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		j = i;
		while (s[j] != c && s[j])
			j++;
		if (j > i)
			result[k++] = ft_add_word(s, i, j);
		i = j;
	}
	result[k] = NULL;
	return (result);
}

//! seconde function
// s[j] = "     salam       khalid cv hello"
// int	ft_countword(char const *s, char c)
// {
//     int    i;
//     int    count;

//     i = 0;
//     count = 0;
//     while (s[i] && s[i] == c)
//         i++;
//     i--;
//     while (s[++i])
//         if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
//             count++;
//     return (count + 1);
// }

// char    *ft_add_word(char const *s, int i, int j)
// {
//     char    *word;
//     int        k;

//     k = 0;
//     word = (char *)malloc(sizeof(char) * (j - i + 1));
//     while (++i <= j)
//         word[k++] = s[i];
//     word[k] = '\0';
//     return (word);
// }

// char	**ft_split(char const *s, char c)
// {
// 	char    **result;
// 	int        i;
//     int        j;
//     int        k;

//     k = 0;
//     i = 0;
//     j = 0;
//     if (!s)
//         return (NULL);
//     result = (char **)malloc(sizeof(char *) * (ft_countword(s, c) + 1));
//     if (!result)
//         return (NULL);
//     while (s[i])
//     {
//         j = i;
// 		if(s[i] != c  )
//         if (s[i] == c && s[i + 1] != c && s[i +1] != '\0')
//             while (s[j + 1] != c && s[j + 1] != '\0')
//                 j++;
//         if (i != j)
//             result[k++] = ft_add_word(s, i, j);
//         i++;
//     }
//     result[k] = NULL;
//     return (result);
// }

// int main() {
//   char str[] = "salam     cv  dkj bikhir  ";
//   char **result = ft_split(str, ' ');
// 