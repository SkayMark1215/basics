#include <cctype>
#include <deque>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

bool is_palindrome(const std::string& s)
{
    deque<char> d;

    for (auto const &c : s) // filling deque
        if (isalpha(c))
            d.push_back(toupper(c)); 

    char front, back;
    while (d.size() > 1)    // checking d is a palindrome 
    {
        front = d.front();
        back = d.back();
        d.pop_front();
        d.pop_back();
        if (front != back)
            return false;
    }
    return true;
}

int main()
{
    
    cout << "Hi! This program checks a sentence or word on a palindrome." << endl
         << "It uses deque from STL. Enter 'exit' if you want to stop." << endl;

    string str;
    while (1 == 1) {    
        cout << "Enter the sentence or word: ";
        cin >> str;
        
        if (str == "Exit" or str == "exit")
            break;

        if (is_palindrome(str))
            cout << "It is palindrome!" << endl;
        else 
            cout << "It is not a palindrome :(" << endl;         
    }

    cout << "\nThanks for using! Bye!" << endl;

    system("pause");
    return 0;
}
