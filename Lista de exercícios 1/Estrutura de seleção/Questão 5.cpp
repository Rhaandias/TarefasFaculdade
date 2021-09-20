/*ESTRUTURA DE SELEÇÃO-
5. Elabore um algoritmo que dada a idade de um nadador classifica-o em uma das 
seguintes categorias: 
infantil A = 5 - 7 anos 
infantil B = 8-10 anos 
juvenil A = 11-13 anos 
juvenil B = 14-17 anos 
adulto = maiores de 18 anos 
*/
#include<stdio.h>

main(){
	int idade;
	printf("Informe a idade do nadador: ");
	scanf("%d",&idade);
	
	if(idade>=5 and idade<=7){
		printf("Categoria: infantil A");
	}else if(idade>=8 and idade<=10){
		printf("Categoria: infantil B");
	}else if(idade>=11 and idade<=13){
		printf("Categoria: juvenil A");
	}else if (idade>=14 and idade<=17){
		printf("Categoria: juvenil B");
	}else if (idade>=18){
		printf("Categoria: adulto");
	}else{
	printf("Valor inválido!! Digite valor acima de 4");
	}
}
