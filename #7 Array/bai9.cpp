#include <iostream>
using namespace std;

void play(int* arr, int n);

int main(){
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    play(arr, n);

    return 0;
}


void play(int* arr, int n) {
    int count = 0;
    if ((arr[0] == 1) || (arr[n-1] == 1)) count = -1;
    else for (int i = 2; i < n; i+=2) {
        if (arr[i] == 1) {
            if (arr[i-1] == 1 || arr[i+1] == 1) {
                count = -1;
                break;
            } else {
                count+=1;
                i--;
            }
        } else {
            if ((arr[n-1] == arr[i]) && ((n-i) == 2)) count+=2;
            else count+=1;
        }
    }

    cout << count;
}
