#include <iostream>

using namespace std;

/*
Outra forma de se passar por referência com ponteiros e funções
*/

int soma(int &a, int &b, int &c){ // aqui nao precisa usar o * como se fosse ponteiro
    int sum;
    sum = a + b + c;
    return sum;
}

int main(){
    int x, y, z, resultado;

    cin >> x >> y >> z;

    resultado = soma(x, y, z); // náo precisa por o & para passagem por referencia

    cout << resultado << endl;

    return 0;
}