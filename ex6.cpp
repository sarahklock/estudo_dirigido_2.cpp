#include <iostream>
#include <string>

using namespace std;

int main(){

    string respostas[5];
    int sins = 0;

    cout << "Responda as perguntas com 'sim' ou 'nao', sem acento, letra maiuscula ou pontuacao." << endl
         << "Telefonou para a vítima?" << endl;

    cin >> respostas[0];

    cout << "Esteve no local do crime?" << endl;

    cin >> respostas[1];

    cout << "Mora perto da vítima?" << endl;

    cin >> respostas[2];

    cout << "Devia para a vítima?" << endl;

    cin >> respostas[3];

    cout << "Já trabalhou com a vítima?" << endl;

    cin >> respostas[4];

    for (string resposta: respostas){

        if(resposta == "sim"){
            sins++;
        }

    }

    if (sins == 2){
        cout << "Suspeita" << endl;
    }

    if (sins == 4 || sins == 3){
        cout << "Cumplice" << endl;
    }

    if (sins == 5){
        cout << "Assassino" << endl;
    }

    return 0;
}
