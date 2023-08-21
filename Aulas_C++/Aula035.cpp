#include <iostream>

using namespace std;

int main() {

    int* pi = new int; // o ponteiro Pi será alocado automaticamente no momento da declaração, o operador new solicita ao sistema um bloco de memória capaz de armazenar um int no caso apresentado, ao qual o sistema irá reservar 4 bits nesse caso, o endereço reservado para o tipo int apresentado após o new será armazenado em Pi.

    *pi = 1010;

    cout << "Valor inteiro = " << *pi << endl;
    cout << "Localizacao = " << pi << endl;

    double* pd = new double;

    cout << "Tamanho de pi = " << sizeof(pi) << endl;
    cout << "Tamanho de pi = " << sizeof(*pi) << endl << endl;

    delete pi;

    cout << sizeof(double) << endl;

    cout << "Tamanho de pd = " << sizeof(pd) << endl;
    cout << "Tamanho de pd = " << sizeof(*pd) << endl << endl;

    delete pd;

    return 0;
}