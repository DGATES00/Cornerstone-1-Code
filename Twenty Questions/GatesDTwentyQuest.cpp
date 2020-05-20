//
// Created by gates on 10/16/2018.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Declare and initialize objects
    bool done(false);
    char answer;
    const char YES('Y'), NO('N'), Southern('S'), Northern('N');
    const string nAnswers[] = {"NEW JERSEY", "PENNSYLVANIA", "NEW YORK CITY", "BOSTON"};
    const string sAnswers[] = {"ALABAMA", "NEW MEXICO", "HOUSTON", "OKLAHOMA CITY"};

    // Print greeting to user
    cout << "Hi and welcome to Twenty Questions!!! \n "
         << "I will try to guess it in \n"
         << " in a few questions. \n"
         << "Are you ready to start?(Say Y(yes) or N(no)." << endl;
    cin >> answer;

    switch (toupper(answer)) {
        case YES:
            // Provide the user with the different places to choose from
            cout << "Choose choose a place from the follwing list: \n";
            cout << "ALABAMA, GEORGIA, HOUSTON, MISSISSIPPI, OKLAHOMA CITY, NEW JERSEY, PENNSYLVANIA, \n"
                 << "ROCHESTOR, BOSTON" << endl;

            while (!done) {

                // Ask the user if the place is in the south or in the north
                cout << "Are you thinking of a southern place or of a northern place? \n"
                     << "Type S(Southern) or N(Northern)" << endl;
                cin >> answer;

                switch (toupper(answer)) {

                    //Case switch for places that are in the northern area
                    case Northern:
                        cout << "Is the place your thinking about a city?(Say Y(yes) or N(no)" << endl;
                        cin >> answer;

                        //If the user says yes to the "city" question
                        if (toupper(answer) == YES) {
                            cout << "Does your city have a seaside beach?(Say Y(yes) or N(no)" << endl;
                            cin >> answer;

                            //if the user says yes, print out that the place is New York City
                            if (toupper(answer) == YES) {
                                cout << "You are thinking of " << nAnswers[2] << endl;
                                done = true;
                            }

                                //if the user says no, print out that the place is Boston
                            else {
                                cout << "You are thinking of " << nAnswers[3] << endl;
                                done = true;
                            }
                        }
                            //If the user says no to the "city" question
                        else {
                            cout
                                    << "Is the state famous for having the actress, Snooki, on a tv show?(Say Y(yes) or N(no)"
                                    << endl;
                            cin >> answer;

                            //if the user says yes, print out that the place is New Jersey
                            if (toupper(answer) == YES) {
                                cout << "You are thinking of " << nAnswers[0] << endl;
                                done = true;
                            }
                                //if the user says no, print out that the place is Pennsylvania
                            else {
                                cout << "You are thinking of " << nAnswers[1] << endl;
                                done = true;
                            }
                        }
                        /// case switch for places that are in the southern area
                    case Southern:
                        cout << "Is the place your thinking about is a city?(Say Y(yes) or N(no)" << endl;
                        cin >> answer;

                        //If the user says yes to the "city" question
                        if (toupper(answer) == YES) {
                            cout << "Does your city have a National Football Team?(Say Y(yes) or N(no)" << endl;
                            cin >> answer;

                            //if the user says yes, print out that the place is Houston
                            if (toupper(answer) == YES) {
                                cout << "You are thinking of " << sAnswers[2] << endl;
                                done = true;
                            }

                                //if the user says yes, print out that the place is Oklahoma City
                            else {
                                cout << "You are thinking of " << sAnswers[3] << endl;
                                done = true;
                            }
                        } else {
                            cout << "Is your state closer to Flordia?(Say Y(yes) or N(no)" << endl;
                            cin >> answer;

                            //if the user says yes, print out that the place is Alabama
                            if (toupper(answer) == YES) {
                                cout << "You are thinking of " << sAnswers[0] << endl;
                                done = true;
                            }

                                //if the user says yes, print out that the place is New Mexico
                            else {
                                cout << "You are thinking of " << sAnswers[1] << endl;
                                done = true;
                            }
                        }

                    default:
                        cout << "Don't support " << answer << " as an input." << endl;
                        done = true;
                } // end switch
            } // end while
            break;
        case NO:
            cout << "Ok that's fine. We can do it later then. :(." << endl;
            break;
        default:
            cout << "Don't support " << answer << " as an input.(idiot)" << endl;
    }
    return 0;
}
