/*Estrutura de seleção 
2. As maçãs custam R$ 1,30 cada se forem compradas menos de uma dúzia, e R$ 
1,00 se forem compradas pelo menos 12. Escreva um programa que leia o 
número de maçãs compradas, calcule e escreva o custo total da compra. 
*/
#include<stdio.h>

main(){
	int maca;
	float total;
	
	printf("Número de maçãs: ");
	scanf("%d",&maca);
	
	if(maca>0 and maca<12){
		total=maca*1.30;		
		printf("Custo total: R$%.2f",total);
	}else if(maca>=12){
		total=maca*1.00;
		printf("Custo total: R$%.2f",total);
	}else
	printf("Valor Inválido!!Digite valores acima de 0.");
	
}
