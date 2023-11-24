// Crie uma função capaz de receber 2 números x e y, e retornar qual dos dois é maior.

#include <iostream>

using namespace std;

void maiorNumero(int x, int y){
    if(x > y){
        cout << x << endl;
    } else {
        cout << y << endl;
    }
}

int main() {

    int x, y;

    cin >> x >> y;

    maiorNumero(x, y);

    return 0;
}
