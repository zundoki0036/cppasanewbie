#include <iostream>
using namespace std;

int main() {
    int w1,l1,y1;
    cin >> w1 >> l1 >> y1;
    int w2,l2,y2;
    cin >> w2 >> l2 >> y2;
    int w3,l3,y3;
    cin >> w3 >> l3 >> y3;
    int point1=0;
    int w4,l4,y4;
    cin >> w4 >> l4 >> y4;
    int w5,l5,y5;
    cin >> w5 >> l5 >> y5;
    int w6,l6,y6;
    cin >> w6 >> l6 >> y6;
    int point2=0;
    int total1 = w1 + w2 + w3;
    int minus1 = total1 - (l1 + l2 + l3);
    int yellow1 = y1 + y2 + y3;
    int total2 = w4 + w5 + w6;
    int minus2 = total2 - (l4 + l5 + l6);
    int yellow2 = y4 + y5 + y6;
    if (w1 > l1) point1 += 3;
    else if (w1 == l1) point1 += 1;
    if (w2 > l2) point1 += 3;
    else if (w2 == l2) point1 += 1;
    if (w3 > l3) point1 += 3;
    else if (w3 == l3) point1 += 1;
    if (w4 > l4) point2 += 3;
    else if (w4 == l4) point2 += 1;
    if (w5 > l5) point2 += 3;
    else if (w5 == l5) point2 += 1;
    if (w6 > l6) point2 += 3;
    else if (w6 == l6) point2 += 1;
    if (point1 > point2) {
        cout << point1 << " " << minus1 << " " << total1 << " " << yellow1 << endl;
    } else if (point1 == point2) {
        if (minus1 > minus2) {
            cout << point1 << " " << minus1 << " " << total1 << " " << yellow1 << endl;
        } else if (minus1 == minus2) {
            if (total1 > total2) {
                cout << point1 << " " << minus1 << " " << total1 << " " << yellow1 << endl;
            } else if (total1 == total2) {
                if (yellow1 < yellow2) {
                    cout << point1 << " " << minus1 << " " << total1 << " " << yellow1 << endl;
                } else if (yellow1 == yellow2) {
                    cout << point1 << " " << minus1 << " " << total1 << " " << yellow1 << endl;
                } else {
                    cout << point2 << " " << minus2 << " " << total2 << " " << yellow2 << endl;
                }
            } else {
                cout << point2 << " " << minus2 << " " << total2 << " " << yellow2 << endl;
            }
        } else {
            cout << point2 << " " << minus2 << " " << total2 << " " << yellow2 << endl;
        }
    } else {
        cout << point2 << " " << minus2 << " " << total2 << " " << yellow2 << endl;
    }
}