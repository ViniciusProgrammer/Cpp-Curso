#include <iostream>

/*
Aula022: Trabalhando com Structs parte 1
*/

using namespace std;

struct carros{
    string modelo;
    string marca;
    string cor;
    int velocidade_max;
    float preco;
};


int main(){
    carros car1;

    cin >> car1.modelo >> car1.marca >> car1.cor;
    cin >> car1.velocidade_max >> car1.preco;

    cout << "Modelo " << car1.modelo << "\nMarca " << car1.marca << "\nCor " << car1.cor << "\nVelocidade Maxima " << car1.velocidade_max << "\nPreco " << car1.preco << endl;

    return 0;
}