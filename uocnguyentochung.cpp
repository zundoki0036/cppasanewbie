#include <iostream>
using namespace std;
bool snt (long long x) {
    if (x<2) return false;
    for (long long i = 2; i*i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

long long sum_common_prime (long long x, long long y) {
    long long min;
    if (x > y) min = y;
    else min = x;
    long long count = 0;
    long long i = min;
    while (i >= 2) {
        if (snt(i)) {
            if ((x % i == 0) && (y % i == 0)) count +=i;
        }
        i--;
    }
    return (count == 0) ? -1 : count;
}

int main () {
    int m, n;
	cin >> m >> n;
    cout << sum_common_prime(m,n);
}