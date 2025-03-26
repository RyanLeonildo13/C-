#include <iostream>
#include <cmath> //Inclui funções matemáicas
using namespace std;
#define pi 3.14159


int main(){

/*Calcula o perimetro e a area de uma circunferencia de
 raio R (fornecido pelo usuario)*/


    // Definir variavel
    int Raio;
    float perim, area;


    //obter o raio da circunferencia
    cout << "Entre com o valor do raio: ";
    cin >> Raio;

    //calculando o perimetro do circulo
    perim = 2* pi *Raio;

    //Calculando  a area da circunferencia
    area = pi * pow(Raio, 2);

    // Exibindo os valores
    cout << "O perimetro da circunferencia do Raio " << Raio << " eh, " << perim << endl;
    cout << "E a Area eh, " << area << endl;



    return 0;
}