#include <iostream>
using namespace std;

int main() {
    constexpr double yen = 111.7;
    constexpr double eur = 0.89;
    constexpr double pound = 0.77;
    cout << "Please, enter a lenght followed by a unit (yen, euro, pound) separated by space." << endl
         << "For example: 5 yen" << endl;
    double length = 1;
    string unit {"???"};
    cin >> length >> unit;
    if (unit == "yen"  or unit == "Yen") {
        cout << "In " << length << " yen " << length / yen << " dollars." << endl;
    }
    else
    {
        if ((unit == "euros" and length == 1) or (unit == "Euros" and length == 1) or (unit == "euro" and length == 1) or (unit == "euros" and length == 1)) {
                cout << "In " << length << " euro " << length / eur << " dollars." << endl;
        }
        else 
        {    
            if (unit == "euros" or unit == "Euros" or unit == "euro" or unit == "euros") {
            cout << "In " << length << " euros " << length / eur << " dollars." << endl;
            }
            else
            {
                if ((unit == "pounds" and length == 1) or (unit == "Pounds" and length == 1) or (unit == "pound" and length == 1) or (unit == "pounds" and length == 1)) {
                        cout << "In " << length << " pound " << length / pound << " dollars." << endl;
                }
                else
                {
                    if (unit == "pounds" or unit == "Pounds" or unit == "pound" or unit == "pounds") {
                    cout << "In " << length << " pounds " << length / pound << " dollars." << endl;
                    }
                
                    else
                    {
                    cout << "Sorry, but this currency is not supported";
                    }
                }
            }
        }
    }            
    cin >> length;  //screen freezing

    return 0;
}

