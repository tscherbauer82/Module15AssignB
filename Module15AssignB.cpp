#include <iostream>
#include <cmath>
using namespace std;

//function for float/double
template <class templ>
templ half(templ value) {
    return value / 2;
}

//function for integer

int main()
{
    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;
}
