/****************************
*  Program name: celcius2faranheit.cpp
*  Author: ...
*  Date last updated: 09/12/2021
* Purpose: converts the temperature from either celcius or faranheit
****************************/
#include <iostream>
#include <ctype.h>
#include <stdlib.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    float celciusL=0,celciusH=0, faranheitL=0,faranheitH=0, temp=0;
    float FARANHEIT,CELCIUS;
    string cf = "_";
    bool trigger = true;
    while (cf == "_")
    {
        cout << "celcius or faranheit [C/F] or [X] to quit: ";
        cin >> cf;

        while (trigger == true)
        {
            if (cf == "c" || cf == "C")
            {
                cout << "\nenter the lowest temp and the highest temp\n";
                cout << "celcius [low]: ";
                cin >> celciusL;
                cout << "celcius [high]: ";
                cin >> celciusH;
                if (celciusL < -89.2 || celciusH < -89.2)
                {
                    cout << "Your temp cannot be lower than -89.2\n";
                    continue;
                }
                else
                {
                    if (celciusL > celciusH)
                    {
                        temp = celciusH;
                        celciusH = celciusL;
                        celciusL = temp;
                    }
                    if ((celciusH - celciusL) > 20)
                    {
                        cout << "\nThe LOW to HIGH temp range was too wide\n"
                             <<"\nTry again, range can only be within 20 deg\n";
                        cf = "c";
                        continue;
                    }
                    cout << "\n________________________________";
                    cout << "\ncelcius  _____________ faranheit\n";
                    FARANHEIT = (celciusL*9/5) + 32;
                    cout << endl<<setw(7)<<fixed<<setprecision(2)
                         << celciusL << "  _____________ ";
                    cout << setw(9)<<fixed<<setprecision(2)<<FARANHEIT
                         << endl;

                    for (float i = floor(celciusL)+1; i < celciusH; i++)
                    {
                        cout << setw(7)<<fixed<<setprecision(2)
                             << i<<" |_____________|" <<setw(9)
                             <<(i*9/5) + 32 << endl;
                    }
                    FARANHEIT = (celciusH*9/5) + 32;
                    cout << setw(7)<<fixed<<setprecision(2)
                         << celciusH << "  _____________ ";
                    cout << setw(9)<<fixed<<setprecision(2)<<FARANHEIT
                         << endl<<endl;
                    // break;
                    cf = "_";
                    continue;
                }
            }
            else if (cf == "f" || cf =="F")
            {
                cout << "\nenter the lowest temp and the highest temp\n";
                cout << "faranheit [low]: ";
                cin >> faranheitL;
                cout << "faranheit [high]: ";
                cin >> faranheitH;
                if (faranheitL < -135.8 || faranheitH < -135.8)
                {
                    cout << "Your temp cannot be lower than -135.8\n";
                    continue;
                }
                else
                {
                    if (faranheitL > faranheitH)
                    {
                        temp = faranheitH;
                        faranheitH = faranheitL;
                        faranheitL = temp;
                    }
                    if ((faranheitH - faranheitL) > 35)
                    {
                        cout << "\nThe LOW to HIGH temp range was too wide\n"
                             <<"\nTry again, range can only be within 35 deg\n";
                        cf = "f";
                        continue;
                    }
                    cout << "\n________________________________";
                    cout << "\nfaranheit  _____________ celcius\n";
                    CELCIUS = (faranheitL-32) * 5/9;
                    cout << endl<<setw(9)<<fixed<<setprecision(2)
                         << faranheitL << "  _____________ ";
                    cout << setw(7)<<fixed<<setprecision(2)<<CELCIUS
                         << endl;

                    for (float i = floor(faranheitL)+1; i < faranheitH; i+=2)
                    {
                        cout << setw(9)<<fixed<<setprecision(2)
                             << i<<" |_____________|" <<setw(7)
                             <<(i-32) * 5/9 << endl;
                    }
                    CELCIUS = (faranheitH-32) * 5/9;
                    cout << setw(9)<<fixed<<setprecision(2)
                         << faranheitH << "  _____________ ";
                    cout << setw(7)<<fixed<<setprecision(2)<<CELCIUS
                         << endl<<endl;
                    // break;
                    cf = "_";
                    continue;
                }
            }
            else if (cf == "_")
            {
                break;
            }
            else if (cf == "x" || cf =="X")
            {
                trigger = false;
                cf = ".";
                cout << "\nthank you, bye!";
                return 0;
                break;
            }
            else
            {
                cout << "invalid input, try again";
                break;
            }
        }
    }
}
