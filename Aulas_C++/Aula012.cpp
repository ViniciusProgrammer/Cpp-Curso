#include <iostream>

//Aula012: Trabalhando com matrizees 

using namespace std;

int main(){

    int mat[2][3];
    int i, j;

    for(i = 0; i < 2; i++){
        for(j =0; j < 3; j++){
            cin >> mat[i][j];
        }
    }

    
    for(i = 0; i < 2; i++){
        for(j =0; j < 3; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Acabou" << endl;

    return 0;
}