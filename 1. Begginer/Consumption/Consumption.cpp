#include <iostream>
#include <math.h>

using namespace std;
 
int main() {
    double X, Y;
    cin >> X >> Y;
    
    cout.precision(3);
    cout.setf(ios::fixed);
    cout << X / Y << " " << "km/l" << endl;

    return 0;
}