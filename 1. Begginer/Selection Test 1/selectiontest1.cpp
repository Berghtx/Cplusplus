#include <bits/stdc++.h>

using namespace std;

int main(){
    int A, B, C, D, sum1=0, sum2=0;
    cin >> A >> B >> C >> D;
    sum1=A+B;
    sum2=C+D;

    if(B>C && D>A && sum2>sum1 && A%2==0){
        cout << "Valores " << "aceitos" << endl;
    } else{
        cout << "Valores " << "nao " << "aceitos" << endl;
    }

    return 0;
}