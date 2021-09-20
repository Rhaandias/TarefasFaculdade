#include<stdio.h>
#include<windows.h>
 
/*  */
 
struct aluno{
    char nome[50];
    float media;
};
 
main(){
    aluno a[3];
    int cont, i;
    float maior;

    for(cont=0;cont<3;cont++){
        system("cls");
        fflush(stdin);
        printf("Nome: ");
        gets(a[cont].nome);
        printf("Media: ");
        scanf("%f",&a[cont].media);
    }

    system("cls");
    for(cont=0;cont<3;cont++){
        printf("Nome: %s", a[cont].nome);
        printf("\nMedia: %.1f", a[cont].media);
        printf("\n\n***\n\n\n");
    }
    system("cls");
    for(cont=0;cont<3;cont++){
    	if(cont==0){
    		maior=a[cont].media;
    		i=cont;
		}else{
			if(maior<a[cont].media){
				maior=a[cont].media;
				i=cont;
			}
		}		
	}
	printf("Aluno com maior média: %s", a[i].nome);	
 
}
