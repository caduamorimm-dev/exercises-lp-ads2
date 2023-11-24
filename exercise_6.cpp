// Faça uma função capaz de receber dois números b e h que representam os lados de um
// retângulo ou quadrado, e retornar 1 se ele for um quadrado ou 0 se for um retângulo.

#include <iostream>

using namespace std;

void verificarForma(int a, int b) {

    if(a != b){
        cout << 0 << endl;
    } else {
        cout << 1 << endl;
    }

}

int main() {
    
    int a, b;

    cin >> a >> b;

    verificarForma(a, b);

    return 0;
}
