#include <stdio.h>

/*Estrutura de repetição 
4.	Faça um algoritmo para ler o código e o preço de 15 produtos, calcular e escrever (não deve ser usado vetor):
- o maior preço lido
- a média aritmética dos preços dos produtos */

int main(){
	int cont, codigo;
	float media, preco, soma=0, maior; 
	
	for(cont=1;cont<=15;cont++){
		printf("Digite o código do produto %d: ",cont);
		scanf("%d",&codigo);
		fflush(stdin);
		printf("Digite o preço do produto %f: ",cont);
		scanf("%.f",&preco);
		soma+=preco;
		if(cont==1){
			maior=preco;
		}else if(maior<preco){
			maior=preco;
		}
				
	}
	media=soma/15;
	printf("Maior preço: %.2f \nMédia: %.2f",preco,media);
	

}
