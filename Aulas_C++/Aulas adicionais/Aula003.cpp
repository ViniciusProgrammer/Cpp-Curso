#include <iostream>

using namespace std;

int main(){

    int x = 40;
    int* p = nullptr; // inciar o ponteiro sem apontar ele para algum lugar

    cout << "Valor de X = " << x << endl;
    cout << "Endereco de X " << &x << endl;

    cout << "Endereco de p " << &p << endl;

    return 0;
}
