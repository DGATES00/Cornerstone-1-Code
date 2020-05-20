//
// Created by Dylan Gates on 9/27/2018.
//

// This program performs currency conversion from dollars to
// E => euros
// P => pesos
// S => pounds sterling

#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
    double dollars, equivalentCurr;             // variables for dollar amount and equivalent value
    char currencyCode;                          // variable for selecting currency
    const double
            ECONVERSION{0.86},                    // conversion rate for euros
            PCONVERSION{18.71},                   // conversion rate for pesos
            CCONVERSION{1.29},                    // conversion rate for cannadian dollars
            YCONVERSION{113.56},                  // conversion rate for japanese yen
            SCONVERSION{0.77};                    // conversion rate for pounds sterling

    cout << "enter dollar amount" << endl;      // Prompt user for dollar value
    cin >> dollars;                             // Save the user input to dollars
    cout << "enter currency code: \n"           // Prompt user for currency input
         << "E => Euros \n"
            "P => Mexican Pesos \n"
            "C => Canadian Dollars \n"
            "Y => Japanese Yen \n"
            "S => British Pounds Sterling \n" ;
    cin >> currencyCode;                                // Save the user input for which currency

    if(currencyCode == 'E')                                         // if the letter "E" is typed....
    { the letter 'C' is typed....
        cout << "converting dollars to euros.. \n";
    equivalentCurr = dollars * ECONVERSION;                     // Calculation to make if euros selected
}

else if(currencyCode == 'M')                                    // if the letter "M" is typed....
{
cout << "converting dollars to pesos.. \n";
equivalentCurr = dollars * PCONVERSION;                     // Calculation to make if pesos selected
}

else if(currencyCode == 'C')                                    // if
    {
        cout << "converting dollars to canadian dollars.. \n";
        equivalentCurr = dollars * CCONVERSION;                     // Calculation to make if canadian dollars selected
    }

    else if(currencyCode == 'Y')                                    // if the letter 'Y' is typed....
    {

        cout << "converting dollars to japanese yen.. \n";
        equivalentCurr = dollars * YCONVERSION;                     // Calculation to make if japanese yen selected
    }

    else if(currencyCode == 'B')                                    // if the letter 'B' is typed....
    {
        cout << "converting dollars to british pounds sterling.. \n";
        equivalentCurr = dollars * SCONVERSION;                     // Calculation to make if pounds selected
    }
    else                                                            // if an invalid input is typed...
    {
        cout << currencyCode << "not supported at this time \n";
        equivalentCurr = dollars;                                   // Calculation to make if invalid input selected
    }

    cout << "Equivalent amount: " << equivalentCurr << endl;        // Print the result

    return 0;
}
