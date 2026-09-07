/* Crie um programa que o usuário escolha 1 autor entre 4, escolha 1 frase entre 5 e quantas vezes a frase será exibida. */

#include <iostream> 

void frase1(); 
int main() { 
    int autor, frase, repete; 

    std::cout << "Escolha um autor:\n \n1. Cora Coralina \n2. Carolina Maria de Jesus \n3. Fernando Pessoa \n4. Clarice Lispector \n\nResposta: "; 
    std::cin >> autor; 

    switch (autor){ 
        case 1: 
            std::cout <<"Sua escolha: Cora Coralina.\n"; 
            std::cout <<"\nEscolha um dos temas abaixo: \n"; 
            std::cout <<"\n1) Felicidade"; 
            std::cout <<"\n2) O que vale na vida"; 
            std::cout <<"\n3) Saber vs. Sabedoria"; 
            std::cout <<"\n4) Recomeço"; 
            std::cout <<"\n5) Quem não morre?"; 
            std::cout <<"\nResposta: "; 
            std::cin >> frase; 

            switch  (frase){ 
                case 1: 
                    std::cout<<"1) Felicidade.\n"; 
                    std::cout<<"Quantas vezes deseja exibir a frase? \nResposta: "; 
                    std::cin>>repete; 
                        for (int i=0; i<=repete; i++){ 
                            frase1(); 
                        } 
            } 
        break; 

        case 2: std::cout <<"\nSua escolha: Carolina Maria de Jesus."; 
        break; 

        case 3: std::cout <<"\nSua escolha: Fernando Pessoa."; 
        break; 

        case 4: std::cout <<"\nSua escolha: Clarice Lispector."; 
        break; 
    } 

        std::cout; 
} 