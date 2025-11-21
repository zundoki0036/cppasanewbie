#include <iostream>

int main(){
    int thang, nam; 
    std::cin >> thang >> nam;
    int lanamnhuan = (thang == 2) && ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0));
    int a[12] = {31,28,31,30,31,30,31,31,30,31,30,11};
    std::cout << a[thang - 1] + lanamnhuan;
    return 0;
}

/*giải thích
tạo mảng xuất ngày theo tháng, này quá dễ
*Lại để ý: năm nhuận là năm có 29 ngày ở tháng 2
            năm thường tháng 2 có 28 ngày
            => chỉ cần xuất ra + 1 ở dòng cout hoặc +0
            Muốn 1 hoặc 0 chỉ cần tạo 1 giá trị báo hiệu năm nhuận là đủ
*/