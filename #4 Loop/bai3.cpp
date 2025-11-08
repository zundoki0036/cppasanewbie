#include <iostream>
using namespace std;

/// Chống tràn số: thay vì kiểm tra luythua*i > n thì lthua > n/i thì dừng vòng lặp là được
/// Duyệt số: chỉ cần từ i^2 <= n là đủ (để ý bình phương cơ số lớn nhất luôn ra n)
/// Mẹo giúp việc duyệt số lớn tốt hơn ios::sync_with_stdio(false); cin.tie(nullptr);

int ispow(long long n){
    if (n == 1) return 1;
    else for (long long i = 2; i*i <= n; i++) {
        long long luythua = i;
        while (luythua <= n/i) {
            luythua *= i;
            if (luythua == n) return 1;
        }
    }
    return 0;
}

int main() {
    long long n;
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    while (true) {
        cin >> n;
        if (!n) break;
        else cout << ispow(n) << endl;
    }
    return 0;
}
