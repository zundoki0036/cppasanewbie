#include <iostream>
using namespace std;

int main() {
    int n,k,p,q,soghe,ma_de,block;
    int blockbob,ghebob,pbob,qbob;
    cin >> n >> k >> p >> q;
    soghe = (p - 1) * 2 + q;
    block = soghe / k;
    if (soghe % k == 0) {
        ma_de = k;
    } else {
        ma_de = soghe - block * k;
    }

    if (ma_de == k){
        blockbob = block + 1;
        ghebob = blockbob * k;
        if (ghebob <= n) {
            if ((ghebob-2)%2 == 0) {
                cout << (ghebob-2)/2 + 1;
                cout << " " << 2;
            } else {
                cout << (ghebob-1)/2 + 1;
                cout << " " << 1;
            }
            return 0;
        } else {
            cout << "-1" << endl;
            return 0;
        }
    } else {
        blockbob = block + 1;
        ghebob = ma_de + blockbob*k;
        if (ghebob <= n) {
            if ((ghebob-2)%2 == 0) {
                cout << (ghebob-2)/2 + 1;
                cout << " " << 2;
            } else {
                cout << (ghebob-1)/2 + 1;
                cout << " " << 1;
            }
            return 0;
        } else {
            cout << "-1" << endl;
            return 0;
        }
    }
    return 0;
}