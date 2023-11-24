// Crie uma função capaz de receber 3 números a, b e c, e retornar o delta desses números.

#include <iostream>
#include <cmath> 

using namespace std;

void delta(int a, int b, int c){
    int delta = pow(b, 2) - 4 * a * c;
    cout << delta << endl;
}

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    delta(a, b, c);

    return 0;
}


