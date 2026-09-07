// Crie um programa que receba 4 notas e calcule a média

#include <iostream>

int main() {
    double nota1;
    double nota2;
    double nota3;
    double nota4;
    
    std::cout << "Digite a 1º nota: ";
    std::cin >>nota1;
   
    std::cout << "Digite a 2º nota: ";
    std::cin >>nota2;

    std::cout << "Digite a 3º nota: ";
    std::cin >>nota3;
   
    std::cout << "Digite a 4º nota: ";
    std::cin >>nota4;
    
    std::cout <<"\nA média dessas notas é igual a "<< (nota1+nota2+nota3+nota4)/4; 
    
    return 0;
}