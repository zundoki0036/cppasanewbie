#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    double a, b, c, lonnhat, nhonhat, left;
    cin >> a;
    cin >> b;
    cin >> c;
    lonnhat = max (max(a,b),c);
    nhonhat = min (min(a,b),c);
    left = a + b + c - lonnhat - nhonhat;
    cout << nhonhat << " " << left << " " << lonnhat;
    return 0;
}