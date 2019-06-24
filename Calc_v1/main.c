#include <stdio.h>
#include <stdlib.h>
#include "func.h"
#include <dlfcn.h> //dynamic lib
int main(int argc, char* argv[]) {
	
	int act, res, dig;
	system("clear");

	while (1) {

	int libs[4]={0};
	printf("_________________________________________________");
	printf("\nInput activate libs (+ - * /).\nExample:\n1 0 0 1\nYou will activate '+' and '/' libs.\n");
	for (int i=0; i<4; i++) {
		scanf("%d", &libs[i]);
	}

	act = menu(libs);
//	act = menu();

		switch(act) {
		case 1:
			;
			void *sumlib; //handle
			double (*adress_sum)(double x); //adress
	
			sumlib = dlopen("/home/users/summer_2019/user12/user12/week3/calc/headers/libs/testing/sum.so", RTLD_LAZY);
			if (!sumlib) {
				fprintf(stderr,"dlopen() error: %s\n", dlerror());
				return 1;
			};
			adress_sum = dlsym(sumlib, "sum");
			dlclose(sumlib);	


			sum(num[0].re, num[0].im, num[1].re, num[1].im);
			break;
		case 2:		
			;			;
			void *diflib; //handle
			double (*adress_dif)(double x); //adress
	
			diflib = dlopen("/home/users/summer_2019/user12/user12/week3/calc/headers/libs/testing/dif.so", RTLD_LAZY);
			if (!diflib) {
				fprintf(stderr,"dlopen() error: %s\n", dlerror());
				return 1;
			};
			adress_dif = dlsym(diflib, "dif");
			dlclose(diflib);	
	
			dif(num[0].re, num[0].im, num[1].re, num[1].im);
			break;
		case 3:
			;			;			;
			void *mullib; //handle
			double (*adress_mul)(double x); //adress
	
			mullib = dlopen("/home/users/summer_2019/user12/user12/week3/calc/headers/libs/testing/mul.so", RTLD_LAZY);
			if (!mullib) {
				fprintf(stderr,"dlopen() error: %s\n", dlerror());
				return 1;
			};
			adress_mul = dlsym(mullib, "mul");
			dlclose(mullib);	

			mul(num[0].re, num[0].im, num[1].re, num[1].im);
			break;
		case 4:
			;
			void *devlib; //handle
			double (*adress_dev)(double x); //adress
	
			devlib = dlopen("/home/users/summer_2019/user12/user12/week3/calc/headers/libs/testing/dev.so", RTLD_LAZY);
			if (!devlib) {
				fprintf(stderr,"dlopen() error: %s\n", dlerror());
				return 1;
			};
			adress_dev = dlsym(devlib, "dev");
			dlclose(devlib);	
			
			dev(num[0].re, num[0].im, num[1].re, num[1].im);
			break;
		default:
			break;
		} 
	}

return 0;
}

