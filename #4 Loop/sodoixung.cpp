#include <iostream>
using namespace std;

int daoso(int n) {
    int r = 0, du = 0;
    while (n>0) {
        du = n%10;
        n = n/10;
        r = r*10 + du;
    }
    return r;
}

int main() {
    int n; cin >> n;
    int i = 1, f = 0;
    while (i <= n/2) {
        if ((daoso(i) + i) == n) {
            cout << i << endl << daoso(i);
            f = 1;
            break;
        }
        i++;
        if (!f) cout << -1;
    }
    return 0;
}