#include <stdio.h>
/*Estrutura de repeti��o 3.	Ler 2 valores, calcular e escrever a soma dos inteiros existentes entre os 
2 valores lidos (incluindo os valores lidos na soma). Considere que o segundo valor lido ser� sempre maior que o primeiro valor lido. */

int main(){
	int n1, n2, cont, soma=0;
	printf("Digite o primeiro n�mero: ");
	scanf("%d",&n1);
	printf("Digite o segundo n�mero: ");
	scanf("%d",&n2);
	
	for(cont=n1;cont<=n2;cont++){
		soma+=cont;
	}
	printf("Soma: %d",soma);
	
	


    
}
