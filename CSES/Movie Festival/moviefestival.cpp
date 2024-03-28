#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, i = 0, cont = 0; cin >> n;

    vector< pair<int, int> > hor(n); /* Horário dos filmes que cabem no cronograma */

    for(i = 0; i < n; i++){

        cin >> hor[i].second >> hor[i].first; /* Lendo o horário de início e término */

    }

    sort(hor.begin(), hor.end());

    int ultimo_hor = 0;

    for(i = 0; i < n; i++){

        if(hor[i].second >= ultimo_hor){

            ultimo_hor = hor[i].first;
            cont++;

        }

    }

    cout << cont << endl;

    return 0;
}

