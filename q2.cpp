#include <iostream>
#include <cstdlib>
#include "q2.h"

int main (void){

    float x;
    char y=0;
    int z=0;
  
    std::cout << "Digite um valor real, um caractere e um número inteiro: " <<std::endl;
    std::cin >> x >> y >> z;

    std::cout << "O próximo número inteiro é: " << entrada(x) << "." << std::endl;

    std::cout<< "O código ASCII do caractere "<< y << " é "<< entrada(y) << "."<< std::endl;

    std::cout << "O quadrado do número "<< z <<  " é: "<< entrada(z) << "."<< std::endl;

    return 0;
}