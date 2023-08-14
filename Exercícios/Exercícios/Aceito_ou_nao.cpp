#include <iostream>

using namespace std;

int main() {

    int a, b, c, d;
    int cond1 = 0,  cond2 = 0, cond3 = 0, cond4 = 0;

    cin >> a >> b >> c >> d;

    if(b > c){
        cond1 = 1;
    }

    if(d > a) {
        cond2 = 1;
    }

    if((c + d) > (a + b)) {
        cond3 = 1;
    }

    if(c > 0 && d > 0) {
        cond4 = 1;
    }

    if(cond1 == 1 && cond2 == 1 && cond3 == 1 && cond4 == 1) {
        cout << "Valores aceitos" << endl;
    }

    else{
        cout << "Valores nao aceitos" << endl;

        if(b <= c) {
            cout << "Condicao 1" << endl;
        }

        if(d <= a) {
            cout << "Condicao 2" << endl;
        }

        if((c + d) <= (a + b)) {
            cout << "Condicao 3" << endl;
        }

        if(c < 0 && d < 0) {
            cout << "Condicao 4" << endl;
        }
    }

    return 0;
}