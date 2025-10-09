#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    double a,b,c;
    double delta, x1, x2, ng1, ng2, ng3, ng4;
    cin >> a >> b >> c;
    if (a==0){
        if (b!=0) {
            delta = -4*b*c;
            if (delta < 0) {
                cout << "Ø";
                return 0;
            } else if (delta == 0) {
                cout << "{" << 0 << "}";
                return 0;
            } else {
                x1 = (sqrt(delta))/(2*b);
                x2 = (-sqrt(delta))/(2*b);
                double ng[2] = {x1, x2};
                sort(ng, ng+2);
                cout << "{" << ng[0] << ", " << ng[1] << "}";
            }
        } else {
            if (c==0) {
                cout << "ℝ";
                return 0;
            } else {
                cout << "Ø";
                return 0;
            }
        }
    } else {
        delta = b*b -4*a*c;
        if (delta < 0) {
            cout << "Ø";
            return 0;
        } else if (delta == 0) {
            if (b==0) {
                cout << "{" << 0 << "}";
                return 0;
            } else {
                x1 = -b/(2*a);
                if (x1 < 0) {
                    cout << "Ø";
                    return 0;
                } else if (x1 == 0) {
                    cout << "{" << 0 << "}";
                    return 0;
                } else {
                    ng1 = sqrt(x1);
                    ng2 = -sqrt(x1);
                    double ng[2] = {ng1, ng2};
                    sort(ng, ng+2);
                    cout << "{" << ng[0] << ", " << ng[1] << "}";
                    return 0;
                }
            }
        } else {
            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b - sqrt(delta))/(2*a);
            if ((x1 < 0 && x2 < 0)) {
                cout << "Ø";
                return 0;
            } else if ((x1 < 0 && x2 == 0) || (x1 == 0 && x2 < 0) || (x1 == 0 && x2 == 0)) {
                cout << "{" << 0 << "}";
                return 0;
            } else if (x1 > 0 && x2 == 0) {
                ng1 = sqrt(x1);
                ng2 = -sqrt(x1);
                double ng[2] = {ng1, ng2};
                sort(ng, ng+2);
                cout << "{" << ng[0] << ", " << ng[1] << ", " << 0.0 << "}";
                return 0;
            } else if (x1 == 0 && x2 > 0) {
                ng1 = sqrt(x2);
                ng2 = -sqrt(x2);
                double ng[2] = {ng1, ng2};
                sort(ng, ng+2);
                cout << "{" << ng[0] << ", " << ng[1] << ", " << 0.0 << "}";
                return 0;
            } else if (x1 > 0 && x2 < 0) {
                ng1 = sqrt(x1);
                ng2 = -sqrt(x1);
                double ng[2] = {ng1, ng2};
                sort(ng, ng+2);
                cout << "{" << (ng1+ng2-ng[1]) << ", " << ng[1] << "}";
                return 0;
            } else if (x1 < 0 && x2 > 0) {
                ng1 = sqrt(x2);
                ng2 = -sqrt(x2);
                double ng[2] = {ng1, ng2};
                sort(ng, ng+2);
                cout << "{" << (ng1+ng2-ng[1]) << ", " << ng[1] << "}";
                return 0;
            } else {
                ng1 = sqrt(x1);
                ng2 = -sqrt(x1);
                ng3 = sqrt(x2);
                ng4 = -sqrt(x2);
                double ng[4] = {ng1, ng2, ng3, ng4};
                sort(ng, ng+4);
                cout << "{" << ng[0] << ", " << ng[1] << ", " << ng[2] << ", " << ng[3] << "}";
                return 0;
            }
        }
    }
}