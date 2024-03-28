#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q, i = 0; cin >> n >> q;

    vector<int> x(n);

    for(i=0; i < n; i++) {

        cin >> x[i];

    }

    while(q--) {

        int a, b; cin >> a >> b;
        int min_val = x[a-1];

        for(int i=a; i<b; i++) {

            min_val = min(min_val, x[i]);

        }

        cout << min_val << endl;

    }

    return 0;
}