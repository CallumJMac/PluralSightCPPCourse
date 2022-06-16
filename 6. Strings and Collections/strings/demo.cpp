#include <iostream>
#include <string>
using std::cout;
using std::cin;

using std::string;

int main(){
    string name;
    cout << "who are you? ";
    cin >> name;
    string greeting = "Hello, " + name;
    if (name == "Callum")
    {
        greeting += ", I know you!";
    }
    cout << greeting << '\n';
    return 0;
}