/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 11:16:02 by tpereira          #+#    #+#             */
/*   Updated: 2021/01/31 11:29:01 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "ft_strs_to_tab.c"

int		main(void)
{
	char **a = (char**)malloc(sizeof(char*) * 3);
	a[0] = (char*)malloc(sizeof(char) * 1024);
	a[1] = (char*)malloc(sizeof(char) * 1024);
	a[2] = (char*)malloc(sizeof(char) * 1024);
	strcpy(a[0], "testing");
	strcpy(a[1], "12345, testing");
	strcpy(a[2], "42 42 42 42 42 42");

	t_stock_str *b = ft_strs_to_tab(3, a);

	for (int i = 0; b[i].str != 0; i++)
		printf("%s \n%s | %d\n", b[i].str, b[i].copy, b[i].size);
	return (0);
}
