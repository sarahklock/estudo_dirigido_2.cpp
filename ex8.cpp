#include <iostream>
#include <cmath>

using namespace std;

void getx (float a, float b, float c){

    float x, x1, x2, delta = b*b - 4*a*c;

    if (delta < 0){
        cout << "Nao eh possivel realizar essa operacao pois delta eh negativo e nao existe raiz quadrada de numero negativo." << endl;
    }

    else if (delta == 0){
        cout << "A equacao possui raiz unica, pois delta eh zero." << endl;

        x = -b / 2*a;

        cout << "x = " << x << endl;
    }

    else{

        x1 = (-b + sqrt(delta))/2*a;

        x2 = (-b - sqrt(delta))/2*a;

        cout << "x' = " << x1 << endl
             << "x'' = " << x2 << endl;
    }

}

int main(){

        float A,B,C;

        cout << "Insira, respectivamente, a, b, e c da sua equacao de segundo grau: " << endl;

        cin >> A >> B >> C;

        getx(A,B,C);

	return 0;
}
