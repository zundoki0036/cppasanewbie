#include <iostream>
using namespace std;

int main(){
	float a,b,x;
	cin >> a >> b;
	if ((a==0) && (b==0)){
		cout << "ℝ" << endl;
	} else if ((a==0) && (b!=0)) {
		cout << "Ø" << endl;
	} else {
		x = -b/a;
		cout << "{" << x << "}" << endl;
	}
	return 0;
}