#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a,b,c,tb;
    cin >> a;
    cin >> b;
    cin >> c;
    if ((a<0) || (b<0) || (c<0)) {
        cout << "Diem khong hop le";
        return 0;
    } else {
        tb = (a+b+c)/3;
        cout << "DTB = " << fixed << setprecision(2) << tb << endl;
        if ((tb >= 9) && (tb<=10)) {
            cout << "Loai: XUAT SAC";
            return 0;
        } else if ((tb >= 8) && (tb < 9)) {
            cout << "Loai: GIOI";
            return 0;
        } else if ((tb >= 7) && (tb < 8)) {
            cout << "Loai: KHA";
            return 0;
        } else if ((tb >= 6) && (tb < 7)) {
            cout << "Loai: TB KHA";
            return 0;
        } else if ((tb >= 5) && (tb < 6)) {
            cout << "Loai: TB";
            return 0;
        } else if ((tb >= 4) && (tb < 5)) {
            cout << "Loai: YEU";
            return 0;
        } else {
            cout << "Loai: KEM";
            return 0;
        }
    }    
}