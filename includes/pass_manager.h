#ifndef PASS_MANAGER_H
#define PASS_MANAGER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

# define TRUE 1
# define FALSE 0

typedef	struct	user
{
	int is_new;
	char name[256];
	char pass[256];
	char confirmed_pass[256];
	FILE *f;
}				user;

int		create_file(user *user);


#endif // !PASS_MANAGER_H