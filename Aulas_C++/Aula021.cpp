#include <iostream>
#include <list>

/*
Aula020: (Continuação) Trabalhando com Listas em c++
*/

using namespace std;

int main(){

    list <int> aula, teste;
    int i;

    list <int> ::iterator it; 
    
    teste.push_front(8);
    teste.push_front(8);
    teste.push_front(8);
    teste.push_front(8);

    for(i = 0; i < 10; i++){
        aula.push_front(i); 
    }

    it = aula.begin();
    advance(it, 3);
    aula.insert(it, 0);

    aula.erase(--it); //Remove o elemento na posição na qual eu passei em cima no código, precisando pré-decrementar

    /*
    Método clear --> Ele remove todos os elementos da lista
    Ex: Aula.clear();

    */

    aula.merge(teste); //Esse método mescla os elementos das duas listas

    cout << "Tamanho da lista = " << aula.size() << endl;

    for(i = 0; i < 10; i++){
        cout << aula.front() << endl;
        aula.pop_front();
    }

    return 0;
}