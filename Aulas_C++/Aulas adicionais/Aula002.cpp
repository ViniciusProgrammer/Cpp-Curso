#include <iostream>
#include <string>

using namespace std;

//Concatenando duas strings
//Usando a função getline que é uma espécie de fgets no c++, ler os caracteres ate digitar enter
int main(){

    string nome;

    cout << "Infomrme o seu nome: ";
    getline(cin, nome);

    cout << nome << endl;

    /*
    cout << "Infomrme o seu nome: ";
    cin >> nome;

    cout << "Informe o seu sobrenome: ";
    cin >> sobre;

    nome_completo = nome + " " + sobre; // concatenação

    cout << nome_completo << endl; 
    */
    return 0;
}