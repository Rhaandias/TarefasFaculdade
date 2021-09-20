/*ESTRUTURA DE SELEÇÃO
3. Uma loja fornece 10% de desconto para funcionários e 5% de desconto para 
clientes vips. Faça um programa que calcule o valor total a ser pago por uma 
pessoa. O programa deverá ler o valor total da compra efetuada e um código que 
identifique se o comprador é um cliente comum (1), funcionário (2) ou vip (3). */
#include<stdio.h>

main(){
	int opcao;
	float valorcompra,cdesconto;
	
	printf("Digite valor total: R$");
	scanf("%f",&valorcompra);
	printf("\n\ncomum(1)\nfuncionário(2)\nou\nvip(3)\n\nQual tipo de cliente: ");
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
