/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 19:00:02 by tpereira          #+#    #+#             */
/*   Updated: 2021/01/31 11:27:18 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;
	int		i;

	len = 0;
	while (src[len])
	{
		len++;
	}
	if(!(dest = (char *)malloc(sizeof(char) * len + 1)))
	{
		return (NULL);
	}
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

struct	s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*s_str;
	int				i;

	if (!(s_str = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1))))
	{
		return (0);
	}
	i = 0;
	while (av[i] != 0 && i < ac)
	{
		s_str[i].size = ft_strlen(av[i]);
		s_str[i].str = av[i];
		s_str[i].copy = ft_strdup(av[i]);
		i++;
	}
	s_str[i].size = 0;
	s_str[i].str = 0;
	s_str[i].copy = 0;
	return (s_str);
}
