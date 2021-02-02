/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 12:23:56 by tpereira          #+#    #+#             */
/*   Updated: 2021/02/02 18:37:44 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *array;

	array = malloc(sizeof(int) * (max - min) + 2);
	if (min >= max)
	{
		return (0);
	}
	array[0] = min;
	i = 1;
	while (i < max - min)
	{
		array[i] = array[i - 1] + 1;
		i++;
	}
	array[i] = '\0';

	return (array);
}
