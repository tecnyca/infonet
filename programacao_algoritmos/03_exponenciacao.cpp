/*
Faça um programa que receba 2 números (base e expoente), calcule o primeiro número elevado pelo segundo e mostre o resultado na tela.

Como é feito o cálculo: a base é multiplicada pelo seu valor inicial, repetidamente, de acordo com o valor do expoente.

Ex.: Base 2, Expoente 5.
Cálculo: 2^5= 2x 2x 2x 2x 2x >>> 2*2 = 4, 4*2 = 8, 8*2 = 16, 16*2 = 32 e 32*2 = 64.
Resultado = 64
*/

#include <iostream>

int main() {
    int base, expoente, resultado=1;
    
    std::cout<<"Digite um número para a base: ";
    std::cin>>base;
    
    std::cout<<"Digite um número para o expoente: ";
    std::cin>>expoente;
    
    for (int i = 1;  i <= expoente; i++){
    resultado = resultado*base;
    }
    
    std::cout<<"O resultado é: "<<resultado;
    
    return 0;
}