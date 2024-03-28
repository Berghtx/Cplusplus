#include <iostream>
#include <math.h>

using namespace std;
 
int main() {
    int a, b, s, maiorAB, maiorABC;
    cin >> a >> b >> s;
    maiorAB = (a + b + abs(a - b)) / 2;
    maiorABC = (maiorAB + s + abs(maiorAB - s)) / 2;
    cout << maiorABC << " " << "eh" << " " << "o" << " " << "maior" << endl;
    return 0;
}