#include <iostream>
using std::cout;
using std::cin;

int main()
{
    int answer = 3;
    int guess;
    bool notguessed = true;
    while(notguessed)
    {
        cout << "Guess my number: ";
        cin >> guess;
        if (guess == answer)
        {
            cout << "YES!" << '\n';
            notguessed = false;
        }
        if (guess < answer)
        {
            cout << "Too low... Guess again!" << '\n';
        }
        if (guess > answer)
        {
            cout << "Too high... Guess again!" << '\n';
        }
    }
    return 0;
}

// this solution better utilises a while loop than my solution
// also, better ux as we don't have to ask the user if they want to guess again every time :)
// my program did work though (y)