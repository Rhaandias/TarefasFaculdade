/*ESTRUTURA SEQUENCIAL
3. O custo de um carro novo ao consumidor é a soma do custo de fábrica com a 
porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). 
Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, 
escrever um algoritmo para ler o custo de fábrica de um carro, calcular e 
escrever o custo final ao consumidor. 
*/
#include<stdio.h>

#define impostos 0.45
#define distribuidor 0.28



main(){
	float custo_de_fabrica, custo_final, a, b;
	
	printf("Informe o custo de fábrica: ");
	scanf("%f",&custo_de_fabrica);
	a=custo_de_fabrica*impostos;
	b=custo_de_fabrica*distribuidor;
	custo_final=custo_de_fabrica+a+b;
		
	printf("\n\nCusto final: %.2f",custo_final);
	
}
