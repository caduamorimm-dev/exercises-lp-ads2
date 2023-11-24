// Crie uma função capaz de receber 1 número n qualquer e imprimir todos os números de 1 a n.

#include <iostream>

using namespace std;

void loopNumber(int x) {
    for (int i = 1; i <= x; i++) {
        cout << i << endl;
    }
}

int main() {
    int x;

    cin >> x;

    loopNumber(x);

    return 0;
}
