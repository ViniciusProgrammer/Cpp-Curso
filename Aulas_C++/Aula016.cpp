#include <iostream>

/*
Aula016: Trabalhando com enumerações
*/

using namespace std;

int main(){
                // 0      1        2        3  
    enum armas{Pistola, Rifle, Escopeta, Bazuca};
    armas sel;

    sel = Rifle;

    cout << sel << endl;

    return 0;
}