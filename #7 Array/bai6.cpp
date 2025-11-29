#include <iostream>
using namespace std;

int main() {
    int n,x,y;
    cin >> n;
    double a[n],z;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> x >> y >> z;

    int k = 0;
    double s = a[0];
    int tong = x;
    int current = 1;
    for (int i = 1; i < n; i++) {
        while (true) {
            if ((a[i]-s) > z) {
                current--;
                s = a[k+1];
                k++;
            } else break;
        }

        tong += x + y*current;
        current++;
    }

    cout << tong;
    return 0;
}
