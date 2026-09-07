/*
Crie um programa que exiba o intervalo entre 2 números digitados pelo usuário.
Ex.: 4 e 10 são digitados, sistema retorna: 4, 5, 6, 7, 8, 9, 10 (for)
*/

#include <iostream>

int main() {
    int menor, maior;
    
    std::cout<<"Digite um número: ";
    std::cin>>menor;
    
    std::cout<<"Digite um número maior que o anterior: ";
    std::cin>>maior;
    
    std::cout<<"\nOs números entre esse intervalo são: ";
    
    for(int i=menor; i <maior; i++){
        std::cout << i << " ";
    }

    return 0;
}