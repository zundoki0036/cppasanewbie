#include <iostream>
using namespace std;

//thuat toan euclid + de quy
int ucln(int a, int b){
    if ((!a) || (!b)) return a+b;
    if (a>b) return ucln(a - b, b);
    return ucln(a, b - a);
}

//thuat toan neu bi tran so
long long ucln(long long a, long long b) {
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main (){
    int a,b; cin >> a >> b;
    cout << "UCLN: " << ucln (a,b) << endl;
    cout << "BCNN: " << (a/ucln(a,b))*b;

}
