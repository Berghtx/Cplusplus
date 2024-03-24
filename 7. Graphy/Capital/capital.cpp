#include <bits/stdc++.h>

using namespace std;

int main(){
    int A, B, C, D;

    cin >> A >> B >> C >> D; // Pegando a área das quatro divisões

    if((A*D)==(B*C) || (A*B)==(C*D) || (A*C)==(B*D)){ // É a forma de saber se os lados condizem com as áreas que serão formadas
        cout << "S\n";
    } else{
        cout << "N\n";
    }

    return 0;
}