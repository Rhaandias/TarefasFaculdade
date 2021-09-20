/*ESTRUTURA DE SELEÇÃO-
6. Um posto está vendendo combustíveis com a seguinte tabela de descontos:
[...]
Escreva um algoritmo que leia o número de litros vendidos e o tipo de 
combustível (codificado da seguinte forma: 1-álcool, 2-gasolina), calcule e 
imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da 
gasolina é R$ 3,30 e o preço do litro do álcool é R$ 2,90.  
*/
#include<stdio.h>

main(){
	int opcao;
	float total, subtotal, litros;
	
	printf("Litros vendidos: ");
	scanf("%f",&litros);
	printf("Tipo de combustível:\n\n1-álcool\n2-gasolina\n\n");
	scanf("%d",&opcao);
	
	if(opcao==1){
		subtotal=litros*2.90;
		if(litros>0 and litros<=20){
			total=subtotal-(subtotal*0,03);
			printf("Total: R$%.2f", total);
		}else if(litros>20){
			total=subtotal-(subtotal*0.05);
			printf("Total: R$%.2f",total);
		}else{
			printf("Valor de Litros Inválido!!");
		}
	}else if(opcao==2){
		subtotal=litros*3.30;
		if(litros>0 and litros<=20){
			total=subtotal-(subtotal*0.04);
			printf("Total:R$%.2f",total);
		}else if(litros>20){
			total=subtotal-(subtotal*0.06);
			printf("Total: R$%.2f",total);
		}else{
			printf("Valor de Litros Inválido!! ");
		}
	}
}
