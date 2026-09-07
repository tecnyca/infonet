// Crie um programa que peça 2 números para o usuário e faça as 4 operações: +, -, % e *

#include <iostream>

int main() {
    int num1;
    int num2;
    
    
    std::cout << "Digite o 1º número: "; // exibe o texto e libera a entrada de um valor
    std::cin >>num1; //guarda o valor digitado
   
    std::cout << "Digite o 2º número: ";
    std::cin >>num2;
    
    //as variáveis com os cálculos são inseridas no código só depois que os valores de num1 e num2 estejam definidos.
    int subtrai = num1-num2;
    int multiplica = num1*num2;
    int divide = num1/num2;

    std::cout << "\nSoma: "<< num1+num2;
    std::cout << "\nSubtração: "<< subtrai;
    std::cout << "\nMultiplicação: "<< multiplica;
    std::cout << "\nDivisão: "<< divide;
    return 0;
}