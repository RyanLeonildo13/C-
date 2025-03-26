#include <iostream>
using namespace std;

int main (){

    int fahreinheit, aceleracao, massa;
    float celsius, forca;

    cout << "Digite o valor de Fahrenheit: ";
    cin >> fahreinheit;

    celsius = (fahreinheit - 32) * 5.0 / 9.0;

    cout << "Defina o valor da massa: " << endl;
    cin >> massa;
    cout << "Defina o valor da aceleracao: ";
    cin >> aceleracao;

    forca = massa * aceleracao;

    cout << "Sua forca eh " << forca << endl;
    cout << "E seu Graus celsius eh: " << celsius << endl;


    return 0;
}