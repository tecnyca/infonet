//Matriz Tridimensional
#include <iostream>
using namespace std;

int main() {
    double preco[2][3] = {{3.45,65.1,22.9},{1.1,3.2,4}};
        for (int l=0; l < 2; ++l) {
            for (int c = 0; c < 3; ++c){
                cout << "\nMatriz 1: " << preco[l][c];
                cout << "\n-----------";
            }
        }

    float valor[5][2] = {{1.2, 1.3},{1.4, 1.5}, {5.4, 3.4}, {4.4, 3.6}, {5.6, 8.6}};
        for (int lin = 0; lin < 2; ++lin) {
            for (int col = 0; col < 3; ++col) {
                cout << "\nMatriz 2: " << valor[lin][col];
                cout << "\n------------";
            }
        }

    char caracter [2][2] = {{'c', 'd'},{'e', 't'}};
                            
        for (int linha = 0; linha < 2; ++linha) {
            for (int coluna = 0; coluna < 3; ++coluna) {
                cout << "\nMatriz 3: " << caracter[linha][coluna];
                cout << "\n------------";
            }
        }
        return 0;
}