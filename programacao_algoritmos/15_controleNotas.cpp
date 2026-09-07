/* Crie um programa que realize o controle de notas bimestrais do seu curso da Etec.
- O usuário (professor) escolhe 1 turma, 1 disciplina, 1 lista de alunos, 1 atividade + nota dessa atividade
- switch case, while e for | arrays e vetores
- Feito em 29/04 */

#include <iostream>

int main() {
    int turma, disciplina, alunos, atividade, nota;
    
    std::cout << "Escolha uma turma:\n\n1. infonet-noturno-1sem \n2. infonet-noturno-3sem \n\nResposta: ";
    std::cin>>turma;
    
    switch (turma){
        case 1:
            std::cout<<"Sua escolha: infonet-noturno-1sem.\n";
            std::cout<<"\nEscolha uma das disciplinas:\n\n1. Programação e Algoritmos \n2. Análise e Projetos Web \n\nResposta: ";
            std::cin>>disciplina;
            
            switch (disciplina) {
                case 1:
                    std::cout<<"Sua escolha: 1. Programação\n";
                    std::cout<<"\nDeseja exibir a lista dos alunos? \n\n1. Sim \n2. Não \n\nResposta: ";
                    std::cin>>alunos;
                    
                    switch(alunos){
                        case 1:
                            std::cout<<"\nLista de alunos: \n1. Aluísio Santos \n2. Brenda Gonçalves \n3. Clara Castanho \n4. Débora Falabella \n5. Esther Marcos \n6. Flavia Alessandra \n7. Gabi Fadel \n8. Henrique Santana \n9. Isabela Volpato \n10. Júlia Gomes";
                            std::cout<<"\n\nDeseja exibir a lista de atividades dessa turma? \n\n1. Sim \n2. Não \n\nResposta: ";
                            std::cin>>atividade;
                            
                            switch(atividade) {
                                case 1:
                                    std::cout<<"\nAtividades: \n1. Atividade 1 \n2. Atividade 2 \n3. Atividade 3";
                                    std::cout<<"\n\nPara ver as notas atribuídas, digite 1.\nCaso queira finalizar sua sessão, digite 2. \n\nResposta: ";
                                    std::cin>>nota;
                                    
                                    switch(nota) {
                                        case 1:
                                            std::cout<<"\nNotas: \n1. Aluísio Santos | Atividade 1: MB; Atividade 2: B; Atividade 3: MB \n2. Brenda Gonçalves | Atividade 1: R; Atividade 2: R; Atividade 3: B \n3. Clara Castanho | Atividade 1: MB; Atividade 2: MB; Atividade 3: MB \n4. Débora Falabella | Atividade 1: MB; Atividade 2: B; Atividade 3: B \n5. Esther Marcos | Atividade 1: B; Atividade 2: R; Atividade 3: B \n6. Flavia Alessandra | Atividade 1: MB; Atividade 2: MB; Atividade 3: MB \n7. Gabi Fadel | Atividade 1: I; Atividade 2: R; Atividade 3: I \n8. Henrique Santana | Atividade 1: R; Atividade 2: R; Atividade 3: R \n9. Isabela Volpato | Atividade 1: B; Atividade 2: B; Atividade 3: B \n10. Júlia Gomes | Atividade 1: MB; Atividade 2: B; Atividade 3: R";
                                        break;
                                        case 2:
                                            std::cout<<"Sessão finalizada com sucesso.";
                                    }
                            }
                        break;
                        case 2:
                            std::cout<<"\nFim da operação.";
                    }
                break;
                case 2:
                    std::cout<<"Sua escolha: 2. Análise e Projetos Web\n";
                    std::cout<<"\nDeseja exibir a lista dos alunos? \n\n1. Sim \n2. Não \n\nResposta: ";
                    std::cin>>alunos;
                    
                    switch(alunos){
                        case 1:
                            std::cout<<"\nLista de alunos: \n1. Aluísio Santos \n2. Brenda Gonçalves \n3. Clara Castanho \n4. Débora Falabella \n5. Esther Marcos \n6. Flavia Alessandra \n7. Gabi Fadel \n8. Henrique Santana \n9. Isabela Volpato \n10. Júlia Gomes";
                            std::cout<<"\n\nDeseja exibir a lista de atividades dessa turma? \n\n1. Sim \n2. Não \n\nResposta: ";
                            std::cin>>atividade;
                            
                            switch(atividade) {
                                case 1:
                                    std::cout<<"\nAtividades: \n1. Atividade 1 \n2. Atividade 2 \n3. Atividade 3";
                                    std::cout<<"\n\nPara ver as notas atribuídas, digite 1.\nCaso queira finalizar sua sessão, digite 2. \n\nResposta: ";
                                    std::cin>>nota;
                                    
                                    switch(nota) {
                                        case 1:
                                            std::cout<<"\nNotas: \n1. Aluísio Santos | Atividade 1: MB; Atividade 2: B; Atividade 3: MB \n2. Brenda Gonçalves | Atividade 1: R; Atividade 2: R; Atividade 3: B \n3. Clara Castanho | Atividade 1: MB; Atividade 2: MB; Atividade 3: MB \n4. Débora Falabella | Atividade 1: MB; Atividade 2: B; Atividade 3: B \n5. Esther Marcos | Atividade 1: B; Atividade 2: R; Atividade 3: B \n6. Flavia Alessandra | Atividade 1: MB; Atividade 2: MB; Atividade 3: MB \n7. Gabi Fadel | Atividade 1: I; Atividade 2: R; Atividade 3: I \n8. Henrique Santana | Atividade 1: R; Atividade 2: R; Atividade 3: R \n9. Isabela Volpato | Atividade 1: B; Atividade 2: B; Atividade 3: B \n10. Júlia Gomes | Atividade 1: MB; Atividade 2: B; Atividade 3: R";
                                        break;
                                        case 2:
                                            std::cout<<"Sessão finalizada com sucesso.";
                                    }
                            }
                        break;
                        case 2:
                            std::cout<<"\nFim da operação.";
                    }
            }
            
        break;
        case 2:
            std::cout<<"\nSua escolha: infonet-noturno-3sem\n";
            std::cout<<"\nEscolha uma das disciplinas:\n\n1. Programação e Algoritmos \n2. Análise e Projetos Web \n\nResposta: ";
            std::cin>>disciplina;
            
            switch (disciplina) {
                case 1:
                    std::cout<<"Sua escolha: 1. Programação\n";
                    std::cout<<"\nDeseja exibir a lista dos alunos? \n\n1. Sim \n2. Não \n\nResposta: ";
                    std::cin>>alunos;
                    
                    switch(alunos){
                        case 1:
                            std::cout<<"\nLista de alunos: \n1. Aluísio Santos \n2. Brenda Gonçalves \n3. Clara Castanho \n4. Débora Falabella \n5. Esther Marcos \n6. Flavia Alessandra \n7. Gabi Fadel \n8. Henrique Santana \n9. Isabela Volpato \n10. Júlia Gomes";
                            std::cout<<"\n\nDeseja exibir a lista de atividades dessa turma? \n\n1. Sim \n2. Não \n\nResposta: ";
                            std::cin>>atividade;
                            
                            switch(atividade) {
                                case 1:
                                    std::cout<<"\nAtividades: \n1. Atividade 1 \n2. Atividade 2 \n3. Atividade 3";
                                    std::cout<<"\n\nPara ver as notas atribuídas, digite 1.\nCaso queira finalizar sua sessão, digite 2. \n\nResposta: ";
                                    std::cin>>nota;
                                    
                                    switch(nota) {
                                        case 1:
                                            std::cout<<"\nNotas: \n1. Aluísio Santos | Atividade 1: MB; Atividade 2: B; Atividade 3: MB \n2. Brenda Gonçalves | Atividade 1: R; Atividade 2: R; Atividade 3: B \n3. Clara Castanho | Atividade 1: MB; Atividade 2: MB; Atividade 3: MB \n4. Débora Falabella | Atividade 1: MB; Atividade 2: B; Atividade 3: B \n5. Esther Marcos | Atividade 1: B; Atividade 2: R; Atividade 3: B \n6. Flavia Alessandra | Atividade 1: MB; Atividade 2: MB; Atividade 3: MB \n7. Gabi Fadel | Atividade 1: I; Atividade 2: R; Atividade 3: I \n8. Henrique Santana | Atividade 1: R; Atividade 2: R; Atividade 3: R \n9. Isabela Volpato | Atividade 1: B; Atividade 2: B; Atividade 3: B \n10. Júlia Gomes | Atividade 1: MB; Atividade 2: B; Atividade 3: R";
                                        break;
                                        case 2:
                                            std::cout<<"Sessão finalizada com sucesso.";
                                    }
                            }
                        break;
                        case 2:
                            std::cout<<"\nFim da operação.";
                    }
                break;
                case 2:
                    std::cout<<"Sua escolha: 2. Análise e Projetos Web\n";
                    std::cout<<"\nDeseja exibir a lista dos alunos? \n\n1. Sim \n2. Não \n\nResposta: ";
                    std::cin>>alunos;
                    
                    switch(alunos){
                        case 1:
                            std::cout<<"\nLista de alunos: \n1. Aluísio Santos \n2. Brenda Gonçalves \n3. Clara Castanho \n4. Débora Falabella \n5. Esther Marcos \n6. Flavia Alessandra \n7. Gabi Fadel \n8. Henrique Santana \n9. Isabela Volpato \n10. Júlia Gomes";
                            std::cout<<"\n\nDeseja exibir a lista de atividades dessa turma? \n\n1. Sim \n2. Não \n\nResposta: ";
                            std::cin>>atividade;
                            
                            switch(atividade) {
                                case 1:
                                    std::cout<<"\nAtividades: \n1. Atividade 1 \n2. Atividade 2 \n3. Atividade 3";
                                    std::cout<<"\n\nPara ver as notas atribuídas, digite 1.\nCaso queira finalizar sua sessão, digite 2. \n\nResposta: ";
                                    std::cin>>nota;
                                    
                                    switch(nota) {
                                        case 1:
                                            std::cout<<"\nNotas: \n1. Aluísio Santos | Atividade 1: MB; Atividade 2: B; Atividade 3: MB \n2. Brenda Gonçalves | Atividade 1: R; Atividade 2: R; Atividade 3: B \n3. Clara Castanho | Atividade 1: MB; Atividade 2: MB; Atividade 3: MB \n4. Débora Falabella | Atividade 1: MB; Atividade 2: B; Atividade 3: B \n5. Esther Marcos | Atividade 1: B; Atividade 2: R; Atividade 3: B \n6. Flavia Alessandra | Atividade 1: MB; Atividade 2: MB; Atividade 3: MB \n7. Gabi Fadel | Atividade 1: I; Atividade 2: R; Atividade 3: I \n8. Henrique Santana | Atividade 1: R; Atividade 2: R; Atividade 3: R \n9. Isabela Volpato | Atividade 1: B; Atividade 2: B; Atividade 3: B \n10. Júlia Gomes | Atividade 1: MB; Atividade 2: B; Atividade 3: R";
                                        break;
                                        case 2:
                                            std::cout<<"Sessão finalizada com sucesso.";
                                    }
                            }
                        break;
                        case 2:
                            std::cout<<"\nFim da operação.";
                    }
            }
    }

    return 0;
}