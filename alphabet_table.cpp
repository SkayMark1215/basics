#include <iostream> 
using namespace std; 

int main() { 
    char letter {'a'};
    int values = 97;
    while(values != 123){   //table of chars with their values
        cout << letter << '\t' << values << endl;
        ++values;
        letter = values;
    }
    
    system("pause");
    return 0; 
}
