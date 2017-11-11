/*
 * fact.c
 *
 *  Created on: Nov 11, 2017
 *      Author: Sheida
 */
#include<stdio.h>
#include<stdlib.h>

int fact (int);

int main(){
	int res,a;

	res=fact (3);
	printf("= %d\n",res);
	return res;
}

int fact(int a){
	int sol=0;
	if(a==1 || a==0){
		printf("%d",a);
		return 1;
	}

	printf("%d *",a);
	sol=a*fact(--a);



	return sol;
}


