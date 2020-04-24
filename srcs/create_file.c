#include "../includes/pass_manager.h"

void	gather_info(user *user)
{
	int p = 1;

	printf("\nEntrez votre User_Name : ");
	scanf("%s", user->name);
	do {
		printf("\nEntrez un mot de passe pour votre archive des mots de passe : ");
		scanf("%s", user->pass);
		printf("\nConfirmez le mot de passe : ");
		scanf("%s", user->confirmed_pass);
		p = strcmp(user->pass, user->confirmed_pass);
		if (p != 0)
			printf("\nERREUR : Les deux mots de passe ne sont pas identiques !\n");
	} while (p != 0);
}

int		create_file(user *user)
{
	gather_info(user);
	
	user->f = fopen(user->name, "w");
}