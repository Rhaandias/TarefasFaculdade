/*ESTRUTURA DE SELE��O
3. Uma loja fornece 10% de desconto para funcion�rios e 5% de desconto para 
clientes vips. Fa�a um programa que calcule o valor total a ser pago por uma 
pessoa. O programa dever� ler o valor total da compra efetuada e um c�digo que 
identifique se o comprador � um cliente comum (1), funcion�rio (2) ou vip (3). */
#include<stdio.h>

main(){
	int opcao;
	float valorcompra,cdesconto;
	
	printf("Digite valor total: R$");
	scanf("%f",&valorcompra);
	printf("\n\ncomum(1)\nfuncion�rio(2)\nou\nvip(3)\n\nQual tipo de cliente: ");
	scanf("%d",&opcao);
	
	if(opcao==2){
		cdesconto=valorcompra*0.1+valorcompra;
		printf("Valor total: R$%.2f",cdesconto);
	}else if(opcao==3){
		cdesconto=valorcompra*0.05;
		printf("Valor total: R$%.2f",cdesconto);
	}else{
		printf("Valor total: R$%.2f",valorcompra);
	}
}
