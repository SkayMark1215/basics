#include <iostream>
using namespace std;

int main () {
    cout << "Please, enter the mile value: ";
    double mile;
    double kilometer;
    cin >> mile;
    kilometer = mile * 1.609;
    cout << "In " << mile << " mile(-s)" << " there are " << kilometer << " kilometer(-s)"; 
   
    system("pause");
    return 0;
}
