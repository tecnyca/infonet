#include <iostream> //iostream é uma biblioteca

int main(){
    int i; //declaração de variável
    
    std::cout<< "Digite um número: "; ////escreve ou imprime valor
    std::cin >> i; //lê
    
    for (int i=0; i<=100; i++){
        if (i%3 == 0){
            std::cout << "MOD 3 == " <<i << "\n";
        }else if(i%5 == 0){
            std::cout << "\nMOD 5 == " <<i << "\n";
        }else {
        }
    }
    return 0;
}