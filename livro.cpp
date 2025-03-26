#include <iostream>
using namespace std;
#define PRECO 1.99

int main(){
    int pera = 3;
    char qualidade = 'A';
    float peso = 2.5;

    cout << "Existem " << pera << " peras de qualidade " << qualidade
    << " pesando " << peso << " Quilos" << endl;

    cout << "O preço por quilo eh R$ " << PRECO
    << ", o total eh R$ " << peso*PRECO << endl;


    return 0;
}