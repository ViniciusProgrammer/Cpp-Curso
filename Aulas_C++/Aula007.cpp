#include <iostream>
#include <stdlib.h>

/*
Aula007: (Continuação) IF, ELSE IF, ELSE.
         Temos também a utilização do comando Goto;
*/

using namespace std;

int main(){

    float n1, n2, media;
    char opc;

    inicio: //Essa utilização se chama Leibor.

    cin >> n1 >> n2;

    media = (n1 + n2)/2;

    if(media >= 6.0){
        cout << "A media do aluno foi = " << media << endl;
        cout << "Aluno aprovado!" << endl;
    }

    else if(media >= 4.0 and media < 6.0){
        cout << "A media do aluno foi = " << media << endl;
        cout << "Aluno ficou em recuperacao" << endl;
    }

    else{
        cout << "Aluno foi reprovado!" << endl;
    }

    cout << "Deseja digitar outras notas? [s/n]: ";
    cin >> opc;


    if(opc == 's' or opc == 'S'){
        goto inicio;
    }

    else{
        cout << "Finalizando o programa..." << endl;
    }
    
    return 0;
}