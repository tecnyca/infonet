/*
Altere o programa anterior para que, no final, seja exibida a soma dos número entre os 2 digitados.
Ex.: Recebe 3 e 10. Imprime 4, 5, 6, 7, 8, 9. Soma e imprime a soma: 39.
*/

#include <iostream>

int main() {
    int menor, maior, soma;
    
    std::cout<<"Digite um número: ";
    std::cin>>menor;
    
    std::cout<<"Digite um número maior que o anterior: ";
    std::cin>>maior;
    
    std::cout<<"\nOs números entre esse intervalo são: ";
    
    for(int i=menor; i <maior; i++){
        std::cout << i << " ";
        soma = soma + i;
    }
    
    std::cout << "\nA soma desses números é: " << soma;

    return 0;
}