#include <iostream>
#include <list>

/*
Aula020: Trabalhando com Listas em c++
*/

using namespace std;

int main(){

    list <int> aula;
    int i;

    list <int> ::iterator it; //Para inserir na posição onde queremos precisamos utiizar esse método

    for(i = 0; i < 10; i++){
        aula.push_front(i); //O front insere de maneira que o primeiro fique na lista por último, o back faz de maneira contrária
    }

    //Precisamos também adicionar esse método
    it = aula.begin();
    advance(it, 5); //Posição onde queremos adicionar

    aula.insert(it, 0); //Elemento no qual queremos adicionar

    cout << "Tamanho da lista = " << aula.size() << endl;

    for(i = 0; i < 10; i++){
        cout << aula.front() << endl;
        aula.pop_front();
    }

    /*
    Método sort = ele ordena a lista
    EX: aula.sorte;


    método reverse = Ele inverte a lista
    Ex: aula.reverse();
    */

    return 0;
}