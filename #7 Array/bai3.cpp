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
