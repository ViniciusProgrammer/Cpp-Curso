#include <iostream>

using namespace std;

int main() {

    int quant_linhas, quant_colunas, i, j;

    cin >> quant_linhas >> quant_colunas;

    int mat[quant_linhas][quant_colunas];

    for(i = 0; i < quant_linhas; i++) {
        for(j = 0; j < quant_colunas; j++){
            cin >> mat[i][j];
        }
    }

    cout << "Impressao da matriz" << endl;

    for(i = 0; i < quant_linhas; i++) {
        for(j = 0; j < quant_colunas; j++){
            cout << mat[i][j];
        }
        cout << endl;
    }

    cout << "Impressao da diagonal principal" << endl;

    for(i = 0; i < quant_linhas; i++) {
        for(j = 0; j < quant_colunas; j++){
            cout << "  ";
            if(i == j) {
                cout << mat[i][j];
            }
        }
        cout << endl;
    }

    return 0;
}