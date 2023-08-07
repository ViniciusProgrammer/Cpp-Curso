#include <iostream>
#include "circle.h"
#include "circle.cpp"

using namespace std;

int main() {

    Circle c1; //Aqui é o circle padrao que vai inicializar o RADIUS = 0.0 o X = 9 e o Y = 0
    Circle c2 (15.7, 8, -5);
  //  Circle c3 (17.7); // o restante ele incializa ocm 0.0 e 0.0

    cout << endl << "Circle c1 ";
    c1.imprime();

    c1.setRadius(10);
    c1.setOrigin(5, 7);

    cout << endl << "Cirlce c1 modificado ";
    c1.imprime();

    cout << endl << "Area = " << c1.area() << endl;
    cout << "Diametro = " << c1.diametro() << endl;

    cout << endl << "Circle c2 ";
    c2.imprime();

    //cout << endl << "Circle c3 ";
    //c3.imprime();

    return 0;
}