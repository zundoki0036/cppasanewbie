#include <iostream>
using namespace std;

int main() {
    long long k,t;
    cin >> k >> t;
    if (t <= k) {
        cout << k;
    } else {
        long long n = t / k;
        long long bu = t - (n * k);
        if (n%2 == 0) {
            cout << bu;
        } else {
            cout << k - bu;
        }
    }
    return 0;
}