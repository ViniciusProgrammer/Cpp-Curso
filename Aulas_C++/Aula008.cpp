#include <iostream>

/*
Aula008: Trabalhando com os operadores lógicos (And, Or, Not)

Realizei testes fora da aula mas seguindo a mesma lógica
*/

using namespace std;

int main(){

    int i, num;
    int valores[5];

    for(i = 0; i < 5; i++){
        cin >> num;
        valores[i] = num; 
    }

    for(i = 0; i < 5; i++){
        if(valores[i] > 5 && valores[i] < 10){
            cout << valores[i] << " ";
        }
        else{
            cout << endl;
            cout << valores[i] << " ";
        }
    }

    return 0;
}