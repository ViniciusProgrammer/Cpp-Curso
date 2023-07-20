#include <iostream>

/*
Aula009: Trabalhando com o operador ternário
*/

using namespace std;

int main (){

    float n1, n2, nota;
    string res;

    cin >> n1 >> n2;

    nota = (n1 + n2)/2;

    (nota >= 6.0) ? res = "Aprovado!" : res = "Reprovado!";

    /*
    Outra forma de fazer o operador ternário é 

    res = (nota >= 6.0) ? "Aprovado" : "Reprovado";
    */

    cout << res << endl;

    return 0;
}