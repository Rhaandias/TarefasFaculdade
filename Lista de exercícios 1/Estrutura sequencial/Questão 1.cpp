/*ESTRUTURA SEQUENCIAL - 
1. Fazer um algoritmo que leia um n�mero inteiro e escreva o seu antecessor e o seu sucessor.*/
#include<stdio.h>
#include<windows.h>


main(){
	int n;
	
	printf("Informe o n�mero: ");
	scanf("%d",&n);
	printf("\n\nAntecessor: %d\n\nSucessor: %d",n-1,n+1);
} 
