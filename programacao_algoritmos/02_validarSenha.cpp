#include <iostream>
#include <string> //incluindo bibliotecas

int main() {
    std::string senha = "programa"; //variável que define o valor da senha
    std::string tentativa; // variável para denominar a senha (certa ou errada) que o usuário digitará
    
    for(int i=0; i<3; i++){
        std::cout << "Digite a senha: "; //exibe na tela 
        std::cin >> tentativa; //guarda o que o usuário digitou
    
        if (senha == tentativa) {
            std::cout << "Senha correta!"<< std::endl; //aparece na tela se o usuário digitar a senha certa
            break;
        } else {
            std::cout << "Senha incorreta. Tente novamente.\n" << std::endl; //aparece na tela se e quando o usuário digitar a senha errada
        }
    }

    return 0;
}