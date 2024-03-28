#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007

long long int fast_pow(long long int base, long long int power) {
    long long int result = 1;
    while(power > 0) {
        if(power % 2 == 1) { 
            result = (result*base) % MOD;
        }
        base = (base * base) % MOD;
        power = power / 2; 
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        long long int a, b;
        cin >> a >> b;
        cout << fast_pow(a, b) << endl;
    }
    return 0;
}
