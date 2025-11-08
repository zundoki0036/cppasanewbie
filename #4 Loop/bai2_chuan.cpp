#include <iostream>
using namespace std;

//Credit: anh gem gen ra
int main () {
    int candles, makenew;
    cin >> candles >> makenew;

    int total_candles_burnt = candles; // Ban đầu đốt 'candles' cây
    int total_scraps = candles;     // Và có 'candles' sáp thừa

    while (total_scraps >= makenew) {
        int new_candles = total_scraps / makenew;
        int leftover_scraps = total_scraps % makenew;
        total_candles_burnt += new_candles;
        total_scraps = new_candles + leftover_scraps;
    }

    cout << total_candles_burnt;
    return 0;
}


/* Giải thích quy luật:
total_candles_burnt = 15, total_scraps = 15.
Vòng 1: (15 >= 4)
new_candles = 15 / 4 = 3
leftover_scraps = 15 % 4 = 3
total_candles_burnt = 15 + 3 = 18
total_scraps = 3 (new) + 3 (leftover) = 6

Vòng 2: (6 >= 4)
new_candles = 6 / 4 = 1
leftover_scraps = 6 % 4 = 2
total_candles_burnt = 18 + 1 = 19
total_scraps = 1 (new) + 2 (leftover) = 3

Vòng 3: (3 >= 4 là Sai)
Dừng vòng lặp. In kết quả total_candles_burnt là 19.
*/