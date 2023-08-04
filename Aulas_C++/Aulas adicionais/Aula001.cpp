#include <iostream>

using namespace std;

/*
Percorrendo um vetor de forma diferente, conhecido como Range-For, onde usamos o for sem uma variável de controle explicitamente
*/

int main(){

    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(int x : vetor){ //Para cada inteiro x do vetor
        cout << x << " "; // imprima X
    }

    return 0;
}