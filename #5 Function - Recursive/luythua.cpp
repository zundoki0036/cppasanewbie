#include <iostream>
using namespace std;
#define big_prime 1000000007

long long exponent(long long a, long long b){
    if (a==0) return 0;
    if (b==0) return 1;
    if (b==1) return a;
    return a*(exponent(a,b-1))%big_prime;
}

int main (){
    int m, n; cin >> m >> n;
    cout << exponent(m, n);
}
