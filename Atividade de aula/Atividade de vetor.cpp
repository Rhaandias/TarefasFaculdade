/*Leia um vetor de 6 valores reais e exiba a média, o maior e o menor valor.*/
#include<stdio.h>
#include<windows.h>

main(){
	int cont;
	float vet[6], media=0, maior, menor;
	
	for(cont=0;cont<6;cont++){
		printf("Digite o %dº valor: ", cont+1);
		scanf("%f",&vet[cont]);
		media=media+vet[cont];
	}
	
	for(cont=0;cont<6;cont++){
		
		if(cont==0){
			menor=vet[cont];
			maior=vet[cont];
		}
		if(menor>vet[cont]){
			menor=vet[cont];
		}
		if(maior<vet[cont]){
			maior=vet[cont];			
		}
	}
	media=media/6;
	printf("Média: %.1f\nMaior: %f\nMenor: %f",media, maior, menor);
	
}
