#include <iostream>

/*
Aula025: Trabalhando com ponteiros parte 1
*/

using namespace std;

int main(){

    string* pont;
    string veiculo;
    veiculo = "Carro";

    pont = &veiculo;

    cout << *pont << endl; //Imprimindo o conteúdo da variável veículo através do ponteiro

    cin >> *pont; //Alterando o coneúdo da variável veículo

    cout << *pont << endl;

    return 0;
}