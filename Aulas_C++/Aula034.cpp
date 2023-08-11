#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {

    fstream arquivo;
    char opc = 's';
    string nome, linha;

    arquivo.open("cursoscfb.txt", ios :: out);

    while(opc == 's' || opc == 'S') {
        cout << "Digite um nome: ";
        cin >> nome;
        arquivo << nome << endl; 
        cout << "Quer digitar outro nome? (S/N): ";
        cin >> opc;
        system("CLS");
    }

    arquivo.close();

    arquivo.open("cursoscfb.txt", ios :: in);

    cout << "Nomes Digitados" << endl;

    if(arquivo.is_open() == true) {
        while(getline(arquivo, linha)) {
            cout << linha << endl;
        }
        arquivo.close();
    }  

    else {
        cout << "Nao foi possivel abrir o arquivo" << endl;
    }

    return 0;
}
