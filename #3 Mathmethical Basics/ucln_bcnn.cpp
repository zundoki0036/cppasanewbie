#include <iostream>
using namespace std;

//thuat toan euclid + de quy
int ucln(int a, int b){
    if ((!a) || (!b)) return a+b;
    if (a>b) return ucln(a - b, b);
    return ucln(a, b - a);
}

int main (){
    int a,b; cin >> a >> b;
    cout << "UCLN: " << ucln (a,b) << endl;
    cout << "BCNN: " << (a/ucln(a,b))*b;
}