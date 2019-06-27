#include <iostream>
using namespace std;

int main() {
    constexpr double yen {111.7};
    constexpr double eur {0.89};
    constexpr double pound {0.77};
    constexpr double rub {65.36};
    constexpr double yuan {6.72};
    cout << "Please, enter a lenght followed by a unit (y, e, p) separated by a space." << endl
         << "y - yen" << endl
         << "e - euro" << endl
         << "p - pound" << endl
         << "r - rubles" << endl
         << "c - yuan" << endl               //using 'c' (CNY) to prevent errors in swith-statement (similarly cases)
         << "For example: 184 p" << endl;
    double length;
    char unit;
    cin >> length >> unit;
    switch (unit)
    {
        case 'y':
            cout << "In " << length << " yen " << length / yen << " dollars." << endl;
            break;
        case 'e':
            if (length == 1)
                cout << "In " << length << " euro " << length / eur << " dollars." << endl;
            else
                cout << "In " << length << " euros " << length / eur << " dollars." << endl;
            break;    
        case 'p':
            if (length == 1)
                cout << "In " << length << " pound " << length / pound << " dollars." << endl;
            else
                cout << "In " << length << " pounds " << length / pound << " dollars." << endl;   
            break; 
        case 'r':
            if (length == 1)
                cout << "In " << length << " ruble " << length / rub << " dollars." << endl;
            else
                cout << "In " << length << " rubles " << length / rub << " dollars." << endl;  
            break;    
        case 'c':
            cout << "In " << length << " yuan " << length / yuan << " dollars." << endl;
            break;     
        default:
            cout << "Sorry, but this currency is not supported";
            break;
    }

    system("pause");
    return 0;     
} 
