#include<stdio.h>
#include<windows.h>
#include<conio.h>

/*ATIVIDADE DE AULA
Criar um procedimento para cada operação: somar; subtrair; multiplicar; dividir.
(usar números reais (float))*/

void somar();
void subtrair();
void multiplicar();
void dividir();


void somar(){
	float soma, a, b;
	printf("\nDigite o primeiro numero a somar: ");
	scanf("%f",&a);
	printf("Digite o segundo número a somar: ");
	scanf("%f",&b);
	soma=a+b;
	printf("\n%.2f + %.2f = %.2f", a, b, soma);
}
void subtrair(){
	float subtracao, a, b;
	printf("\nDigite o primeiro numero a se subtraído: ");
	scanf("%f",&a);
	printf("Digite o segundo número a subtrair: ");
	scanf("%f",&b);
	subtracao=a-b;
	printf("\n%.2f - %.2f = %.2f", a, b, subtrair);
}
void multiplicar(){
	float multiplicacao, a, b;
	printf("\nDigite o primeiro numero a multiplicar: ");
	scanf("%f",&a);
	printf("Digite o segundo número a multiplicar: ");
	scanf("%f",&b);
	multiplicacao= a*b;
	printf("\n%.2f + %.2f = %.2f", a, b, multiplicacao);
}
void dividir(){
	float divisao, a, b;
	printf("\n\nDigite o número a ser dividido: ");
	scanf("%f",&a);
	printf("Digite o número a dividir");
	scanf("%f",&b);
	divisao= a/b;
	printf("%.2f/%.2f= %.2f", a, b, divisao);
}



main(){
	int op=1;
	while(op!=0){
		system("cls");
		printf("\n1-SOMAR\n");
		printf("2-SUBTRAIR\n");
		printf("3-MULTIPLICAR\n");
		printf("4-DIVIDIR\n");
		printf("0-SAIR\n");
		scanf("%d",&op);
		fflush(stdin);
		
		switch(op){
			case 1:
				somar();
				getch();
			break;
			case 2:
				subtrair();
				getch();
			break;
			case 3:
				multiplicar();
				getch();
			break;
			case 4: 
				dividir();
				getch();
			break;
			default:
				printf("\n\nDigito Inválido!!");
				getch();
				
		}	
	}			
}
