#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Hello! This program was made as part of a C++ course on Udemy." << endl
         << "Enter an array of characters without whitespaces to generate a pyramid." << endl 
         << "Array of characters: ";
    string entered_string;
    cin >> entered_string;
    int string_len = entered_string.length();
    int spaces {string_len};
    int chars {0};
    int chars_rev {0};
    int amount_of_chars_rev {1};
    for (int i = 0; i < string_len; i++)     //amount of the string loop
    {
        for (int j = 0; spaces > j; j++)    //whitespaces loop
            cout << " ";
        spaces--;

        chars++;
        cout << entered_string.substr(0, chars - 1);    //chars in common order (middle of the string - 1)

        for (int c = 0; amount_of_chars_rev > c; c++)     //chars in reverse order
        {
            cout << entered_string.at(chars_rev);
            chars_rev--;
        }
        chars_rev = 0;
        for (int p = i; p >= 0; p--)
            chars_rev++;
        amount_of_chars_rev++;

        cout << endl;   //new string 
    }
    
    system("pause");
    return 0;
}
