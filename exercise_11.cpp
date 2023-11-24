// Faça uma função que receba um número positivo e imprima todos os seus divisores.
// Exemplo: os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.

#include <iostream>

using namespace std;

void divisores(int x) {

    for(int i = 1; i <= x; i++){
        if(x % i == 0){
            cout << i << " ";
        }
    }

    cout << endl;
}

int main() {
    
    int x;
    cin >> x;

    divisores(x);

    return 0;
}
