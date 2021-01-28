/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 12:23:56 by tpereira          #+#    #+#             */
/*   Updated: 2021/01/28 12:54:10 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_range(int min, int max)
{
	int i;
	int *array;

	if (min >= max)
	{
		return (0);
	}
	i = 1;
	array[0] = min;
	while (i < max)
	{
		array[i] += 1;
		i++;
	}
	array[i] = '\0';

	return (array);
}

int		main(void)
{
	
	return (0);
}
