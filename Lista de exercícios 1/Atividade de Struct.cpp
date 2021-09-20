#include<stdio.h>
#include<windows.h>

struct aluno{
	char nome[20];
	float nota1;
	float nota2;
		
}; 

main(){
	aluno a1;
	float media;
	
	printf("Nome do aluno: ");
	fgets(a1.nome,15,stdin);
	fflush(stdin);
	printf("\n\n\nNota 1: ");
	scanf("%f",&a1.nota1);
	printf("\n\n\nNota 2: ");
	scanf("%f",&a1.nota2);
	media=(a1.nota1+a1.nota2);
	
	
	printf("\n\n\n\%s\n\n\n%.2f\n\n\n\%.2f\n\n\n%f",a1.nome,a1.nota1,a1.nota2,media);
	
	
	
}
