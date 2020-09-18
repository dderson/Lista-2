#include <iostream>
#include "q1.h"

int main (void){

    int x;
    float y;

    std::cout << "Digite um número real: " << std::endl;
    std::cin >> y ;
    std::cout << "O quadrado de " << y << " é: "<< calculaQuadrado(y)<< "."<< std::endl;
    
    std::cout << "Digite um número inteiro: " << std::endl;
    std::cin >> x ;
    std::cout << "O quadrado de " << x << " é: "<< calculaQuadrado(x)<< "."<< std::endl;


    return 0;
}