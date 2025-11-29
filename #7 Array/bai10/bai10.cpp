#include <iostream>
using namespace std;

int main(){
    string a[3];
    int check[6]={0,0,0,0,0,0};
    for(int i=0; i<3; i++){
        cin >> a[i];
        if (a[i] == "rẻ") check[0] = 1;
        else if (a[i] == "mắc") check[1] = 1;
        else if (a[i] == "nhanh") check[2] = 1;
        else if (a[i] == "chậm") check[3] = 1;
        else if (a[i] == "tốt") check[4] = 1;
        else if (a[i] == "tệ") check[5] = 1;
    }

    int s=0;
    int k=0;
    for (int i=0; i<5; i+=2){
        s+=check[i];
        k+=check[i+1];
        if ((check[i] == 1 && check[i+1] == 1)||(s==3)){
            cout << "NO"; 
            return 0;
        }
    }

    cout << "YES";
    return 0;
}
