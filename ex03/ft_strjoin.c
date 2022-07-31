/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <sorungta@42bangkok.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 03:26:04 by mac               #+#    #+#             */
/*   Updated: 2022/07/31 04:15:49 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		n;
	int		a;
	int		b;
	int		count;

	b = 0;
	n = 0;
	a = 0;
	count = 1;
	while (a < size)
		count += ft_strlen(strs[a++]) + ft_strlen(sep);
	tab = malloc(sizeof(char *) * count);
	a = -1;
	while (++a < size)
	{
		while (strs[a][b])
			tab[n++] = strs[a][b++];
		b = 0;
		while (sep[b] && a < size - 1)
			tab[n++] = sep[b++];
		b = 0;
	}
	tab[n] = '\0';
	return (tab);
}
/*
int	main(void)
{
	char	*result;
	char	*c1;
	char	*c2;
	char	*c3;
	char	**ptr;

	c1 = "1";
	c2 = "2";
	c3 = "3";
	ptr = malloc(sizeof(char *) * 3);
	ptr[0] = c1;
	ptr[1] = c2;
	ptr[2] = c3;
	//for (int i=0; i < 3; i++)
	//	printf("%s\n", ptr[i]);
	result = ft_strjoin(3, ptr, "----");
	printf("%s\n", result);
	free(result);
	free(ptr);
}*/
