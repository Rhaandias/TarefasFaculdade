/**/
#include<stdio.h>
float chico=1.50, juca=1.10;
int anos;

while(chico>juca){
	chico+=0.02;
	juca+=0.03;
	anos++;
}

printf("Serão necessários %d para que Juca seja maior que Chico.",anos);

