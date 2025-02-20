/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 11:07:09 by tpereira          #+#    #+#             */
/*   Updated: 2021/01/28 12:16:41 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;

	len = 0;
	while (src[len])
	{
		len++;
	}
	dest = malloc(sizeof(char) * len + 1);
	len = 0;
	while (*src)
	{
		dest[len] = *src;
		src++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
