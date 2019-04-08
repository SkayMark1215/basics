#include <iostream> 
using namespace std; 

int main() { 
    char letter {'a'};
    int values = 97;
    while(values != 123){ 
        cout << letter << '\t' << values << endl;
        ++values;
        letter = values;
    }
    cin >> letter;  //screen freezing

    return 0; 
}