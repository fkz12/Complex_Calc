#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int menu(int libs[]) {
//int menu(void) {

	int act;
	printf("Choice action:\n");
	if (1==libs[0]) printf("1. +\n");
	if (1==libs[1]) printf("2. -\n");
	if (1==libs[2]) printf("3. *\n");
	if (1==libs[3]) printf("4. /\n");
	scanf("%d", &act);	
	return act;
}
