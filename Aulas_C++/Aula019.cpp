#include <iostream>
#include <queue>
/*
Aula019: Trabalhando com FILAS
*/

using namespace std;

int main(){

    queue <string> cartas;

    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouro");
    cartas.push("Rei de Paus");

    //Antes de modificar

    cout << "Primeira carta = " << cartas.front() << endl;
    cout << "Ultima carta = " << cartas.back() << endl;

    //Loop para imprimir a primeira carta e elimina-la

    while(!cartas.empty()){
        cout << "Primeira carta = " << cartas.front() << endl;
        cartas.pop(); 
    }

    return 0;
}