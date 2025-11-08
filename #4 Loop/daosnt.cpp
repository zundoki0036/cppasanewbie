#include <iostream>
using namespace std;

long long ucln(long long a, long long b) {
    if (a == 0 || b == 0) return a+b;
    if (a>b) return ucln(a-b,b);
    return ucln(a,b-a);
}

bool snt(long long x) {
    if (x < 2) return false;
    for (long long i = 2; i <= x / i; ++i) {
        if (x % i == 0) return 0;
    }
    return 1;
}

long long rev(long long n) {
    long long r = 0;
    while (n > 0) {
        r = r * 10 + (n % 10);
        n /= 10;
    }
    return r;
}

long long sum(long long n) {
    long long s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main () {
    long long x, y;
    cin >> x >> y;
    long long count = 0;
    for (long long i = x; i <= y; i++) {
        for (long long j = i; j <= y; j++) {
            long long goc = ucln(i, j);
            long long tong = sum(goc);
            long long dao = rev(tong);
            if (snt(dao)) count += 1;
        }
    }
    cout << count;
}