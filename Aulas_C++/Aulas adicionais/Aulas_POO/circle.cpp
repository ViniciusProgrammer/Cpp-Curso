#include "circle.h"
#include <iostream>

using namespace std;

Circle :: Circle() {
    radius = 0.0;
    x = y = 0;
}

Circle :: Circle(float rr, int xx, int yy) {
    radius = rr;
    x = xx;
    y = yy;
}

float Circle :: area() {

    return radius * radius * 3.141592;

}

float Circle :: diametro() {
    return radius * 2;
}
        
void Circle :: setRadius(float rr) {

    if(rr > 0){
        radius = rr;
    }
    else{
        radius = 0;
    }
}

void Circle :: setOrigin(int xx, int yy){

    x = xx;
    y = yy;
}

float Circle :: getRadius() { 
    return radius;
}

void Circle :: imprime() {
    cout << endl << "Radius = " << radius << ", X = " << x << ", " << y << "}" << endl; 
}