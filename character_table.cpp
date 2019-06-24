#include <iostream> 
using namespace std; 

int main() { 
    char letter;
    int i;
    cout << "--------Letters--------" << endl;
    for(int i = 97; i < 123; i++)
    {
        letter = i;
        cout << letter << '\t' << i << endl;
    }
    cout << "--------Uppercase letters--------" << endl;
    for(int i = 65; i < 91; i++)
    {
        letter = i;
        cout << letter << '\t' << i << endl;
    }
    cout << "--------Digits--------" << endl;
    for(int i = 49; i < 58; i++)
    {
        letter = i;
        cout << letter << '\t' << i << endl;
    }

    system("pause");
    return 0; 
}
