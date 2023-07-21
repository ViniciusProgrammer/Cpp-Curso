#include <iostream>

/*
Aula010: Trabalhando com switch case.
*/

using namespace std;

int main(){

    int opc;

    cout << "Selecione uma Cor.\n[1] Vermelho\n[2] Amarelo\n[3] Roxo\n[4] Azul\n[5] Laranja" << endl;

    cout << "Selecione: ";
    cin >> opc;

    switch(opc){

        case(1):
            cout << "Cor selecionada = Vermelho" << endl;
            break;
        case(2):
            cout << "Cor selecionada = Amarelo" << endl;
            break;
        case(3):
            cout << "Cor selecionada = Roxo" << endl;
            break;
        case(4):
            cout << "Cor selecionada = Azul" << endl;
            break;
        case(5):
            cout << "Cor selecionada = Laranja" << endl; 
        default:
            cout << "Opc invalida" << endl;
    } 

    /*
    Outra forma de juntr mais opções para realizar uma determinada açào

    int opc;

    cout << "Selecione uma Cor.\n[1, 2, 3] Vermelho\n[4. 5. 6] Amarelo\n[3]" << endl;

    cout << "Selecione: ";
    cin >> opc;

    switch(opc){
        case(1):
        case(2):
        case(3):
            cout << "Cor selecionada = Vermelho" << endl;
            break;
        case(4):
        case(5):
        case(6):
            cout << "Cor selecionada = Amarelo" << endl;
            break;
        default:
            cout << "Opc invalida" << endl;
    } 
    */

   /*
    Switch aninhado

    int opc;

    cout << "[1]Carro\n[2] Moto\n[3] Avião\n[4] Helicoptéro" << endl;

    cout << "Selecione: ";

    cin >> opc;

    switch(opc){
        case(1):
        case(2):
            cout << "Transporte terrestre selecionado" << endl;
            switch(opc){
                case(1):
                    cout << "Carro selecionado" << endl;
                    breack;
                case(2):
                    cout << "Moto selecionada" << endl;
                    break;
            }
        break;

        case(3):
        case(4):
            cout << "Transporte aério selecionado" << endl;
            switch(opc){
                case(3):
                    cout << "Avião selecionado" << endl;
                    break;
                case(4):
                    cout << "Helicoptéro selecionado" << endl;
                    break;
            }
            break;
        default:
            cout << "Opc invalida" << endl;
    }
   */

    return 0;
}