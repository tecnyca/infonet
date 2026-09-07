// Crie um programa que o usuário tenha as opções de calcular a área de um triângulo, de um trapézio ou de um quadrado.

#include <iostream>

int main() {
    double opcao=0, base, altura, basem;
    
    std::cout << "Programa - Cálculo de Área \n\nFormas geométricas \n1. Triângulo; \n2. Trapézio; \n3. Quadrado. \n\nDigite o nº da forma escolhida: ";
    std::cin >>opcao;
    
    if (opcao==1){
        std::cout <<"\nDigite a base: ";
        std::cin >>base;
        std::cout <<"Digite a altura: ";
        std::cin >>altura;
        std::cout <<"\nA área é = "<< base*altura/2;
    } 
        else if (opcao==2) {
            std::cout <<"\nDigite a base maior: ";
            std::cin >>basem;
            std::cout <<"Digite a base menor: ";
            std::cin >>base;
            std::cout <<"Digite a altura: ";
            std::cin >>altura;
            std::cout <<"\nA área é = "<< (basem+base)*altura/2;
    } 
        else if (opcao==3){
            std::cout <<"\nDigite o valor de um dos lados do quadrado: ";
            std::cin >>base;
            std::cout <<"\nA área é = "<< base*base;
    }else{
        std::cout <<"\nOpção indisponível.";
    }
    
    return 0;
}