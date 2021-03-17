#include <iostream>
#include <stdio.h>

using namespace std;

int fatorial(int x){
    for(int i = 1;x > 1;x--){
    i = i * x;
    
    }
    printf("O fatorial e = %d", fatorial(x));

}


int main() {
    int numero;
    printf("Digite um numero, para saber o fatorial desse numero:  ");
    scanf("%d", &numero);
    fatorial(numero);

}
