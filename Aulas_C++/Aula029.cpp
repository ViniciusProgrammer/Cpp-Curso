#include <iostream>
#include <math.h>
#include <iomanip>

/*
Aula029: Opções de formatação com o Cout
*/

using namespace std;

int main(){

    int num;

    cin >> num;

    cout << "Valor de Num: " << num << endl; //Impressáo normal
    cout << "Valor de Num: " << hex << num << endl; // Impressáo em hexadecimal
    cout << "Valor de Num: " << oct << num << endl; // Impressão em octal
    cout << "Valor de Num: " << setw(10) << num << endl; // imprime com o espaçamento de 10 casas pra frente colocando zeros a frente do valor
    cout << "Valor de Num: " << setw(10) << setfill('0') <<num << endl; // imprime com o espaçamento de 10 casas pra frente colocando zeros a frente do valor

    /*
    setbase(numero da base que vc indicar)
    para isso incluimos no cabeçalho a biblioteca iomanip
    */

    return 0;
}