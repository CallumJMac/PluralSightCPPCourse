#include <iostream>
using std::cout;
using std::cin;
//guess my number
/*
hardcode the answer
int answer = 7;
you ask the user for a guess, compare to secret answer, tell the user if it's higher or lower
keep going until they can figure out the secret number
*/

int main()
{
    int guessNumber;
    int secretNumber = 420;
    bool keepgoing = true;
    int answer;
    while(keepgoing)
    {
        cout << "Guess what the secret number is: ";
        cin >> guessNumber;
        cout << "You entered " << guessNumber << '\n';

        if (guessNumber < secretNumber)
        {
            cout << "The estimated number, " << guessNumber << ", is less than the secret number. Guess again!" << '\n';        
        }
        if (guessNumber == secretNumber)
        {
            cout << "The estimated number, " << guessNumber << ", is equal to the secret number. WELL DONE CLEVER CLOGS!" << '\n';        
        }
        if (guessNumber > secretNumber)
        {
            cout << "The estimated number, " << guessNumber << ", is greater than the secret number. Guess again!" << '\n';         
        }
        //random loop to test the syntax
        /*
        for (int loop =0; loop < 10; loop++)
        {
            cout << loop << " ";
        }
        */
        cout << "Would you like to try again? 0 means no, any other number means yes: ";
        cin >> answer;
        if (answer ==0)
        {
            keepgoing = false;
        }
    }
}