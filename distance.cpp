/****************************
*  Program name: distance.cpp
*  Author: ...
*  Date last updated: 09/12/2021
* Purpose: Calculates the distance based on the speed and time taken
****************************/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float mph = 0;
    float time = 0;
    float distance;

    while (mph<15)
    {
        cout << "What is the speed of the vehicle in mph? ";
        cin >> mph;
        if (mph<15)
        {
            cout << "\n\nThe speed has to be a minimum 15 mph\n\n";
        }
    }

    cout << "The speed was: " << mph << " MPH\n";


    while (time <= 0)
    {
        cout << "\nHow many hours has it traveled? ";
        cin >> time;
        if (time<=0)
        {
            cout << "\n\nTime cannot be 0 or negative";
        }
    }

    cout << "The time was: " << time << " Hours\n";

    int i = 1;
    cout << "\n___________________________\n\n";
    cout << "Hour:______________Distance\n";
    while (i <= time)
    {
        cout << "\nHour: " <<setw(3)<< i << setw(12)<< mph*i <<" Miles";
        i++;
    }


}
