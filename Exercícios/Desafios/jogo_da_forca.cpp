#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    /*
    Inicialicação das variaáveis
    */
    char palavra[30], letra[1], secreta[30];
    int tam, i, chances, acertos;
    bool acerto;

    chances = 6;
    tam = 0;
    i = 0;
    acerto = false;
    acertos = 0;

    cout << "Informe a palavra secreta: ";
    cin >> palavra;

    system("cls"); //Limpa o terminal

    while(palavra[i] != '\0'){
        i++;
        tam++;
    }

    //preenche a palavra secreta com *
    for(i = 0; i < 30; i++){
        secreta[i] = '*';
    }

    while((chances > 0) && (acertos < tam)){
        cout << "Chances restantes = " << chances << endl;
        cout << "Palavra secreta: ";

        for(i = 0; i < tam; i++){
            cout << secreta[i];
        }
        cout << "\n\n" << "Digite uma letra: ";
        cin >> letra[0];

        for(i = 0; i < tam; i++){
            if(palavra[i] == letra[0]){
                acerto = true;
                secreta[i] = palavra[i];
                acertos++;
            }
        }
        
        if(acerto == false){
            chances--;
        }
        acerto = false;
        system("cls");
    }

    //resultado do jogo
    if(acertos == tam){
        cout << "Parabens voce ganhou" << endl;
    }
    else{
        cout << "Voce perdeu" << endl;
    }

    system("pause"); //Pausa a execução do programa
    
    return 0;
}