#include <iostream>

/*
Aula031: Introducão a POO
*/

using namespace std;

class Aviao{

public:
    int vel = 0;
    int velmax;
    string tipo;
    void ini(int tp);

private:

};

void Aviao::ini(int tp){
    if(tp == 1){
        this -> velmax = 800;
        this -> tipo = "Jato"; 
    }

    else if (tp == 2){
        this -> velmax = 350;
        this -> tipo = "Monomotor";
    }
    else if(tp == 3){
        this -> velmax = 150;
        this -> tipo = "Planador";
    }
}

int main(){

    Aviao *av1 = new Aviao();
    Aviao *av2 = new Aviao();

    av1 -> ini (1);
    av2 -> ini (2);

    cout << av1 -> velmax << endl;
    cout << av2 -> velmax << endl;

    return 0;
}