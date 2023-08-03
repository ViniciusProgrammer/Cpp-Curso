#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <int> num1;
    vector <int> num2;
    int tam1, tam2, i;

    num1.push_back(1);
    num1.push_back(2);
    num1.push_back(3);
    num1.push_back(4);
    num1.push_back(5);

    num2.push_back(6);
    num2.push_back(7);
    num2.push_back(8);
    num2.push_back(9);
    num2.push_back(10);


    //Adomcopma o elemento no inicio do vector
    //num1.insert(num1.begin(), 888);

    //Adiciona no final do vector

    //num1.insert(num1.end(), 200);

    //Remove o elemento no final

    //num1.erase(num1.end()-2);

    tam1 = num1.size();
    tam2 = num2.size();

    //Permuta os vetores
    //num1.swap(num2);

    cout << "Primeiro elemento de num1: " << num1.front() << endl;
    cout << "Ultimo elemento de num1: " << num1.back() << endl;
    cout << "Elemento entre o primeiro e o ultimo de num1: " << num1.at(tam1/2) << endl;

    tam1 = num1.size();
    tam2 = num2.size();

   // cout << "Tamanho do vector num1 = " << tam1 << endl;
   // cout << "Tamanho do vector num2 = " << tam2 << endl;

    for(i =0; i < tam1; i++){
        cout << num1[i] << " ";    
    }

    cout << endl;

    for(i =0; i < tam1; i++){
        cout << num2[i] << " ";    
    }

    //Remove os elementos do vector
  //  while(!num1.empty()){
  //      num1.pop_back();
  // }

//    cout << endl << "Novo tamanho de num1: " << num1.size() << endl;

    //num2.clear(); Limpa o vector também

    return 0;
}