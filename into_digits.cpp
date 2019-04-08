#include <iostream>
using namespace std;

int main() {
    cout << "Please, enter one spelled-out number from one to four: ";
    string SOnum {" "};
    cin >> SOnum;
    if (SOnum == "One" or SOnum == "one")
    {
        cout << SOnum << " digitally - 1";
    }
    else
    {
        if (SOnum == "Two" or SOnum == "two")
        {
            cout << SOnum << " digitally - 2";
        }
        else
        {
            if (SOnum == "Three" or SOnum == "three")
            {
                cout << SOnum << " digitally - 3";
            }
            else
            {
                if (SOnum == "Four" or SOnum == "four")
                {
                    cout << SOnum << " digitally - 4";
                }
                else
                {
                    cout << "Please, check the input condition";
                }
            
            }
        
        }
        
    }
    cin >> SOnum;   //screen freezing

    return 0;
}