#include <iostream>
#include <ctype.h>
#include <vector>
using namespace std;

int main()
{
    float celciusL=0,celciusH=0, faranheitL=0,faranheitH=0;
    string cf = "_";
    while (cf == "_")
    {
        cout << "celcius or faranheit [C/F]: ";
        cin >> cf;
        cout<<celciusL;
        if (cf == "c" || cf == "C")
        {
            cout << "\nenter the lowest temp and the highest temp\n";
            cout << "celcius[low]: ";
            cin >> celciusL;
            cout << "celcius[high]: ";
            cin >> celciusH;
            cout << celciusH << celciusL;
        }
        else if (cf == "f" || cf =="F")
        {
            cout << "faranheit[low]: ";
            cin >> faranheitL;
        }
        else
        {
            cout << "invalid input, try again";
        }
    }

}
