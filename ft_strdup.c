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
char *ft_strdup(char *src)
{
	int s;
	char *dest;
	int i;
	i = 0;
	s = 0;
	while (src[s] != '\0')
		s++;
	dest = (char *)malloc(sizeof(*dest) * (s + 1));
	while (i < s)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
int main(void)
{
	printf("%s", ft_strdup("Salut"));
	return 0;
}