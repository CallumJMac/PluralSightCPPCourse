#include <iostream>
using std::cout; //setting the default namespace to std

int main()
{
    cout << 34 << '\n';
    cout << "Hello" << '\n';
    //Im just trying stuff here

    cout << '\n' << '\n';
    int i = 2 + 2;
    cout << i << '\n';
    i = i * 3;
    cout << i << '\n';

    int j = 2;
    cout << j << '\n';

    i = 4.3; //loss of data as not declared as int
    j = 7/2; //loss of data but no warning
    cout << i << " " << j << '\n';
}