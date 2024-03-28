#include <bits/stdc++.h>

using namespace std;

int main(){
    double a, b, c, delta, R1, R2;
    cin >> a >> b >> c;
    delta = pow(b, 2) - 4*a*c;
    R1 = (-(b)+sqrt(delta))/(2*a);
    R2 = (-(b)-sqrt(delta))/(2*a);

    cout.precision(5);
    cout.setf(ios::fixed);

    if(delta>0){
        cout << "R1 " << "= " << R1 << endl;
        cout << "R2 " << "= " << R2 << endl;
    } else if(delta==0){
        cout << "Impossivel " << "calcular" << endl;
    } else if(delta<0){
        cout << "Impossivel " << "calcular" << endl;
    }

    return 0;
}