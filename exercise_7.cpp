// Faça uma função capaz de receber 3 números e retornar a soma do maior com o menor número.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void somaMaiorMenor(int a, int b, int c) {
    int sum;

    vector<int> numberV;

    numberV.push_back(a);
    numberV.push_back(b);
    numberV.push_back(c);

    sort(numberV.begin(), numberV.end());

    sum = numberV[0] + numberV[2];

    cout << sum << endl;

}

int main() {
    
    int a, b, c;

    cin >> a >> b >> c;

    somaMaiorMenor(a, b, c);    

    return 0;
}
