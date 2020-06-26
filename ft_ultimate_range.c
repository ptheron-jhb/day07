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
int ft_ultimate_range(int **range, int min, int max)
{
	int i = 0;
	*range = (int *)
	malloc(sizeof(**range) * (max - min + 1));
	if(min >= max)
	{
		*range = NULL;
		return (0);
		}
		while(i < (max - min))
		{
			range[0][i] = min + i;
			i ++;
			}
			return(i);
			}
			// int main(void)
			{
			// int i = 0;
			// int *prt; 
			// prt = ft_range(12, 20);
			// while(i <= 7)
				// { // printf("%d", prt[i]);
			// i++;
			// }
			//
			// ptr = ft_range(3, 5);
			//
			// printf("%d", ft_range(2, 5));
			// return 0;
			// }