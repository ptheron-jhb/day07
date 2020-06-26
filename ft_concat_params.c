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
char *ft_concat_params(int argc, char **argv)
{
	int length;
	int i;
	char *str;
	length = cal_length(argc, argv);
	str = malloc(sizeof(str) * (length + 1));
	i = 1;
	while (i < argc)
	{
		str= ft_strcat(str, argv[i]);
		i++;
		}
		str[length + argc - 2] = '\0';
		return(str);
		}