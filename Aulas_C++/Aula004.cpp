#include <iostream>

/*
Aula004: Incrementando e decrementando em uma variável e operações pós e pré fixadas
*/

using namespace std;

int main(){

    int num1, num2;

    cin >> num1;
    cout << num1 << endl;
    
    num1++;
    cout << num1 << endl;

    num1+= 10;

    cout << num1 << endl;

    num1 = num1 + 20;

    cout << num1 << endl;

    //As mesmas operações valem para o decremento '-'

    cin >> num2;

    cout << ++num2 << endl; //Nesse caso ele já printa com o valor incremetado

    cout << num2++ << endl; //Nesse caso ele vai printar o valor informado no cin para depois incrementar    

    //As mesmas operações valem para o decremento '-'

    return 0;
}