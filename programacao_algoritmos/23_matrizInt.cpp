//2. Crie uma matriz 2x3 tipo int | feito em 20/05

#include <iostream> 
using namespace std; 
 
int main(){ 
    int Matriz[2][3] = {{1,2,3},{4,5,6}}; 
     
    for (int linha=0; linha <2; ++linha){ 
         
        for (int coluna = 0; coluna < 3; ++coluna) { 
            cout << "Matriz[" << linha << "][" << coluna << "] = " << Matriz[linha][coluna] << endl; 
        } 
    } 
     
    return 0; 
     
} 

//Solução: 

//int valor [2] [3];
        //int valor [ ] [ ] = {{1,2,3},{4,5,6}};
        // int valor [2] [3];
        // valor [0] [0] = 1;
        // valor [0] [1] = 2;
        // valor [0] [2] = 3;
        // valor [1] [0] = 4; 
        // valor [1] [1] = 5; 
        // valor [1] [2] = 6; 