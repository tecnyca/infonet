//Lista Nome e Idade feita em 06/05

#include <iostream>
#include <string>

int main() {
    int idade[] = {17, 16, 19, 16, 16, 40, 21, 45, 17, 17};

    std::string nome [] = {"Pedro A.", "Pedro P.", "Camila", "Crystian", "Murilo", "Maurício", "Nicholly", "Alexandre", "Samuel", "Giovanna"};

    for (int i=0; i < sizeof(idade); i++) {
        std::cout << "Nome: " << nome[i] << "\n";
        std::cout << "Idade: " << idade[i] << "\n\n";
    }
    return 0;
}