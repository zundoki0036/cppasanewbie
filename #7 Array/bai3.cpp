#include <iostream>
using namespace std;

void solve(int* arr, int n);

int main(){
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    solve(arr, n);

    return 0;
}

void solve(int *arr,int n) {
    int ml = 0;

    for (int i = 0; i < n; i++){
        int count = 0;
        for (int j = 0; j < n; j++){
            if (((arr[i] - arr[j]) == 0) || ((arr[i] - arr[j]) == 1)) count++;
            if (count > ml) ml = count;
        }
    }
    cout << ml;
}

//thuật toán: duyệt 2 phần tử liền kề trong mảng, nếu nó trùng giá trị hoặc kém hơn 1 thì count + 1 lên
//không được vừa đặt > < 1 đơn vị, vì sẽ có lúc bị trùng và nảy sinh trường hợp
// 3 4 2 (mà 4 lệch 2 so với số 2) nên cứ duyệt qua 1 lần là ổn rồi
// sau đó ở mỗi phần tử sẽ có số count nhất định, lưu vào biến toàn hàm main cố định là ml (max length của chuỗi), và dùng nó để so sánh
// chuỗi có nhiều phần tử nhất ở mỗi phần tử vòng lặp chạy qua
