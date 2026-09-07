//1. Crie um vetor com 10 nºs inteiros | feito em 20/05

#include <iostream> 
 
int main() { 

    // int listaVetores [ ] = {7, 14, 24, 4, 28, 17, 27, 714, 147, 247} 
    int listaVetores[10]; 
    listaVetores[0] = 7; 
    listaVetores[1] = 14; 
    listaVetores[2] = 24; 
    listaVetores[3] = 4; 
    listaVetores[4] = 28; 
    listaVetores[5] = 17; 
    listaVetores[6] = 27; 
    listaVetores[7] = 714; 
    listaVetores[8] = 147; 
    listaVetores[9] = 247; 
     
    int lista[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    std::string listaInteiro[] = {"sete", "quatorze", "vinte e quatro", "quatro", "vinte e oito", "dezessete", "vinte e sete", "setecentos e quatorze", "cento e quarenta e sete", "duzentos e quarenta e sete"}; 
     
    std::cout << "Exiba posição 5: " << lista[5] << "\n"; 
    std::cout << "Exiba posição 8: " << listaInteiro[8] << "\n"; 
     
    for (int i=0; i<sizeof(listaInteiro); i++) { 
        std::cout << "\n> " << listaInteiro[i]; 
    } 
     
    return 0; 
     
} 

 