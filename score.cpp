#include <iostream>
using namespace std;

int main(){

    int score = 5;

    cout << 5 + 10 *5 % 6 << endl;
    cout << 10/4 << endl;
    cout << 10.0 / 4.0 << endl;
    cout << static_cast<char>('A' + 1) << endl;
    cout << score + (score == 0) << endl;

    return 0;
}