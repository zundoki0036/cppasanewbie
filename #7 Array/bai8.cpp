#include <iostream>
using namespace std;

void DanhDauKhoBau(int arr[][500], int m, int n);

int main(){
    int m, n; cin >> m >> n;
    int arr[500][500];

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    }
    DanhDauKhoBau(arr, m, n);

    return 0;
}

void DanhDauKhoBau(int arr[][500], int m, int n) {
    for (int i = 0; i < m; i++){
        int ho=0;
        for (int j = 0; j < n; j++){
            if (i > 0 && i < m - 1 && j > 0 && j < n - 1) {
                if ((arr[i][j] > arr[i-1][j]) && (arr[i][j] > arr[i+1][j]) && (arr[i][j] > arr[i][j+1]) && (arr[i][j] > arr[i][j-1])) {
                    ho = 1;
                }
            }
            if (ho) {
                ho = 0;
                cout << "X ";
            }
            else cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
