/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
###End banned keyword*/

#include <iostream>
#include <cmath>

int main()
{
    double a,d;
    int n;
    std::cin >> a >> n;
	d = llround(a*n);
    double result = d/n;
    std::cout.precision(10);
    std::cout << result;
    return 0;
}
