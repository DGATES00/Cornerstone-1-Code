
// Created by gates on 9/28/2018.
//


// This program calculates heat index from
// temperature
// relative humidity

#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
    double rH, temp, heatIndex1, heatIndex2, result;            // variables for relative humidity and temperature


    cout << "e\n"
            "    if(rH <= 100 && rH >= 0)\n"
            "    {\n"
            "        if (temp < 80)                                          // if the temperature is less than 80 degrees\n"
            "        {enter relative humidity" << endl;                  // Prompt user for relative humidity
    cin >> rH;                                                  // Save the user input to relative humidity


    cout << "enter temperature value" << endl;                  // Prompt user for temperature
    cin >> temp;                                                // Save the user input to temperature

    heatIndex1 = 0.5*(61.0+temp+1.2*(temp-68.0)+0.094*rH);
    heatIndex2 = -42.379 + 2.04901523 * temp + 10.14333127* rH - 0.22475541 * temp * rH - 0.00683783 * pow(temp, 2)   - 0.05481717 * pow(rH, 2)  + 0.00122874 * pow(temp, 2)  * rH + 0.00085282 * temp * pow(rH, 2) - 0.00000199 * pow(temp, 2) * pow(rH, 2);

    result = 0;

            cout << "calculating heat index.. \n";
            result += heatIndex1;                               // Calculation to find the heat index
        }

        else if (temp > 80)                                     // if the temperature is greater than 80 degrees
        {
            cout << "calculating heat index.. \n";
            result += heatIndex2;                               // Calculation to find the heat index
        }

    }

    else                                                    // if an invalid input is typed...
    {
        cout << "not supported at this time \n";            // Calculation to make if invalid input selected
        result = 0;
    }

    cout << "The heat index is...: " << heatIndex1 << endl;     // Print the result
    return 0;
}