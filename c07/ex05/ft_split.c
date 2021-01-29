/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 16:21:24 by tpereira          #+#    #+#             */
/*   Updated: 2021/01/28 19:13:43 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char *str, char *charset)
{
	int 	i;
	char	**str2;
	
	i = 0;
	while (str[i])
	{
		i++;
	}
	str2 = malloc(sizeof(char) * i + 1);
	i = 0;
	while (str[i])
	{
		if (str[i] == *charset)
		{
			while (*charset)
			{
				if (str[i] != *charset)
				{
					break ;
				}
				charset++;
				i++;
			}
			i++;
		}
		else
		{
			str2[i] = str[i];
			i++;
		}
	}
	str2 = 
	return (*str2);
}

int		main(int argc, char **argv)
{
	int		index;
	char	**split;

	argc = argc + 0;
	//split = ft_split("ImtmVrV6Ov8QrkGGUglBy7Vgsu iIsdl5XyT35Czv4xeu", "yenORYQ");
	split = ft_split(argv[1], argv[2]);
	index = 0;
	printf("tab start\n");
	while (split[index])
	{
		printf("tab[%d]: $%s$\n", index, split[index]);
		fflush(stdout);
		index++;
	}
	printf("tab end\n");
	return (0);
}
