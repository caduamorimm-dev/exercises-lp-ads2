// Crie uma função capaz de receber 3 números a, b e c e retornar quantos são pares.

#include <iostream>

using namespace std;

int pares(int a, int b, int c) {

    int sum = 0;

    cin >> a >> b >> c;

    if(a % 2 == 0){
        sum++;
    }

    if(b % 2 == 0){
        sum++;
    }

    if(c % 2 == 0){
        sum++;
    }

    return sum;
}

int main() {
    
    int sum, a, b, c;
    cout << pares(a, b, c) << endl;

    return 0;
}
