#include <stdio.h>
#include <stdlib.h>
#include "dif.h"

void dif(double re1, double im1, double re2, double im2) {
	double r=0, i=0;
	printf("Dif:\n");
	printf("a-b=[%.f + %.fi]-[%.f + %.fi]\n", re1, im1, re2, im2);
	r=re1-re2;
	i=im1-im2;
	printf("a-b=%.f - %.fi \n", r, i);
}
