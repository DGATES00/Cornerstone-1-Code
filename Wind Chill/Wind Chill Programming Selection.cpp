//
// Created by gates on 9/30/2018.
//


// This program calculates heat index from
// wind speed
// air temperature

#include <stdlib.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double wChill, temp, wSpeed, result;                                                // variables for temperature, wind chill, and wind speed


    cout << "enter air temperature value" << endl;                                      // Prompt user for air temperature
    cin >> temp;                                                                        // Save the user input to air temperature

    cout << "enter wind speed" << endl;                                                 // Prompt user for wind speed
    cin >> wSpeed;                                                                      // Save the user input to wind speed

    result = 0;                                                                         // Set result value to zero

    wChill = 35.74+0.6215*temp-35.75* pow(wSpeed,0.16)+0.4275*temp* pow(wSpeed,0.16);


    if (wChill >= -19)                                                                  // if the air temperature is less than -19 degrees
    {
        cout << "Frostbite not a concern for 30 minutes or less exposure... \n";
        result = wChill;                                                                // Calculation to find the wind chill
    }

    else if (wChill < -19 && wChill >= -48)                                             // if the temperature is less than -19 degrees but greater then -48 degrees
    {
        cout << "Frostbite is likely to occur in 30 minutes or less.”.. \n";
        result = wChill;                                                                // Calculation to find the wind chill
    }

    else if (wChill < -48)                                                              // if the temperature is less than -48 degrees
    {
        cout << "Frostbite is likely to occur in 5 minutes or less.”.. \n";
        result = wChill;                                                                // Calculation to find the wind chill
    }

    else                                                                                // if an invalid input is typed...
    {
        cout << "not supported at this time \n";                                        // Calculation to make if invalid input selected
        result = 0;
    }
    cout << "The wind chill(Twc) is...: " << result << endl;                            // Print the result
    return 0;
}