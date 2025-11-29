#include <iostream>
using namespace std;
int a[9999];

void nhapmang(int n) {
    for (int i = 0; i < n; i++) cin >> a[i];
}

int main() {
    int n; cin >> n;
    int pal = 1;
    nhapmang(n);
    for (int i = 0; i < n/2; i++) {
        int k = n-i-1;
        if (a[i] != a[k]) {
            pal = 0;
            break;
        }
    }

    if (pal) cout << "array is palindrome";
    else cout << "array is not palindrome";
    return 0;
}
