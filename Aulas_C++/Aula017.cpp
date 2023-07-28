#include <iostream>
#include <stack>

/*
Aula017: Introdução a Pilha/stack
*/

using namespace std;

int main(){
           //tipo  identificador
    stack <string> cartas;

    //Adicionando elementos  na pilha

    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouro");
    cartas.push("Rei de Paus");

    cout << "Tamanho da pilha: " << cartas.size() << endl;

    //Retorna a carta do topo

    cout << "Carta do Topo: " << cartas.top() << endl;

    //Esse comando remove a carta que está no topo
    cartas.pop();

    cout << "Nova carta do topo: " << cartas.top() << endl;

    return 0;
}
