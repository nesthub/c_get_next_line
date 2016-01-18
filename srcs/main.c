/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlinhard <mlinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 19:53:28 by mlinhard          #+#    #+#             */
/*   Updated: 2016/01/18 20:26:19 by mlinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void print_gnl(t_gnl *gnl)
{
	while (gnl->next)
	{
		printf("%d: %s\n", gnl->fd, gnl->tmp);
		gnl = gnl->next;
	}
	printf("%d: %s\n", gnl->fd, gnl->tmp);
}

int		main(void)
{
	t_gnl	*gnl;

	gnl = get_next_line(1);
	gnl = get_next_line(1);
	gnl = get_next_line(2);
	gnl = get_next_line(2);
	gnl = get_next_line(3);
	gnl = get_next_line(5);
	gnl = get_next_line(4);
	gnl = get_next_line(1);
	print_gnl(gnl);

	return (0);
}
