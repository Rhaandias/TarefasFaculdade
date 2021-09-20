/**/
#include<stdio.h>
main(){
	int fatorial, num;
	
	printf("Digite o fatorial a ser calculado: ");
	scanf("%d",&fatorial);
	if(fatorial==0){
		printf("%d! = 1",fatorial);
	}
	while(fatorial!=0){
		if(total==0){
			total=fatorial;
		}
		total=total*(fatorial-1);
	}
	printf("%d! = %d",fatorial, total);
}
