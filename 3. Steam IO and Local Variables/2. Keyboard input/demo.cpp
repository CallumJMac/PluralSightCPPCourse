#include <iostream>
using std::cout;
using std::cin;


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

    i = 4.9; 
    j = 9/5; 
    cout << i << " " << j << '\n';

    float f = 4.9;
    cout << f << '\n';

    cout << "Enter a number: ";
    cin >> i;
    cout << '\n' << i*2 << '\n';
}