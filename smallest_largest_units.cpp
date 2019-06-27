/*
*
*
*   Structured programming demonstration
*
*
*/
#include <iostream>
using namespace std;

int main()
{
    cout << "Please, enter one positive integer number followed by a unit" << endl
         << "Available units: cm, m, in, ft." << endl;
    string unit;
    double integer = 0;
    double conversion_integer = 0;
    double smallest = 0;
    double largest = 0;
    double first_largest = 0;
    cin >> first_largest >> unit;   //definition of a largest number (first number is a priori largest)
    if ((unit == "cm" or unit == "in" or unit == "ft" or unit == "m") and first_largest > 0)
    {
        if (unit == "cm")
            {
                conversion_integer = first_largest;
                integer = conversion_integer / 100;
                first_largest = integer;
                cout << conversion_integer << " " << unit << " the largest number so far" << endl;
                
            }
            if (unit == "in")
            {
                conversion_integer = first_largest;
                integer = conversion_integer / 39.37;
                first_largest = integer;
                cout << conversion_integer << " " << unit << " the largest number so far" << endl;
                
            }
            if (unit == "ft")
            {
                conversion_integer = first_largest;
                integer = conversion_integer / 3.28;
                first_largest = integer;
                cout << conversion_integer << " " << unit << " the largest number so far" << endl;
                
            }
            if (unit == "m")
            {
                cout << first_largest << " " << unit << " the largest number so far" << endl;
            }
    }
    else
        cout << "Please check the input conditions." << endl;
    cin >> integer >> unit; //definition of a smallest number >> cycle that reveals the smallest (necessary to find smallest)
    for (int i = 0; i == 0;)
    {
        if ((unit == "cm" or unit == "in" or unit == "ft" or unit == "m") and integer > 0) //checking the correctness of the unit
        { 
            if (unit == "cm")
            {
                conversion_integer = integer;
                integer = conversion_integer / 100;
                if (integer < first_largest)
                {
                    cout << conversion_integer << " " << unit << " the smallest number so far" << endl;
                    smallest = integer;
                    i = 1;
                }
                if (integer >= first_largest)
                {
                    cout << conversion_integer << " " << unit << " the largest number so far" << endl;
                    first_largest = integer;
                    largest = integer;
                }
            }
            if (unit == "in")
            {
                conversion_integer = integer;
                integer = conversion_integer / 39.37;
                if (integer < first_largest)
                {
                    cout << conversion_integer << " " << unit << " the smallest number so far" << endl;
                    smallest = integer;
                    i = 1;
                }
                if (integer >= largest)
                {
                    cout << conversion_integer << " " << unit << " the largest number so far" << endl;
                    first_largest = integer;
                    largest = integer;
                }
            }
            if (unit == "ft")
            {
                conversion_integer = integer;
                integer = conversion_integer / 3.28;
                if (integer < first_largest)
                {
                    cout << conversion_integer << " " << unit << " the smallest number so far" << endl;
                    smallest = integer;
                    i = 1;
                }
                if (integer >= first_largest)
                {
                    cout << conversion_integer << " " << unit << " the largest number so far" << endl;
                    first_largest = integer;
                    largest = integer;
                }
            }
            if (unit == "m")
            {
                if (integer < first_largest)
                {
                    cout << integer << " " << unit << " the smallest number so far" << endl;
                    smallest = integer;
                    i = 1;
                }
                if (integer >= first_largest)
                {
                    cout << integer << " " << unit << " the largest number so far" << endl;
                    first_largest = integer;
                    largest = integer;
                }
            }
        }
        else
            cout << "Please check the input conditions." << endl;
        cin >> integer >> unit;
    }
    if ((unit == "cm" or unit == "in" or unit == "ft" or unit == "m") and integer > 0)
    { //check the last value of cin of a cycle
        if (unit == "cm")
        {
            conversion_integer = integer;
            integer = conversion_integer / 100;
            if (integer >= largest)
            {
                cout << conversion_integer << " " << unit << " the largest number so far" << endl;
                largest = integer;
            }
            if (integer <= smallest)
            {
                cout << conversion_integer << " " << unit << " the smallest number so far" << endl;
                smallest = integer;
            }
        }
        if (unit == "in")
        {
            conversion_integer = integer;
            integer = conversion_integer / 39.37;
            if (integer >= largest)
            {
                cout << conversion_integer << " " << unit << " the largest number so far" << endl;
                largest = integer;
            }
            if (integer <= smallest)
            {
                cout << conversion_integer << " " << unit << " the smallest number so far" << endl;
                smallest = integer;
            }
        }
        if (unit == "ft")
        {
            conversion_integer = integer;
            integer = conversion_integer / 3.28;
            if (integer >= largest)
            {
                cout << conversion_integer << " " << unit << " the largest number so far" << endl;
                largest = integer;
            }
            if (integer <= smallest)
            {
                cout << conversion_integer << " " << unit << " the smallest number so far" << endl;
                smallest = integer;
            }
        }
        if (unit == "m")
        {
            if (integer >= largest)
            {
                cout << integer << " " << unit << " the largest number so far" << endl;
                largest = integer;
            }
            if (integer <= smallest)
            {
                cout << integer << " " << unit << " the smallest number so far" << endl;
                smallest = integer;
            }
        }
    }
    else
        cout << "Please check the input conditions." << endl;
    while (cin)
    {
        cin >> integer >> unit;
        if ((unit == "cm" or unit == "in" or unit == "ft" or unit == "m") and integer > 0)
        {
            if (unit == "cm")
            {
                conversion_integer = integer;
                integer = conversion_integer / 100;
                if (integer >= largest)
                {
                    cout << conversion_integer << " " << unit << " the largest number so far" << endl;
                    largest = integer;
                }
                if (integer <= smallest)
                {
                    cout << conversion_integer << " " << unit << " the smallest number so far" << endl;
                    smallest = integer;
                }
            }
            if (unit == "in")
            {
                conversion_integer = integer;
                integer = conversion_integer / 39.37;
                if (integer >= largest)
                {
                    cout << conversion_integer << " " << unit << " the largest number so far" << endl;
                    largest = integer;
                }
                if (integer <= smallest)
                {
                    cout << conversion_integer << " " << unit << " the smallest number so far" << endl;
                    smallest = integer;
                }
            }
            if (unit == "ft")
            {
                conversion_integer = integer;
                integer = conversion_integer / 3.28;
                if (integer >= largest)
                {
                    cout << conversion_integer << " " << unit << " the largest number so far" << endl;
                    largest = integer;
                }
                if (integer <= smallest)
                {
                    cout << conversion_integer << " " << unit << " the smallest number so far" << endl;
                    smallest = integer;
                }
            }
            if (unit == "m")
            {
                if (integer >= largest)
                {
                    cout << integer << " " << unit << " the largest number so far" << endl;
                    largest = integer;
                }
                if (integer <= smallest)
                {
                    cout << integer << " " << unit << " the smallest number so far" << endl;
                    smallest = integer;
                }
            }
        }
        else
            cout << "Please check the input conitions." << endl;
    }

    system("pause");
    return 0;
}
