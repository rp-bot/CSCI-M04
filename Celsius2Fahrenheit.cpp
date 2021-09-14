#include <iostream>
#include <ctype.h>
#include <stdlib.h>
#include <vector>
using namespace std;

int main()
{
    float celciusL=0,celciusH=0, faranheitL=0,faranheitH=0;
    string cf = "_";
    bool trigger = true;
    while (cf == "_")
    {
        cout << "celcius or faranheit [C/F]: ";
        cin >> cf;

        while (trigger == true)
        {
            if (cf == "c" || cf == "C")
            {
                cout << "\nenter the lowest temp and the highest temp\n";
                cout << "celcius[low]: ";
                cin >> celciusL;
                cout << "celcius[high]: ";
                cin >> celciusH;
                if (celciusL < -89.2 || celciusH < -89.2)
                {
                    cout << "Your temp cannot be lower than -89.2\n";
                    trigger = true;
                }
                else
                {
                    trigger = false;
                    cf = "_";
                    cout << "\n________________________________";
                    cout << "\ncelcius ______________ faranheit";
                    for (; i < 5; i++)

                }
            }
            else if (cf == "f" || cf =="F")
            {
                cout << "faranheit[low]: ";
                cin >> faranheitL;
            }

            else
            {
                cout << "invalid input, try again";
                break;
            }
        }
    }

}
