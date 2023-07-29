#include <iostream>
#include <stack>

/*\
Aula016: Continuando o trabalho com pilha/stack, introdução ao método empty
*/

using namespace std;

int main(){
//crieda pilha, tipo, variável
    stack <string> cartas;

    //Verificando se a pilha está vazia

    if(cartas.empty()){
        cout << "Pilha vazia" << endl;
    }
    else{
        cout << "Pilha com cartas" << endl;
    }

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