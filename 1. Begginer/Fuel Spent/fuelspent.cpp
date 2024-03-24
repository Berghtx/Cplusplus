#include <iostream>

using namespace std;
 
int main() {
    double t, v;
    cin >> t >> v;
    cout.precision(3);
    cout.setf(ios::fixed);
    cout << t * v / 12 << endl;

    return 0;
}