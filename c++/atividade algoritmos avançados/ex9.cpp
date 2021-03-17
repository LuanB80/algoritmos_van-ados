#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int notas[] = {10, 8, 5, 7}, soma = 0;
    float media;
    for( int i = 0; i < 4; i++) {
        soma = soma + notas[i];
    }
    media = soma / 4.0;
    printf("Sua Media e = %f", media);
    return 0;
}