#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    short n;
    cin >> n;
    cout << n << " " << n << " " << n << " " << n << " " << n << " " << n << endl;
    cout << n << setw(10) << n << endl;
    cout << n << setw(10) << n << endl;
    cout << n << " " << n << " " << n << " " << n << " " << n << " " << n << endl;
    cout << setw(6) << n << endl;
    cout << setw(5) << n << setw(2) << n << endl;
    cout << setw(4) << n << setw(4) << n << endl;
    cout << setw(3) << n << setw(6) << n << endl;
    cout << setw(2) << n << setw(8) << n << endl;
    cout << n << " " << n << " " << n << " " << n << " " << n << " " << n << endl;
    return 0;
}