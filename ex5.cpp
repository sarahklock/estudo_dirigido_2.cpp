#include <iostream>
#include <vector>
#include <string>


using namespace std;

string palindromo (string palavra){

    string palavra_reverse;

    for (int x = palavra.length()-1; x >= 0; x--){

       // palavra_reverse += palavra[x];

        palavra_reverse.append (1, palavra[x]);

    }

    cout << palavra_reverse << endl;


    if (palavra_reverse == palavra){
         return "verdadeiro";
    }

    if (palavra_reverse != palavra){
         return "falso";
    }

}

int main(){

    cout << "'sarah' é um palindromo?" << endl
         << palindromo("sarah") << endl
         <<"'ana' é um palindromo?" << endl
         << palindromo("ana");



    return 0;
}
