#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, delta;
    cin >> a;
    cin >> b;
    cin >> c;
    delta = b*b -4*a*c;
    if (delta < 0) {
        cout << "PTVN";
        return 0;
    } else if (delta == 0) {
        cout << "PT co nghiem kep: x1 = x2 = " << -b/(2*a);
        return 0;
    } else {
        cout << "PT co hai nghiem phan biet: " << endl;
        cout << "x1 = " << (-b + sqrt(delta))/(2*a) << endl;
        cout << "x2 = " << (-b - sqrt(delta))/(2*a) << endl;
        return 0;
    }
}