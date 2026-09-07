// Desenvolver o jogo 'caiu, perdeu'.
// opções: estrutura condicional, matriz e repetição.

#include <iostream>
using namespace std;

//Limite de jogadas até a torre cair: de 13 a 21

int main() {
    int lin, col;
    
    cout << "Jogo 'Caiu, Perdeu'\n\n";
    
    //Construção da matriz/torre | Declaração indireta
    int torre[18][3] = {
        {1,2,3},{4,5,6},{7,8,9},
        {10,11,12},{13,14,15},{16,17,18},
        {19,20,21},{22,23,24},{25,26,27},
        {28,29,30},{31,32,33},{34,35,36},
        {37,38,39},{40,41,42},{43,44,45},
        {46,47,48},{49,50,51},{52,53,54}
    };
    
    // Exibição inicial da torre
    cout << "Torre Inicial:\n";
    for (int linha=0; linha < 18; ++linha){
        cout << "\n";
        for (int coluna = 0; coluna < 3; ++coluna){
            //Exibição da matriz
            cout << "Torre [" << linha << "][" << coluna << "] = " << torre[linha][coluna] << endl;
        
        }
    }
    
    //Permitir que o usuário diga a coluna e a linha da peça que escolheu
    cout << "\nEscolha uma peça.";
    cout << "\nEm qual linha (0-17) a peça está? ";
    cin >> lin;
    cout << "E em qual coluna (1-3)? ";
    cin >> col;
    cout << "\nPeça escolhida: " << torre[lin][col] << "\n";
    cout << "Sua peça foi removida da torre!";

    //Remover peça escolhida e deixar o espaço vazio (0)
    
    //Validar se a coluna vai cair
    //(for, if, or)Com 2 validações, se uma linha tiver mais que 3 '0's, mostrar ao jogador: você perdeu 
    //Tentar resolver problema dentro do for do end.
    return 0;
}