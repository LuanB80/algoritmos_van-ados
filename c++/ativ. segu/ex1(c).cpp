#include <stdio.h>

int fatrecursividade(int x){
    if (x == 0 ){
        return 1;
    } else {
        return x * fatrecursividade(x-1);
    }
}


int main(){
    int numero;
    printf("Digite um numero, para saber o fatorial desse numero:  ");
    scanf("%d", &numero);
    printf("O fatorial e = %d", fatrecursividade(numero));
}