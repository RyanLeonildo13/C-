#include <iostream>
using namespace std;

int main(){
    int n, aux, temp, ult = 1, penult = 0;

    cout << "Digite a sequencia de Fibonacci: ";
    cin >> n;

    cout << penult << endl << ult << endl;

    for (aux = 3; aux <= n; aux++){
        cout << (ult+penult) << endl;

        temp = penult;
        penult =   ult;
        ult = ult + temp;  
    }

        return 0;
}