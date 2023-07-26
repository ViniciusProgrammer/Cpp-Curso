#include <iostream>

/*
Aula014: Omitindo argumetnos, usando dois mas passando um e usando quantos argumetnos eu precisar. Em funções
*/

using namespace std;

void imprimir(string txt = "Vinicius Davi");

int main(){

    imprimir();

    return 0;
}

void imprimir(string txt){
    cout << txt << endl;
}

/*
Se quisermos omitir argumentos na passagem de paâmetros  só conseguimos da forma prototipada
*/