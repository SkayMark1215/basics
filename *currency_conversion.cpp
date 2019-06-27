#include <iostream>
using namespace std;

int main() {
    constexpr double yen {111.7};
    constexpr double eur {0.89};
    constexpr double pound {0.77};
    cout << "Please, enter length followed by a unit (yen, euro, pound) separated by space." << endl
         << "For example: 5 yen" << endl;
    double length {1};
    string unit {"???"};
    cin >> length >> unit;
    if (unit == "yen" || unit == "Yen")
        cout << "In " << length << " yen " << length / yen << " dollars." << endl;
    else
    {
        if ((unit == "euros" && length == 1) || (unit == "Euros" && length == 1) || (unit == "euro" && length == 1) || (unit == "euros" && length == 1))
                cout << "In " << length << " euro " << length / eur << " dollars." << endl;
        else 
        {    
            if (unit == "euros" || unit == "Euros" || unit == "euro" || unit == "euros")
                cout << "In " << length << " euros " << length / eur << " dollars." << endl;
            else
            {
                if ((unit == "pounds" && length == 1) || (unit == "Pounds" && length == 1) || (unit == "pound" && length == 1) || (unit == "pounds" && length == 1))
                        cout << "In " << length << " pound " << length / pound << " dollars." << endl;
                else
                {
                    if (unit == "pounds" || unit == "Pounds" || unit == "pound" || unit == "pounds")
                        cout << "In " << length << " pounds " << length / pound << " dollars." << endl;
                    else
                        cout << "Sorry, but this currency is not supported";
                }
            }
        }
    }            
   
    system("pause");
    return 0;
}

