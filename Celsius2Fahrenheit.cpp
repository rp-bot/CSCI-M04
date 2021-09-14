#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    float celcius = 0;
    float faranheit = 0;
    char cf = "";

    while (cf=="")
    {
        cout << "celcius or faranheit [C/F]: \n";
        cin >> tolower(cf);
        if (cf != "c" || cf != "f")
        {
            cout << "invalid input, try again";
        }
    }

}
