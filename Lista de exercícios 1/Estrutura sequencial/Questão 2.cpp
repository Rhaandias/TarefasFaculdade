#include<stdio.h>
/*ESTRUTURA SEQUENCIAL
2. Ler uma medida em polegadas e imprimir a equivalente em cent�metros, 
sabendo que 2.54 cm equivale a 1 polegada. 
*/
main(){
	int polegadas;
	float cm;
	
	printf("Digite a medida em polegadas: ");
	scanf("%d",&polegadas);
	cm=polegadas*2.54;
	printf("\n\nMedida em cent�metros: %.2f",cm);
}
