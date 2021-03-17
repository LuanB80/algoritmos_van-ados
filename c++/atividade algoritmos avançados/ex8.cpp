#include <iostream>
#include <stdio.h>

using namespace std;

float x, y;

int medianota(float x, float y){
    float media;
    media = (x + y) / 2;
    printf("Sua Media e = %f", media);
}

int main(){
    x = 5;
    y = 8;
    medianota(x, y);
}