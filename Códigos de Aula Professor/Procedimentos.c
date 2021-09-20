#include<stdio.h>
#include<windows.h>
 
/*PROCEDIMENTOS*/

// protótipos
void mensagem();
void procedimento();
void somar();
 

int x=100; //variável global
 
void mensagem(){
    printf("\nBoa noite!!");
    procedimento();
    x=30;
}
 
void somar(){
    int a,b;//variável local.
    printf("\n\ndigite dois numeros: ");
    scanf("%d%d",&a,&b);
    printf("\nA soma eh: %d", (a+b) );
}
 

main(){    
    somar();
    printf("\n\n%d", x);
}
 
 

// definição do procedimento
void procedimento(){    
    printf("\nFatec");
    printf("\nBauru");
}
