#include <iostream>
using namespace std;

int main() {
    int n,x,y;
    cin >> n;
    double a[n],z;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> x >> y >> z;

    int k = 0;
    double s = a[0];
    int tong = x;
    int current = 1;
    for (int i = 1; i < n; i++) {
        while (true) {
            if ((a[i]-s) > z) { // Lấy thời gian hiện tại trừ thời gian gai cũ nhất
                current--;      // Nếu > z (hết hạn) -> Giảm số lượng gai
                s = a[k+1];     // Cập nhật mốc thời gian của cái gai cũ tiếp theo
                k++;            // tăng k lên
            } else break;       // Nếu cái cũ nhất chưa hết hạn -> Dừng kiểm tra
        }

        tong += x + y*current; // tong = tong trước đó + (x + y * số gai đang có)
        current++;             // Sau khi tính xong, đòn này để lại thêm 1 gai mới
    }

    cout << tong;
    return 0;
}
