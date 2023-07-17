#include <iostream>

/*
Aula003: Trabalhando com multiplas vaariáveis e tipos
*/

using namespace std;

int main(){
    int idade;
    string nome;
    double peso;

    cout << "Informe o seu nome: ";
    cin >> nome;
    cout << "Informe a sua idade: ";
    cin >> idade;
    cout << "Informe o seu peso em Kg: ";
    cin >> peso;

    cout << "Nome: " <<nome << "\n""Idade: " << idade << "\n""Peso: " << peso << endl;
    
    return 0;
}