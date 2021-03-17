#include <iostream>
#include <stdio.h>

using namespace std;
int main(){
	string nome;

do{
	cout<<"informe seu nome ";
	cin>>nome;
if(nome.length()<5){

	cout<<"Nome deveter 5 ou mais caracteres ";
}
else {
	cout<<" Bem vindo, " <<nome;

}

}while(nome.length()<5);
}
