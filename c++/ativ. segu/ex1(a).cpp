#include <stdio.h>
 

void fatofor(int x){
    int i;
    for ( i = 1; x > i ; x--)
    {
        i = i * x;
    }
    printf("O fatorial e = %d", i );
    
}

int main(){
    int numero;
    printf("Digite um numero, para saber o fatorial desse numero:  ");
    scanf("%d", &numero);
    fatofor(numero);
}