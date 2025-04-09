#include <iostream>
using namespace std;

int main(){
    int numero, armazem, n1 = 0, n2=1;

    cout << "Digite sua sequencia de Fibonacci: ";
    cin >> numero;

    cout << n1 << endl << n2 << endl;

    for (int i = 0;i <= numero; i++){
        cout << (n1+n2) << endl;

        armazem = n1;
        n1 = n2;
        n2 += armazem;

    }

    return 0;
}