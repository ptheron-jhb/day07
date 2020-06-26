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
char **ft_split_whitespaces(char *str)
{ char **tab;
int i;
int j;
int k;
i = 0;
j = 0;
tab = malloc(ct_wd(str));
while (str[j])
{
	k = 1;
	while (is_separator(str[j]))
j++;
*(tab + i) = (char *)malloc(sizeof(char) * ((ct_len(j, str) + 1)));
while (!(is_separator(str[j])))
{
	tab[i][k - 1] = str[j++];
	k++;
}
tab[i++][k - 1] = '\0';
}
tab[i] = 0;
return (&tab[0]);
}