#include <iostream>
#include <stdio.h>

using namespace std;

float media(float nota1,float nota2){
  
    return (nota1+nota2)/2;
 
    
}


int main(){
float n1,n2;
cout<<"Infrome sua primeira nota : ";
cin>>n1;
cout<<"informe sua segunda nota  : ";
cin>>n2;
cout<<"sua media é : "<<media(n1,n2);




   return 0;
}
