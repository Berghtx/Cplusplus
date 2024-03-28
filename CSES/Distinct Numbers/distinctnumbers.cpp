#include <bits/stdc++.h>
#include <set>

using namespace std;

int main(){
    int n, i = 0; cin >> n;

    set<int> x; int aux, c = 0;

    for(i = 0; i < n; i++){

        cin >> aux;
        x.insert(aux);
     
    }

    for(set<int>::iterator it = x.begin(); it != x.end(); ++it){

		c++;

	}

    cout << c << endl;

    return 0;
}