#include<stdio.h>
#include<windows.h>
 
/*PROCEDIMENTOS*/

// prot�tipos
void mensagem();
void procedimento();
void somar();
 

int x=100; //vari�vel global
 
void mensagem(){
    printf("\nBoa noite!!");
    procedimento();
    x=30;
}
 
void somar(){
    int a,b;//vari�vel local.
    printf("\n\ndigite dois numeros: ");
    scanf("%d%d",&a,&b);
    printf("\nA soma eh: %d", (a+b) );
}
 

main(){    
    somar();
    printf("\n\n%d", x);
}
 
 

// defini��o do procedimento
void procedimento(){    
    printf("\nFatec");
    printf("\nBauru");
}
