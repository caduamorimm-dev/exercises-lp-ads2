// Supondo um empréstimo no valor de c Reais, por m meses a juros de t% ao mês, crie
// uma função capaz de descobrir os juros cobrados nesse empréstimo. A fórmula para
// cálculo dos juros simples é a que se segue: j = c ∗ m ∗ t.

#include <iostream>

using namespace std;

void jurosEmprestimo(int c, int m, int t) {

    int juros;
    juros = c * m * t;

    cout << juros << endl;

}

int main() {
    
    int c, m, t, juros;
    cin >> c >> m >> t;

    jurosEmprestimo(c, m, t);

    return 0;
}
