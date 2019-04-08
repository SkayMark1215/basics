#include <iostream>
using namespace std;

int i;
int i2;
unsigned int number = 0;
void square_plus(int) {
    number = number + i2;
}
int main() {
    cout << "Please, enter the positive number to square it with + operation: ";
    cin >> number;
    i2 = number;
    for (int i=1; i<i2; ++i) square_plus(i);
    cout << number << endl;

    cin >> number; //screen freezing

    return 0;
}
