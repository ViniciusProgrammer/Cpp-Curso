#include <iostream>
#include <fstream>

/*
Aula032: Trabalhando com arquivos
*/

using namespace std;

int main(){

    ofstream arquivo;

    arquivo.open("cfbcursos.txt", ios::app);

    arquivo << "cfbcursos.com.br\n";

    arquivo.close();

    return 0;
}