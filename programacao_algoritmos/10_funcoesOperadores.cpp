// Aprendendo funcoes/metodos | Funções Operadores

#include <iostream>
using namespace std;

double media(int num1, int num2);
int maior(int num1, int num2);
int menor(int num1, int num2);
bool ehPar(int num);

int main() {
    int a, b;
    
    cout << "\nDigite o 1º número: ";
    cin >> a;
    cout << "\nDigite o 2º número: ";
    cin >> b;
    
    cout << "\nMédia: " << media(a,b);
	cout << "\nMaior número: " << maior(a,b);
	cout << "\nMenor número: " << menor(a,b);
	
	cout << "\n\nVerificando se os números são pares ou ímpares:";
	cout << "\n" << a << (ehPar(a) ? " é par." : " é ímpar.");
	cout << "\n" << b << (ehPar(b) ? " é par." : " é ímpar.");
	
	cout << endl;
	return 0;
}

// Função que calcula média
double media(int num1, int num2) {
    return (num1 + num2) / 2.0;
}

// Função que retorna o maior número
int maior(int num1, int num2){
    return (num1 > num2) ? num1 : num2;
}

//Função que retorna o menor número
int menor(int num1, int num2){
    return (num1 < num2) ? num1 : num2;
}

// Função que verifica se um número é par
bool ehPar(int num){
    return (num % 2 == 0);
}