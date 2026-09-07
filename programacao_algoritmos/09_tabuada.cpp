// Crie um programa que funcione como uma tabuada de todos os nºs 1-9 (Lista 3, ex. 5)

#include <iostream>

int main() {
    int tabuada;
    
    std::cout << "Programa - Tabuada do 0 ao 10";
    std::cout << "\n\nEscolha um número para nossa tabuada: ";
    std::cin >>tabuada;
    
    std::cout << "\nÓtimo! A tabuada ficou assim: ";
    
    for (int i=0; i<=10; i++){
    std::cout <<"\n" << tabuada << " x " << i << " = " << tabuada*i;
    }
    
    
    return 0;
}