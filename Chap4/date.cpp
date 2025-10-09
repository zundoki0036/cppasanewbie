#include <iostream>
using namespace std;

int main(){
    int nam,thang,ngay;
    cin >> ngay >> thang >> nam;
    if (nam <=0) {
        cout << "Nam khong hop le." << endl;
        return 0;
    } else {
        if (thang <1 || thang >12) {
            cout << "Thang khong hop le." << endl;
            return 0;
        } else if (thang == 2) {
            if ((nam % 4 == 0 && nam % 100 !=0) || (nam % 400 == 0)){
                if (ngay <1 || ngay > 29) {
                    cout << ngay << "/" << thang << "/" << nam << " la ngay khong hop le." << endl;
                    return 0;
                } else {
                    cout << ngay << "/" << thang << "/" << nam << " la ngay hop le." << endl;
                }
            } else {
                if (ngay <1 || ngay > 28) {
                    cout << ngay << "/" << thang << "/" << nam << " la ngay khong hop le." << endl;
                    return 0;
                } else {
                    cout << ngay << "/" << thang << "/" << nam << " la ngay hop le." << endl;
                    }
            }
        } else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
            if (ngay <1 || ngay > 30) {
                cout << ngay << "/" << thang << "/" << nam << " la ngay khong hop le." << endl;
                return 0;
            } else {
                cout << ngay << "/" << thang << "/" << nam << " la ngay hop le." << endl;
            }
        } else {
            if (ngay <1 || ngay > 31) {
                cout << ngay << "/" << thang << "/" << nam << " la ngay khong hop le." << endl;
                return 0;
            } else {
                cout << ngay << "/" << thang << "/" << nam << " la ngay hop le." << endl;
            }
        }
    }
    return 0;
}