#include <iostream>
using namespace std;

int main() {
    string oneright,oneleft,twoleft,tworight;
    string nguoichoi1, nguoichoi2;
    string rut1, rut2;
    cin >> oneleft >> oneright;
    cin >> twoleft >> tworight;
    cin >> rut1 >> rut2;
    if (rut1 == "PHAI") {
        nguoichoi1 = oneleft;
    } else if (rut1 == "TRAI") {
        nguoichoi1 = oneright;
    }
    if (rut2 == "PHAI") {
        nguoichoi2 = twoleft;
    } else if (rut2 == "TRAI") {
        nguoichoi2 = tworight;
    }
    if (nguoichoi1 == nguoichoi2) {
        cout << "DRAW" << endl;
    } else if ((nguoichoi1 == "KEO" && nguoichoi2 == "BAO") || (nguoichoi1 == "BUA" && nguoichoi2 == "KEO") || (nguoichoi1 == "BAO" && nguoichoi2 == "BUA")) {
        cout << "A WON" << endl;
    } else {
        cout << "B WON" << endl;
    }
}