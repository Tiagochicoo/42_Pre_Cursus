/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 16:21:24 by tpereira          #+#    #+#             */
/*   Updated: 2021/01/29 12:05:12 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char *str, char *charset)
{
	int 	i0;
	int		i1;
	int		i2;
	int 	i3;
	char	**str2;
	
	i0 = 0;
	while (str[i0])
	{
		i0++;
	}
	str2 = (char **)malloc(sizeof(char) * i0);
	i0 = 0;
	i2 = 0;
	i3 = 0;
	while (str[i0])
	{
		i1 = 0;
		while (charset[i1])
		{
			if (str[i0] != charset[i1])
			{
				if (str2[i2][i3])
				{
					str2[i2][i3] = str[i0];
					i3++;
				}

			}
			else
			{
				i2++;
				break ;
			}
			i1++;
		}
		i0++;
	}
	return (str2);
}

int		main(int argc, char **argv)
{
	int		index;
	char	**split;

	argc = argc + 0;
	split = ft_split("ImtmVrV6Ov8QrkGGUglBy7Vgsu iIsdl5XyT35Czv4xeu", "yenORYQ");
	//split = ft_split(argv[1], argv[2]);
	(void)argv;
	index = 0;
	printf("tab start\n");
	while (split[index])
	{
		printf("tab[%d]: $%s$\n", index, split[index]);
		index++;
	}
	printf("tab end\n");
	return (0);
}
