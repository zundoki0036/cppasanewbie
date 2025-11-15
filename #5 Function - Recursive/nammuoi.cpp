#include <iostream>
using namespace std;

int nammuoi(int n,int current) {
    if (current >= n) return 0;
    cout << current << endl;
    return nammuoi (n, current + 5);
}

int main (){
    int n; cin >> n;
    nammuoi(n,5);
    return 0;
}
