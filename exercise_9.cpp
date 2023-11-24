//Faça uma função capaz de receber três números a, b e c, e imprimir as duas raízes da
// equação do segundo grau. Se a função tem apenas uma raiz, imprimir apenas essa raiz. Se
// não tiver raiz, imprima não existem raízes.

#include <iostream>

using namespace std;

void raiz(int c, int m, int t) {

    int juros;
    juros = c * m * t;

    cout << juros << endl;

}

int main() {
    
    int c, m, t, juros;
    cin >> c >> m >> t;

    raiz(c, m, t);

    return 0;
}
