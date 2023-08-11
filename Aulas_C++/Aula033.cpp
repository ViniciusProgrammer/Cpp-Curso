#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ofstream arquivo_saida; // ofstream serve para a saida de dados
    ifstream arquivo_entrada; // para ler o arquivo
    string linha;

    arquivo_saida.open("Cfb_Cursos.txt");

    arquivo_saida << "CFB cursos" << endl << "Curso de C++" << endl << "cbfcursos.com.br" << endl << "youtube.com/cfbcursos" << endl; 

    arquivo_saida.close();

    arquivo_entrada.open("Cfb_Cursos.txt");

    if(arquivo_entrada.is_open() == true) { //Verifica se o arquivo foi aberto
        while(getline(arquivo_entrada, linha)) {
            cout << linha << endl; // imprime linha por linha
        }
        arquivo_entrada.close();
    }

    else {
        cout << "Nao foi possivel ler o arquivo" << endl;
    }

    return 0;
}