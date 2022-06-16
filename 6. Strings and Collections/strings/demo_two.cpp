#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

int main()
{
    string name;
    cout << "who are you? ";
    cin >> name;
    string greeting = "Hello, " + name;
    if (name == "Callum")
    {
        greeting += ", I know you!";
    }
    cout << greeting << '\n';

    int l = greeting.length();
    cout << "\"" + greeting + "\" is " << l << " characters long." << '\n';
    string beggining = greeting.substr(greeting.find(" ") + 1);
    cout << beggining << '\n';
    if (beggining == name)
    {
        cout << "expected result." << '\n';
    }

    return 0;
}