/*ESTRUTURA DE SELE��O-
6. Um posto est� vendendo combust�veis com a seguinte tabela de descontos:
[...]
Escreva um algoritmo que leia o n�mero de litros vendidos e o tipo de 
combust�vel (codificado da seguinte forma: 1-�lcool, 2-gasolina), calcule e 
imprima o valor a ser pago pelo cliente sabendo-se que o pre�o do litro da 
gasolina � R$ 3,30 e o pre�o do litro do �lcool � R$ 2,90.  
*/
#include<stdio.h>

main(){
	int opcao;
	float total, subtotal, litros;
	
	printf("Litros vendidos: ");
	scanf("%f",&litros);
	printf("Tipo de combust�vel:\n\n1-�lcool\n2-gasolina\n\n");
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
			printf("Valor de Litros Inv�lido!!");
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
			printf("Valor de Litros Inv�lido!! ");
		}
	}
}
