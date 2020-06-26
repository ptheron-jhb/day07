/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptheron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 11:48:50 by ptheron           #+#    #+#             */
/*   Updated: 2020/06/22 11:50:14 by ptheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
int *ft_range(int min, int max)
{
	int *str;
	int i;
	int len;
	if (min >= max)
	{
		return (NULL);
		}
		i = 0;
		len = max - min;
		str = (int *)malloc(sizeof(min) * len);
		while (i < len)
		{
			str[i] = min + i;
			i++;
			}
			return (str);
			}
			int main(void)
			{
				int* res;
				int i;
				res = ft_range(5, 10);
				for (i = 0; i < 5; i++)
					printf("%d,", res[i]);
				printf("\n");
				res = ft_range(-20, -15);
				for (i = 0; i < 5; i++)
					printf("%d,", res[i]);
				printf("\n"); res = ft_range(-2147483648, -2147483646);
				for (i = 0; i < 1; i++)
					printf("%d,", res[i]); printf("\n"); res = ft_range(10, 5); printf("%x\n", (unsigned int)res);
}