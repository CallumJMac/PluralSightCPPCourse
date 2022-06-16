#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

/*
Write a program that asks the user for two words and tells them which is longer
Hint-use guess my number solution
Rather than comparing numbers, compare the lenght of each string.
SINGLE WORD ONLY, NOT A PHRASE YET
*/

int main()
{
    string phrase_one;
    string phrase_two;
    int length_1;
    int length_2;
    // bool notguessed = true;
    // while(notguessed)
    {
        cout << "Enter a phrase: ";
        // cin >> phrase_one;
        getline(cin, phrase_one);
        int length_1 = phrase_one.length();
        

        cout << "Enter another phrase: ";
        // cin >> phrase_two;
        getline(cin, phrase_two);
        int length_2 = phrase_two.length();

        if (length_1 == length_2)
        {
            cout << "The two phrases are the same length." << '\n';
            // notguessed = false;
        }
        if (length_1 < length_2)
        {
            cout << "The first string is shorter than the second." << '\n';
        }
        if (length_1 > length_2)
        {
            cout << "The first string is longer than the second." << '\n';
        }
    }
    return 0;
}