#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Declare and initialize objects
    int high(20), low(1), guess, count(1), ceiling(5);
    bool done(false);
    char answer;
    const char YES('Y'), NO('N');

    // Print greeting to user
    cout << "Think of a number between " << low << " and " << high
         << " and I will try to guess it in \n" << ceiling
         << " or fewer tries. Just answer Y(yes) or N(no) to my questions. \n"
         << "Are you thinking of a number? " << endl;
    cin >> answer;
    switch(toupper(answer))
    {
        case YES:
            // While number has not been guessed
            while(!done && high >= low)
            {
                guess = (high + low) / 2;
                cout << "Are you thinking of " << guess << '?' << endl;
                cin >> answer;
                switch (toupper(answer)) {
                    case YES:
                        cout << "I guessed it in " << count << " tries." << endl;
                        done = true;
                        break;
                    case NO:
                        // Must guess again.
                        ++count;
                        if (count >= ceiling)
                        {
                            cout << "I didn't guess it in time. Good pick." << endl;
                            done = true;
                        }

                        else
                        {
                            cout << "Is your number smaller than " << guess << "?" <<  endl;
                            cin >> answer;
                            if (toupper(answer) == YES) high = guess - 1;

                            else
                            {
                                low = guess + 1;

                                // if the computer reaches it 4th try
                                if(count == 4)
                                {
                                    cout << "Is your number 2 numbers greater than " << guess << "?" <<  endl;
                                    cin >> answer;
                                    if (toupper(answer) == YES)
                                    {
                                        low = guess + 2;
                                    }
                                    else
                                    {
                                        low = guess + 1;
                                    }
                                }
                            }

                        }
                        break; // case NO
                    default:
                        cout << "Don't support " << answer << " as an input." << endl;
                        done = true;
                } // end switch
            } // end while
            break;
        case NO:
            cout << "Clear your mind is. At peace you are." << endl;
            break;
        default:
            cout << "Don't support " << answer << " as an input." << endl;
    }
    return 0;
}
