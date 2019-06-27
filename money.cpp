#include <iostream>
using namespace std;

int main() {
    double pennie, nickel, dime, quarter, Hdollar, dollar;
    cout << "Please, enter the number of pennies: ";
    cin >> pennie;
    cout << "Please, enter the number of nickels: ";
    cin >> nickel;
    cout << "Please, enter the number of dimes: ";
    cin >> dime;
    cout << "Please, enter the number of quarters: ";
    cin >> quarter;
    cout << "Please, enter the number of half dollars: ";
    cin >> Hdollar;
    cout << "Please, enter the number of dollars: ";
    cin >> dollar;
    double sum;
    sum = dollar * 100 + Hdollar * 50 + quarter * 25 + dime * 10 + nickel * 5 + pennie;
    if (pennie == 1) 
        cout << "You have " << pennie << " pennie." << endl;
    else
        cout << "You have " << pennie << " pennies." << endl;
    if (nickel == 1) 
        cout << "You have " << nickel << " nickel." << endl;
    else
        cout << "You have " << nickel << " nickels." << endl;
    if (dime == 1) 
        cout << "You have " << dime << " dime." << endl;
    else
        cout << "You have " << dime << " dimes." << endl;
    if (quarter == 1) 
        cout << "You have " << quarter << " quarter." << endl;
    else
        cout << "You have " << quarter << " quarters." << endl;
    if (Hdollar == 1) 
        cout << "You have " << Hdollar << " half dollar." << endl;
    else
        cout << "You have " << Hdollar << " half dollars." << endl;
    if (dollar == 1) 
        cout << "You have " << dollar << " dollar." << endl;
    else
        cout << "You have " << dollar << " dollars." << endl;
    double dollarsum;
    dollarsum = sum / 100;
    cout << "The value of all of your coins is " << sum << " cents." << " And " << dollarsum << " in dollars.";
   
    system("pause");
    return 0;
}
