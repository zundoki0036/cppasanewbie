#include <iostream>
#include <math.h>
using namespace std;

int snt(int n) {
    if (n < 2) return false;
    else for (long long i = 2; i <= sqrt(n); i++) {
        if ((n % i) == 0) return false; 
    }
    return true;
}

int tach(int n, int &s) {
    int du = 0;
    while (n > 0) {
        du = n%10;
        if (du == 2 || du == 3 || du ==  5 || du == 7) {
            s += du;
            n = n/10;
            if (n == 0) return 1; 
        }
        else break;
    }
    return 0;
}

int main() {
    int n; cin >> n;
    int s = 0;
    if (tach(n,s)) {
        if ((snt(n)) && (snt(s))) cout << "Day la 1 so thuan nguyen to!";
        else cout << "Day khong phai la 1 so thuan nguyen to!"; 
    } else cout << "Day khong phai la 1 so thuan nguyen to!"; 
}