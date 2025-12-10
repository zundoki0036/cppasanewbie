#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n,k,p,q,soghe;
    cin >> n >> k >> p >> q;
    soghe = (p - 1) * 2 + q; // tìm số ghế của alice

    int ghetruoc = soghe - k; // khả năng bob gần alice xếp trên
    int ghesau = soghe + k; // khả năng bob gần alice xếp dưới
    int ghebob = -1; // Khởi tạo là -1 (chưa tìm thấy)

    bool valid_truoc = (ghetruoc >= 1); 
    bool valid_sau = (ghesau <= n);
    // nếu ghế trước = 0 (trùng) hoặc ghế sau vượt số ghế của lớp thì out

    if (valid_truoc && valid_sau) {
        int row_truoc = (ghetruoc + 1) / 2; //phân tích theo hàng
        int row_sau   = (ghesau   + 1) / 2;
        int d_truoc = abs(row_truoc - p); 
        int d_sau   = abs(row_sau   - p);

        if (d_truoc <= d_sau) ghebob = ghetruoc;
        else ghebob = ghesau;
    }
    else if (valid_truoc) {
        ghebob = ghetruoc;
    }
    else if (valid_sau) {
        ghebob = ghesau;
    }

    // Kiểm tra kết quả cuối cùng
    if (ghebob == -1) {
        cout << ghebob << endl;
    } else {
        int u = (ghebob + 1) / 2; // đưa số hàng về 
        int v = (ghebob % 2 == 1) ? 1 : 2; //phân tích theo cột bằng phần dư phép chia lấy u
        cout << u << " " << v << endl;
    }
