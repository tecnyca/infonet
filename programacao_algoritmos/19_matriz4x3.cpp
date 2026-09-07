#include <iostream>
using namespace std;

int main() {
    int test[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

    for (int linha=0; linha < 4; ++linha) {
        //As variáveis usadas ficam a nosso critério.
        //Nesse caso, usei 'linha' e 'coluna'.
        for (int coluna = 0; coluna < 3; ++coluna) {
            cout << "Matriz [" << linha << "][" << coluna << "] = " << test[linha][coluna] << endl;
        }
    }
    return 0;
}