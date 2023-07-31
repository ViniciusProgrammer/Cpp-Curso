#include <iostream>

/*
Aula023: Continuação de Structs, 
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
    carros *lista_carros = new carros[5];

    lista_carros[0].dados("Aventator", "Lambunguini", "Amarelo", 300, 450);
    lista_carros[1].dados("Gol", "Vw", "Neon", 200, 150);
    lista_carros[2].dados("Bombs", "Ferrari", "Roxo", 600, 550);
    lista_carros[3].dados("Pwp", "BMW", "Rosa", 100, 250);
    lista_carros[4].dados("Celta", "Mercedez", "Lilas", 500, 350);

    for(int i = 0; i < 5; i++){
        lista_carros[i].imprime();
    }
    
    return 0;
}
