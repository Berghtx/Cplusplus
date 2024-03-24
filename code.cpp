#include <iostream>

using namespace std;

int fat(int N) {

    if (N == 0 || N == 1) { 
        return 1;
    } 

    return N * fat(N - 1); 

}

int main() {
    int N; cin >> N;

    cout << fat(N) << endl; 
    cout << "mudei algumas coisa aqui" << endl;

    return 0;
}

