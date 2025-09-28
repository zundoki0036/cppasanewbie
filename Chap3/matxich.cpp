#include <iostream>
using namespace std;

int main() {
    int n,d,r,L;
    cin >> d >> r >> n;
    if (n<1 || d<1 || r<1 || d>100 || r>100 || d>=r){
        cout << "0" << endl;
    } else if (n==1){
        L=2*(r+d);
        cout << L << endl;
    } else {
        L = 2*n*(d + r) - (2*d*(n - 1));
        cout << L << endl;
    }    
    return 0;
}