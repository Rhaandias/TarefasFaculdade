/*ESTRUTURA DE SELE��O
1. Fa�a um algoritmo para ler dois n�meros inteiros e informar se estes s�o iguais 
ou diferentes. 
*/
#include<stdio.h>

main(){
	int num1,num2;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%d",&num1);
	printf("Digite o segundo n�mero: ");
	scanf("%d",&num2);
	
	if(num1==num2){
		printf("\n\nS�o n�meros iguais");
	}else if(num1!=num2){
		printf("\n\nS�o n�meros diferentes");		
		}
}

