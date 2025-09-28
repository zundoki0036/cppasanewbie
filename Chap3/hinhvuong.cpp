#include <iostream>
using namespace std;

int main() {
    float a,b,c,d,x,y; // cac thanh phan cua canh a,b
    float c1x,c1y,d1x,d1y; // cac thanh phan cua canh c,d
    float c2x,c2y,d2x,d2y; // cac thanh phan cua canh c',d'
    cin >> a >> b;
    cin >> c >> d;
    if (a == c && b == d){
        cout << "So hinh vuong la 0" << endl;
    } else {
        x = c-a;
        y = d-b;

        d2x = a + y;
        d2y = b - x;
        c2x = d2x + x;
        c2y = d2y + y;
        
        d1x = a - y;
        d1y = b + x;
        c1x = d1x + x;
        c1y = d1y + y;

        cout << "(" << a << ", " << b << ") ";
        cout << "(" << d1x << ", " << d1y << ") ";
        cout << "(" << c1x << ", " << c1y << ") ";
        cout << "(" << c << ", " << d << ")" << endl;

        cout << "(" << a << ", " << b << ") ";
        cout << "(" << c << ", " << d << ") ";
        cout << "(" << c2x << ", " << c2y << ") ";
        cout << "(" << d2x << ", " << d2y << ")" << endl;
    }
    return 0;
}