//Aprendendo Funções/Métodos | Operadores Simples
//Feito em 08/04

#include <iostream>
using namespace std;

int soma(int num1, int num2);
int subtrai(int num1, int num2);
int divide(int num1, int num2);
int multiplica(int num1, int num2);

int main(){
    int a,b;
    
    cout << "Exemplo método soma \n";
    cout << "\nDigite o 1º número: ";
    cin >> a;
    cout << "\nDigite o 2º número: ";
    cin >> b;
    
    cout << "\nSoma: " << soma(a,b);
    cout << "\nSubtração: " << subtrai(a,b);
    cout << "\nDivisão: " << divide(a,b);
    cout << "\nMultiplicação: " << multiplica(a,b);
    return 0;
}

int soma(int num1, int num2) {
    return num1+num2;
}

int subtrai(int num1, int num2) {
    return num1-num2;
}

int divide(int num1, int num2) {
    return num1/num2;
}

int multiplica(int num1, int num2) {
    return num1*num2;
}