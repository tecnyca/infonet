//Feito em 29/04

#include <iostream>

int main() {
	int novaLista[3];
	novaLista[0] = 6;
	novaLista[1] = 45;
	novaLista[2] = 245;

	int lista[] = {1,2,3,4};
	std::string listaNome[] = {"maria", "jose", "frederico", "josefina", "lucia"};
	std::cout << "Exiba posição 2: " << lista[2] << "\n";
	std::cout << "Exiba posição 0: " << listaNome[0]<<"\n";
	
    for (int i=0; i<sizeof(listaNome); i++) {
        std::cout << "\n.:" << listaNome[i];
    }
    
	return 0;
	
}