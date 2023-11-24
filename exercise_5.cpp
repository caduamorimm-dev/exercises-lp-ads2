// Crie uma função capaz de determinar a soma dos n primeiros termos de uma P.A. A soma
// dos n primeiros termos de uma P.A. é definida pela fórmula a seguir: Sn = (n * (a1 + an) / 2).
// É necessário receber o primeiro elemento, o n-ésimo elemento e o valor de n.

#include <iostream>

using namespace std;

void somaPA(double n, double a1, double an) {

    double result ((n * (a1 + an) / 2));

    cout << result << endl;
}

int main() {
    
    double n, a1, an;
    cin >> n >> a1 >> an;

    somaPA(n, a1, an);

    return 0;
}
