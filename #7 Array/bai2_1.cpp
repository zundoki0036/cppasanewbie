#include <iostream>
using namespace std;
#define MX 999999

long long a[MX];

void mang(long long n){
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
        if (i == (n-1)) for (long long j = (n-1); j>=0; j--) {
            cout << a[j] << endl;
        }
    }
}

int main() {
    long long n; cin >> n;
    mang(n);
    return 0;
}

/*THUẬT TOÁN KHÔNG PHẢI VẤN ĐỀ
Ở đây ta rút ra 3 điều
- dùng "\n" đỡ tốn dung lượng hơn endl;
- Mảng xem như 1 con trỏ, vậy nên đặt ngoài main sẽ không bị tràn bộ nhớ,
  và dùng nó được bên trong hàm mà không cần đưa vào (miễn là đưa ngoài main)
- Dòng lệnh tối ưu cho chương trình nên dùng:
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
*/
