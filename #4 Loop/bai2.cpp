#include <iostream>
using namespace std;

int main () {
    int candal,makenew;
    cin >> candal >> makenew;
    int s = candal;
    int du = 0;
    int moi = 0;

    while (candal != 0) {
        moi = candal / makenew;
        s += moi;
        du += candal % makenew;
        candal = moi;
    }

    while (du >= makenew) {
        moi = 0;
        candal = du;
        du = 0;
        while (candal != 0) {
            moi = candal / makenew;
            s += moi;
            du += candal % makenew;
            candal = moi;
        }
    }

    cout << s;
    return 0;
}