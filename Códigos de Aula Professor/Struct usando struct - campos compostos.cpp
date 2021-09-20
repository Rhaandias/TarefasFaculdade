#include<stdio.h>
#include<windows.h>



/* Struct usando outra struct (Campos compostos).*/



struct data{		
	int dia;
	int mes;
	int ano;
};

struct funcionario{
	char nome[50];
	data dataNascimento;
};


main(){
	funcionario f;
	printf("Nome: ");
	fgets(f.nome,50,stdin);
	printf("\nDia de nascimento: ");
	scanf("%d", &f.dataNascimento.dia);
	printf("\nMes de nascimento: ");
	scanf("%d", &f.dataNascimento.mes);
	printf("\nAno de nascimento: ");
	scanf("%d", &f.dataNascimento.ano);

system("cls");
printf("Nome: %s", f.nome);
printf("\nData de nascimento %d/%d/%d",f.dataNascimento.dia, f.dataNascimento.mes,f.dataNascimento.ano);
}
