#include<stdio.h>
#include<windows.h>

/*Crie um programa que permita armazenar o nome e a altura de 10 pessoas. 
Cada pessoa deve ser representada por uma struct dentro de um vetor. Preencher as 10 posições e exibir as 10 posições*/
#define n_pessoas 10

struct pessoas{
	char nome[50];
	float altura;	
};

main()
{
	pessoas a[n_pessoas];
	int cont;
	
	for(cont=0;cont<n_pessoas;cont++)
	{
		printf("\nInserir nome: ");
		gets(a[cont].nome);
		printf("Inserir altura: ");
		scanf("%f",&a[cont].altura);
		fflush(stdin);
	}
	system("cls");
	
	for(cont=0;cont<n_pessoas;cont++)
	{
		printf("\n\nNOME: %s\nALTURA: %.2f",a[cont].nome, a[cont].altura);
		
	}
	
	
}
