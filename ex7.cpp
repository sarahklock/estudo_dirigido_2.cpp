#include <iostream>
#include <cctype>
#include <vector>

using namespace std;

string getminuscula (string palavras){

    vector <char> minu;
    string retorno;


    for (int i = 0; i < palavras.size(); i++){

        minu.push_back(palavras[i]);

        retorno += tolower(minu[i]);

    }

    return retorno;

}

int main(){

    string palavra;

    getline(cin,palavra);

    cout << getminuscula (palavra) << endl;

	return 0;
}
