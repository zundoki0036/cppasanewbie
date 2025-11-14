#include <iostream>
using namespace std;

long long well(int a,int b, int n) {
   if ((n <= 0) || (n > 5) || (a <= 0) || (b <= 0) || (a > 2000) || (b > 2000)) return 0;
   if (n == 1) return a*b;
   return ((a+(n-1))*(b+(n-1))) + well(a,b,(n-1));
}

int main (){
    int a,b,n; cin >> a >> b >> n;
	cout << well(a, b, n);
}