#include <iostream>

using namespace std;

double converte_moeda (double valor, string moeda){

    if (moeda == "dolar"){

        return valor * 4.17 /* --> valor do dolar no dia 24/09/2019*/;

    }

    if (moeda == "euro"){

        return valor * 4.6 /* --> valor do euro no dia 24/09/2019*/;

    }
}

int main(){

    cout << "50,00 reais em euro: " << converte_moeda (50, "euro") << endl;

    return 0;
}
