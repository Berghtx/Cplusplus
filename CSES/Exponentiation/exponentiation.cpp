#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, i = 0; cin >> n;

    double a, b;

    double guarda[n];

    for(i = 0; i < n; i++){

        cin >> a >> b;

        if(a == 0 && b != 0){

            guarda[i] = 0;

        } else if(b == 0){

            guarda[i] = 1;

        } else{

            guarda[i] = pow(a, b);

        }

    }

    for(i = 0; i < n; i++){

        cout << guarda[i] << endl;

    }

    return 0;
}

