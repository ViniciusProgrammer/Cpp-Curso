#include <iostream>

/*
Aula023: Continuação de Structs, implementa;cão de métodos
*/

using namespace std;

struct carros{
    string modelo;
    string marca;
    string cor;
    int velocidade_max;
    float preco;
    int velocit = 0;

    //Inserção dos dados

    void dados(string car_modelo, string car_marca, string car_cor, int velocidade, float valor){
        modelo = car_modelo;
        marca = car_marca;
        cor = car_cor;
        velocidade_max = velocidade;
        preco = valor;
    }

    //Imprime o valor passado pelas variáveis

    void imprime(){
        cout << "\nModelo = " << modelo << endl;
        cout << "Marca = " << marca << endl;
        cout << "Cor = " << cor << endl;
        cout << "Velocidade Atual = " << velocit << endl;
        cout << "Valor = " << preco << endl;
    }

    //Altera a velocidade caso seja necessário

    void altera_velocidade(int muda_velocidade){
        velocit = muda_velocidade;

        if(velocit > velocidade_max){
            velocit = velocidade_max;
        }

        if(velocit < 0){
            velocit = 0;
        }
    }
};


int main(){
    carros car1;

    car1.dados("Tornado", "Honda", "Vermelho", 270, 25.450);
    car1.imprime();
    car1.altera_velocidade(500);
    car1.imprime();

    return 0;
}
