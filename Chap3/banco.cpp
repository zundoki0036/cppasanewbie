#include <iostream>
#include <cstdlib>
using namespace std;


int main () {
    char a1, b1;
    int a2, b2;
    cin >> a1 >> a2;
    cin >> b1 >> b2;
    cout << boolalpha << (((int(a1)+b1)%2) == ((int(a2)+b2)%2)) << endl;
    return 0;
}
