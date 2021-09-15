#include <iostream>
#include <ctype.h>
#include <stdlib.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    float celciusL=0,celciusH=0, faranheitL=0,faranheitH=0, temp=0,faranheit=100;
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
                    if (celciusL > celciusH)
                    {
                        temp = celciusH;
                        celciusH = celciusL;
                        celciusL = temp;
                    }
                    if ((celciusH - celciusL) >= 20)
                    {
                        cout << "\nThe LOW to HIGH temp range was too wide\n"
                             <<"\nTry again, range can only be within 20 deg\n";
                        cf = "c";
                        continue;
                    }
                    cout << "\n________________________________";
                    cout << "\ncelcius  _____________ faranheit\n";
                    faranheit = (celciusL*9/5) + 32;
                    cout << endl<<setw(7)<<fixed<<setprecision(2)
                         << celciusL << "  _____________ ";
                    cout << setw(9)<<fixed<<setprecision(2)<<faranheit
                         << endl;

                    for (float i = floor(celciusL)+1; i < celciusH; i++)
                    {
                        cout << setw(7)<<fixed<<setprecision(2)
                             << i<<" |_____________|" <<setw(9)
                             <<(i*9/5) + 32 << endl;
                    }
                    faranheit = (celciusH*9/5) + 32;
                    cout << setw(7)<<fixed<<setprecision(2)
                         << celciusH << "  _____________ ";
                    cout << setw(9)<<fixed<<setprecision(2)<<faranheit
                         << endl<<endl;
                    break;
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
