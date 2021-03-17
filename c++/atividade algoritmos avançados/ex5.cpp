#include <iostream>
#include <stdio.h>
#include <string.h>

int main(){
	char nome[10];
    do{
       printf("Qual seu nome? ");
       scanf("%s", nome);
    if(strlen(nome) < 5) {
       printf("O nome deve ter mais de 5 caracteres  ");
    } 
     else {
        printf("Bem vindo %s", nome);
    }

}    while (strlen(nome) < 5);

}