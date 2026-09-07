//Atividade comprimento e substituição de teste feito em 22/04

#include <iostream>
#include <string>
#include <algorithm>
int tamanhoPalavra(int a);
void primeiraPalavra();
void ultimaPalavra();
void vazio();
std::string substituicao(std::string b);

int main() {
        std::string p ="palavra";
    char letra ='C';
    std::string txt1 = "Olá, mundo!";
    std::string txt2;
   
    std::cout << "Digite uma frase: ";
    std::getline(std::cin, p);
    int comprimento1 = txt1.length();
    std::cout << "\nO comprimento da string é: "<<comprimento1; 
    std::cout << "\nPrimeira letra: "<<txt1.front();
    std::cout << "\nÚltima letra: "<<txt1.back();
    std::cout << "\nVariável vazia? "<<txt1.empty();
    std::cout << "\nString após substituição: " <<  p.replace(2, 3,"teste") << std::endl;
    std::cout << "\nFuncão Tamanho: "<< tamanhoPalavra(comprimento1);
    std::cout << "---"<< substituicao("teste");
    return 0;
    }
    
int tamanhoPalavra(int a){
    
    std::cout << "\nO comprimento da string é: "<< a << std::endl; 
    return a;
}
std::string substituicao(std::string b){
    std::cout << "\nMétodo substituição (teste): ";
    return b;
}