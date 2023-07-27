#include <iostream>

using namespace std;

int fatorial(int x){
    if(x == 1 || x == 0){
        return 1;
    }
    else{
        return (x) * fatorial(x - 1);
    }
}

int main(){
    int num, res;

    cin >> num;

    res = fatorial(num);

    cout << res << endl;

    return 0;
}
