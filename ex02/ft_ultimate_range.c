/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <sorungta@42bangkok.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 03:07:55 by mac               #+#    #+#             */
/*   Updated: 2022/07/31 04:15:18 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	n;

	n = 0;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int *) * (max - min));
	if (!*range)
		return (-1);
	while (min < max)
		(*range)[n++] = min++;
	return (n);
}
/*
int	main(void)
{
	int	*res;
	int	i;
	int	size;

	res = NULL;
	size = ft_ultimate_range(&res, 5, 10);
	printf("is_null? %d\n", res == NULL);
	for (i = 0; i < 5; i++)
		printf("%d,", res[i]);
	printf("\n");
	res = NULL;
	size = ft_ultimate_range(&res, -20, -17);
	printf("is_null? %d\n", res == NULL);
	for (i = 0; i < 3; i++)
		printf("%d,", res[i]);
	printf("\n");
	res = (int *)1;
	size = ft_ultimate_range(&res, 10, 5);
	printf("is_null? %d\n", res == NULL);
	return (0);
}
*/
