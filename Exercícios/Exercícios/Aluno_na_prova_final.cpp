#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float n1, p1, n2, p2, n3, p3, soma_notas, media, soma_peso, nota_aprovado = 7.0;

    cin >> n1 >> p1 >> n2 >> p2 >> n3 >> p3;

    soma_peso = p1 + p2 + p3;
    soma_notas = (n1 * p1) + (n2 * p2) + (n3 * p3);

    media = soma_notas/soma_peso;

    cout << setprecision(2) << media << endl;

    if (media < 3.0) {
        cout << "O aluno foi REPROVADO com media " << media << endl;
    }

    else if (media >= 7.0) {
        cout << "O aluno foi APROVADO com media " << media << endl;
    }

    else if (media >= 3.0 && media < 7.0) {
        cout << "O aluno ficou em RECUPERACAO precisando de " << nota_aprovado - media << endl;
    }

    return 0;
}