//Crie um programa que o usuário insira os valores da matriz valor
//Usar estrutura de decisão (for), índices e matrizes (valor[2][3])

#include <iostream> 
 
int main() { 
    const int linhas = 2, colunas = 3; 
    int valor[linhas][colunas]; 
     
    std::cout << "Insira os valores da matriz 2x3: \n"; 
     
    for (int i = 0; i < linhas; i++) { 
        for (int j = 0; j < colunas; j++) { 
            std::cout << "Valor[" << i << "][" << j << "]: "; 
            std:: cin >> valor[i][j]; 
        } 
    } 
     
    std::cout << "\nMatriz inserida: \n"; 
    for (int i = 0; i < linhas; i++) { 
        for (int j = 0; j < colunas; j++) { 
            std::cout << valor [i][j] << " "; 
        } 
        std::cout << std::endl; 
    } 
     
    return 0; 
} 