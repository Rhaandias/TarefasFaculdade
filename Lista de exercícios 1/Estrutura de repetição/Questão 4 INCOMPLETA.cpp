#include <stdio.h>

/*Estrutura de repeti��o 
4.	Fa�a um algoritmo para ler o c�digo e o pre�o de 15 produtos, calcular e escrever (n�o deve ser usado vetor):
- o maior pre�o lido
- a m�dia aritm�tica dos pre�os dos produtos */

int main(){
	int cont, codigo;
	float media, preco, soma=0, maior; 
	
	for(cont=1;cont<=15;cont++){
		printf("Digite o c�digo do produto %d: ",cont);
		scanf("%d",&codigo);
		fflush(stdin);
		printf("Digite o pre�o do produto %f: ",cont);
		scanf("%.f",&preco);
		soma+=preco;
		if(cont==1){
			maior=preco;
		}else if(maior<preco){
			maior=preco;
		}
				
	}
	media=soma/15;
	printf("Maior pre�o: %.2f \nM�dia: %.2f",preco,media);
	

}
