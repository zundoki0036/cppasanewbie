#include <iostream>
using namespace std;

int sum_without_remember(int x, int y){
    if (x==0 && y==0) return 0;
    if ((x%10 + y%10) < 10) return (x%10 + y%10) + 10*sum_without_remember((x/10),(y/10));
    return ((x%10 + y%10) - 10) + 10*sum_without_remember((x/10),(y/10));
}

int main (){
    int param1, param2;
    cin >> param1 >> param2;
	cout << sum_without_remember(param1, param2);
}
