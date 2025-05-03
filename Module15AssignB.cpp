#include <iostream>
#include <cmath>
using namespace std;

//gneeric function for float/double
template <class templ>
templ half(templ value) {
    return value / 2;
}

//specialized function for integer (found help at https://www.geeksforgeeks.org/template-specialization-c/#)
template<>
int half<int>(int value) {
    return static_cast<int>(round(static_cast<float>(value) / 2));
}

int main()
{
    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;

    return 0;
}
