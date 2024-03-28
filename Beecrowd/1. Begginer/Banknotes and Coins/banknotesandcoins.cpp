#include <bits/stdc++.h>

using namespace std;

int main(){
    float N;
    int res1;
    cin >> N;
    N=100*N;
    res1=N;

    cout << "NOTAS:" << endl;
    cout << res1/10000 << " " << "nota(s)" << " " << "de"  << " " <<  "R$" << " " << "100.00" << endl;
    res1=(res1%10000);
    cout << res1/5000 << " " << "nota(s)" << " " << "de"  << " " <<  "R$" << " " << "50.00" << endl;
    res1=(res1%5000);
    cout << res1/2000 << " " << "nota(s)" << " " << "de"  << " " <<  "R$" << " " << "20.00" << endl;
    res1=(res1%2000);
    cout << res1/1000 << " " << "nota(s)" << " " << "de"  << " " <<  "R$" << " " << "10.00" << endl;
    res1=(res1%1000);
    cout << res1/500 << " " << "nota(s)" << " " << "de"  << " " <<  "R$" << " " << "5.00" << endl;
    res1=(res1%500);
    cout << res1/200 << " " << "nota(s)" << " " << "de"  << " " <<  "R$" << " " << "2.00" << endl;    
    res1=(res1%200);    
  
    cout << "MOEDAS:" << endl;
    cout << res1/100 << " " << "moeda(s)" << " " << "de"  << " " <<  "R$" << " " << "1.00" << endl;
    res1=(res1%100);
    cout << res1/50 << " " << "moeda(s)" << " " << "de"  << " " <<  "R$" << " " << "0.50" << endl;
    res1=(res1%50);
    cout << res1/25 << " " << "moeda(s)" << " " << "de"  << " " <<  "R$" << " " << "0.25" << endl;
    res1=(res1%25);
    cout << res1/10 << " " << "moeda(s)" << " " << "de"  << " " <<  "R$" << " " << "0.10" << endl;
    res1=(res1%10);
    cout << res1/5 << " " << "moeda(s)" << " " << "de"  << " " <<  "R$" << " " << "0.05" << endl;
    res1=(res1%5);
    cout << res1 << " " << "moeda(s)" << " " << "de"  << " " <<  "R$" << " " << "0.01" << endl;    

    return 0;
}