#include <iostream>

/*
Aula013: Trabalhando com funções, parametros, return...
*/

using namespace std;

/*
FUNÇÃO SOMA UTILIZANDO O VOID (SEM RETORNO)

void soma(int n1, int n2){

    cout << "A soma = " << n1 + n2 << endl;

}

int main(){
    int n1, n2;

    cin >> n1 >> n2;

    soma(n1, n2);

    return 0;
}



Exemplo com Função com restorno interio


int soma(int n1, int n2){
    int resultado;

    resultado = n1 + n2;
    return resultado;
}

int main(){
    int num1, num2, resposta;

    cin >> num1 >> num2;

    resposta = soma(num1, num2);

    cout << "O resultado da soma = " << resposta << endl;

    return 0;
}
*/

//Exemplo de função utilizando vetores, nesse caso do tipo string

void transportes(string trans[4]){
    int i;

    for(i = 0; i < 4; i++){
        if(i < 3){
            cout << trans[i] << ", ";
        }
        else{
            cout << trans[i] << endl;
        }
    }
}

int main(){

    int i;
    string transp[4];

    for(i = 0; i < 4; i++){
        cin >> transp[i];
    }

    transportes(transp);

    return 0;
}