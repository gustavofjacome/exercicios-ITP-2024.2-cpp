//converte uma frase no formato CamelCase (onde palavras são concatenadas sem espaços, e cada palavra começa com uma letra maiúscula, exceto a primeira) para uma frase no formato normal

#include <iostream>
#include <string>
using namespace std;

// função
string camelCaseParaNormal(const string& camelCase) {
    string normalCase;
    for (char c : camelCase) {
        if (isupper(c) && !normalCase.empty()) {
            normalCase += ' ';
        }
        normalCase += c;
    }
    return normalCase;
}

int main() {
    string fraseCamelCase;
    cout << "Digite uma frase em CamelCase: ";
    getline(cin, fraseCamelCase);
    
    string resultado = camelCaseParaNormal(fraseCamelCase);
    cout << resultado << endl;

    return 0;
}