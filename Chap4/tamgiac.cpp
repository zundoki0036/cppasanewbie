#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double a,b,c,mx,tong,vuong1,vuong2,s,p;
    cin >> a >> b >> c;
    mx = max (max(a,b),c);
    tong = (a+b+c) - mx;
    
    if ((mx >= tong) || (a<=0) || (b<=0) || (c<=0)) {
        cout << "Khong phai tam giac" << endl;
        return 0;
    } else if ((a==b) && (b==c) && (a==c)) {
        s = (a*a*sqrt(3))/4;
        cout << "Tam giac deu, dien tich = " << fixed << setprecision(2) << s << endl;
        return 0;
    } else if ((a==b) || (b==c) || (a==c)) {
        if ((a==b)) s=(c/4)*sqrt(4*a*a - c*c);
        if ((a==c)) s=(b/4)*sqrt(4*a*a - b*b);
        if ((b==c)) s=(a/4)*sqrt(4*b*b - a*a);
        cout << "Tam giac can, dien tich = " << fixed << setprecision(2) << s << endl;
        return 0;
    } else {
        if ((mx==a)) {vuong1=b; vuong2=c;}
        if ((mx==b)) {vuong1=a; vuong2=c;}
        if ((mx==c)) {vuong1=a; vuong2=b;}
        if (mx*mx == vuong1*vuong1 + vuong2*vuong2) {
            s = (vuong1*vuong2)/2;
            cout << "Tam giac vuong, dien tich = " << fixed << setprecision(2) << s << endl;
            return 0;
        } else {
            p = (vuong1 + vuong2 + mx) / 2;
            s = sqrt(p*(p - vuong1)*(p - vuong2)*(p - mx));
            cout << "Tam giac thuong, dien tich = " << fixed << setprecision(2) << s << endl;
            return 0;
        }
    }
}