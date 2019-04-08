#include <iostream>
using namespace std;

int main() {
    cout << "Please, enter two floating-point values: ";
    double val1 {0};
    double val2 {0};
    cin >> val1 >> val2;
    if (val1 > val2)
        cout << val1 << " > " << val2 << endl;
    if (val1 < val2)
        cout << val2 << " > " << val1 << endl;
    cout << "The sum of " << val1 << " and " << val2 << " is " << val1 + val2 << endl;       
    cout << "The difference between " << val1 << " and " << val2 << " is " << val1 - val2 << endl;
    cout << "The product of " << val1 << " and " << val2 << " is " << val1 * val2 << endl;
    cout << "The ratio of " << val1 << " and " << val2 << " is " << val1 / val2 << endl;
    cin >> val1;    //screen freezing

    return 0;
}