//Exercício 4 | Crie um programa que o usuário insira os valores da matriz valor [2][3], some todos os valores inseridos e exiba o resultado. 
// for, índices e matrizes // incremento e decremento 

#include <iostream> 
using namespace std; 

int main () { 
    int valor [2][3]; 
    int soma = 0; 

    cout<< "Digite os valores da matriz [2][3]: \n"; 
    for (int i=0; i < 2; i++) { 
        for (int j=0; j < 3; j++) { 
            cout<< "Valor["<<i<<"]["<<j<<"]\n"; 
            cin>> valor[i][j]; //até aqui, apenas capturamos o valor 
            soma += valor [i][j]; 
        } 
    } 

    //Exibir o que já populei 
    cout<< "\nValores digitados: "; 
    for (int i=0; i < 2; i++) { 
        for (int j=0; j < 3; j++) { 
            cout<< valor [i][j]; 
        } 
    } 

    // Exibir a soma 
    cout<< "\nSoma: "<< soma; 

    return 0; 
} 