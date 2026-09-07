//Exercício 5 | Agora, ajuste o programa criado para que os valores dos índices 'i' e 'j' sejam somados separadamente 
//Ideia: travar o índice enquanto percorremos o outro 

// Crie um programa que o usuário insira os valores da matriz valor [2][3], some todos os valores inseridos e exiba o resultado. 
// for, índices e matrizes // incremento e decremento 

#include <iostream> 
using namespace std; 

int main () { 
    int matriz[2][3]; // Agora é uma matriz 2x3
    int soma_linha0 = 0; 

    cout<< "Digite os elementos da matriz 2x3:\n"; 
    for (int i=0; i < 2; i++) { 
        for (int j=0; j < 3; j++) { 
            cout<< "Elemento ["<< i <<"][" << j << "]:"; 
            cin>> matriz[i][j];  
            } 
    } 

    //Soma apenas a primeira linha (i == 0) 
    for (int j = 0; j < 3; j++){
        soma_linha0 += matriz[0][j];
    }

    cout << "Matriz digitada:\n";
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cout << matriz[i][j] << " ";
        }
    }

    cout<< "\nSoma dos elementos da linha 0: " << soma_linha0 << endl;

    return 0; 
} 