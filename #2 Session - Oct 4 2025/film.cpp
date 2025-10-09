# include <iostream>
# include <iomanip>
using namespace std;

int main() {
    int gio1,phut1,giay1,gio2,phut2,giay2;
    cin >> gio1 >> phut1 >> giay1;
    cin >> gio2 >> phut2 >> giay2;
    float total = gio1*3600 + phut1*60 + giay1;
    float est = gio2*3600 + phut2*60 + giay2;
    if (total >= est) {
        cout << fixed << setprecision(0) << est/total*100;
    } else {
        cout << fixed << setprecision(0) << total/est*100;
    }
}