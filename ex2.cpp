#include <iostream>

using namespace std;

double soma(double n1, double n2){

    cout << n1 + n2;

}

int main(){

    double x, y;

    cout << "Insira dois numeros: " << endl;

    cin >> x >> y;

    cout << "A soma dos numeros inseridos é: ";

    soma(x,y);

    return 0;
}
