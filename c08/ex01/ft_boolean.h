/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 14:31:46 by tpereira          #+#    #+#             */
/*   Updated: 2021/01/30 15:00:07 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>
# define TRUE 1
# define FALSE 0
# define SUCCESS 0
# define EVEN(x) x % 2 == 0
# define EVEN_MSG "I have an even number of arguments."
# define ODD_MSG "I have an odd number of arguments."
typedef int		t_bool;
#endif
