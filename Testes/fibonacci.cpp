#include <iostream>
using namespace std;

int main(){
    int n, temp, penult = 0, ult = 1;

    cout << "Digite a sequencia de Fibonacci: ";
    cin >> n;

    cout << penult << endl << ult << endl;

    for ( int i = 3; i <= n; i++){
        cout << (ult +penult) << endl;

        temp = penult;
        penult = ult;
        ult = ult+ temp;

    }


    return 0;
}