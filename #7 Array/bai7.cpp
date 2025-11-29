#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    int count = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max = a[0];
    int min = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }

    int k = max-min+1;
    cout << k-n;
    return 0;
}
