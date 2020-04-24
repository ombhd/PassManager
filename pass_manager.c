/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pass_manager.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouykou <obouykou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 21:14:49 by obouykou          #+#    #+#             */
/*   Updated: 2020/04/24 21:43:45 by obouykou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/pass_manager.h"

int		is_new()
{
	int b;
	
	do
	{
		printf("Tapez 0 si Vous êtes un Nouveau Utilisateur de PassManager\nSinon, Tapez 1 :");
		scanf("%d", &b);
	} while (b != 0 && b != 1);
	return (b);
}

int 	main(void)
{
	user user;
	
	user.f = NULL;
	user.is_new = is_new();
	if (user.is_new == 0)
		create_file(&user);
	return (0);
}
