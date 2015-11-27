/************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguillon <mguillon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/24 12:30:39 by mguillon          #+#    #+#             */
/*   Updated: 2015/11/19 12:47:04 by mguillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Lis(niveau, repertoire, profondeur)
	si tu peux pas ouvrir repertoire
		message d'erreur
		sortir
	sinon 
		rentre dans le dossier (chdir)
		tant qu'il reste des trucs dans le dossier
			recup stats
			si stats sont ok retournees et wue c'est un dossier
				si c'est pas un repertoire cache
					si la profondeur est < prof demandee utilisateur
						indente
						affiche le nom du dossier avec un @ si lien symb
						si c'est un dossier
							lis (niveau+1, repertoire, profondeur)
						x
					x
				x
			x
		x

void	lecture(int niveau, char *repertoire, int profondeur)
{
	DIR *directory;
	struct dirent *contenu;
	struct	stat	stat_elem;

	if ((d = opendir(repertoire)) == NULL) 
	{
		ft_putstr('Impossible d'ouvrir le dossier');
		ft_putstr(repertoire);
		return ;
	}
	opendir(repertoire);//rentre dans le dossier
	//chdir(repertoire);
	while(contenu. = readdir(directory))//tt qu'il reste des trucs ds le dossier
	{
			//recup stats
			stat_elem
	}



}
