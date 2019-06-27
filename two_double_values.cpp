#include <iostream>
using namespace std;

int main() {
    cout << "Please, enter two floating-point values: ";
    double val1;
    double val2;
    cin >> val1 >> val2;
    if (val1 > val2)
        cout << val1 << " > " << val2 << endl;
    if (val1 < val2)
        cout << val2 << " > " << val1 << endl;
    cout << "The sum of " << val1 << " and " << val2 << " is " << val1 + val2 << endl
         << "The difference between " << val1 << " and " << val2 << " is " << val1 - val2 << endl
         << "The product of " << val1 << " and " << val2 << " is " << val1 * val2 << endl
         << "The ratio of " << val1 << " and " << val2 << " is " << val1 / val2 << endl;

    system("pause");
    return 0;
}
