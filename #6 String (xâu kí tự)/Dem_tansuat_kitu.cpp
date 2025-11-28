#include <iostream>
#include <string>
using namespace std;

int main(){
	string s = "28tech 28tech aaa";
	int cnt[256] = {0};
	for(int i = 0; i < s.size(); i++){
		cnt[s[i]]++;
	}
	for(int i = 0; i < 256; i++){
		if(cnt[i] != 0){
			cout << (char)i << " xuat hien " << cnt[i] << "lan\n";
		}
	}
}
