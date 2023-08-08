#include <iostream>
#include "tempo.cpp"
#include "tempo.h"

using namespace std;

int main(){

    Tempo padrao1;
    Tempo custom(11, 20, 36);

    cout << endl << "Hora padrao ";
    padrao1.imprime();

    cout << endl << "Hora customizada ";
    custom.imprime();

    padrao1.setTempo(11, 38, 16);
    cout << endl << "Hora atualizada ";
    padrao1.imprime();

    return 0;
}
