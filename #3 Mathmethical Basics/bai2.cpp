#include <iostream>
using namespace std;

int ucln(int a,int b) {
    if (a == 0 || b == 0) return a+b;
    if (a>b) return ucln(a-b,b);
    return ucln(a,b-a);
}

int main() {
    int a,b,A,B;
    cin >> a >> b;
    int L = (a/ucln(a,b))*b;
    if (a % 2 == 0) A = a/2;
    else A = a;
    if (b % 3 == 0) B = b/3;
    else B = b;
    int R = (A/ucln(A,B))*B;
    cout << 6*L + 4*R;
    return 0;
}