/*ESTRUTURA DE SELE��O
4. Ler as notas da 1a. e 2a. avalia��es de um aluno. Calcular a m�dia aritm�tica 
simples e escrever uma mensagem que diga se o aluno foi ou n�o aprovado 
(considerar que nota igual ou maior que 6 o aluno � aprovado). Escrever tamb�m 
a m�dia calculada. */
#include<stdio.h>

main(){
	float nota1, nota2, media;
	
	printf("Insira a nota da 1�avalia��o: ");
	scanf("%f",&nota1);
	printf("Insira a nota da 2�avalia��o: ");
	scanf("%f",&nota2);
	media=(nota1+nota2)/2;
	
	if(media>=0 and media<6){
		printf("Aluno REPROVADO.");
	}else if(media>=6 and media<=10){
		printf("Aluno APROVADO");
	}else{
		printf("Valor de nota inv�lido!!");
	}
	
	
	
}
