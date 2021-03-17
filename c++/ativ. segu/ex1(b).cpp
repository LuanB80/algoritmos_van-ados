#include <stdio.h>
 

void fatowhile(int x){
    int i, fatorial;
    fatorial = 1;
    
    i = 1;
    while (i <= x) 
    {
        fatorial = fatorial *i;
        i++;        
    }
    printf("O fatorial e = %d", fatorial );
}


int main(){
    int numero;
    printf("Digite um numero, para saber o fatorial desse numero:  ");
    scanf("%d", &numero);
    fatowhile(numero);
}