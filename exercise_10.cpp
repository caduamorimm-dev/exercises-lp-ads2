#include <iostream>

using namespace std;

void somaPares(int a, int b) {
    int resultadoSoma = 0; 

    for(int i = a; i <= b; i++) {
        if(i % 2 == 0){
            resultadoSoma += i;
        }
    }

    cout << resultadoSoma << endl;
}

int main() {
    int num1, num2, resultadoSoma;
    cin >> num1 >> num2;

    somaPares(num1, num2);

    return 0;
}