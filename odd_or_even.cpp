#include <iostream>
using namespace std;

int main() {
    cout << "Please, enter an integer number: ";
    int number {0};
    cin >> number;
    int determinant;
    determinant = number % 2;
    /* cout << determinant << endl; Check the determinant output */
    if (determinant = 0)
    {
        cout << "The number " << number << " is an even number.";
    }
    else
    {
        cout << "The number " << number << " is an odd number.";
    }
    cin >> number;  //screen freezing

    return 0;
}