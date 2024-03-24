#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, M, P, cont = 0, i = 0, j = 0; cin >> N;
    vector<int> saida;

    for(i = 0; i < N; i++){
        cont = 0;
        cin >> M;
        vector<int> fila(M), ordem(M); 

        for(j = 0; j < M; j++){

            cin >> P;
            fila[j] = P;
            ordem[j] = P;

        }

        sort(ordem.begin(), ordem.end(), greater<int>());
        
       for(j = 0; j < M; j++){

            if(fila[j] == ordem[j]){

                cont++;

            }

        }

       saida.push_back(cont);

    }

    for(i = 0; i < N; i++){

        cout << saida[i] << endl;

    }

    return 0;
}
