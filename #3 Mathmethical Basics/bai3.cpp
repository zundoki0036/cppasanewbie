#include <iostream>
#include <math.h>
using namespace std;

int snt(int n) {
    if (n < 2) return 0;
    else for (int i = 2; i <= sqrt(n); i++) {
        if (n%i == 0) return 0;
    }
    return 1;
}

int tach(int n) {
    int du = 0;
    while (n > 0) {
        du += n % 10;
        n /= 10;
    }
    return du;
}

int daong(int n) {
    int du = 0;
    int r = 0;
    while (n > 0) {
        du = n%10;
        r = r*10 + du;
        n /= 10;
    }
    return r;
}

int main() {
    int n;cin >> n;
    for (int i = 2; i <= n; i++) {
        if (snt(tach(i))) cout << i << " ";
    }
    cout << endl;
    cout << "So dao nguoc: " << daong(n);
    return 0;
}