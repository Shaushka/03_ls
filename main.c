/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguillon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/19 16:19:22 by mguillon          #+#    #+#             */
/*   Updated: 2015/11/23 12:35:36 by mguillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <sys/stat.h>

int		main(int argc, char **argv)
{
	//si il existe ? stat / lstat
		if (argc == 1)
		{
			struct stat poney;

			stat(".", &poney);
			printf("%lld\n", poney.st_size);
			//int stat(const char *restrict path, struct stat *restrict buf);
		}
	//readdir pour voir les fichiers
}
