#include <iostream>
#include <cctype>
#include <iomanip>

using namespace std;

void greetings() {
    cout << setw(25) << "GUESS NUMBER" << endl;
    for (size_t i = 0; i < 40; i++) //separator
        cout << '-';
    
    cout << "\nHi! This is the game 'guess the number'." << endl
         << "It uses binary search." << endl;
}

int binary_search(int &l_bound, int &r_bound, string user_answer) {
    int middle;
    if (r_bound < 0) {
        middle = (l_bound + r_bound) / 2;

        if (user_answer == "more")
        {
            l_bound = middle + 1;
            middle = (l_bound + r_bound) / 2;
        }
        if (user_answer == "less")
        {
            r_bound = middle - 1;
            middle = (l_bound + r_bound) / 2;
        }
    }    
    else {                                      // if r_bound > 0
        middle = (l_bound + r_bound) / 2;

        if (user_answer == "more")
        {
            l_bound = middle + 1;
            middle = (l_bound + r_bound) / 2;
        }
        if (user_answer == "less")
        {
            r_bound = middle - 1;
            middle = (l_bound + r_bound) / 2;
        }        
    }    

    return middle;
}

string lower_case(string word) {
    for (auto &letter : word)
        letter = tolower(letter);
        
    return word;
}

int main() {
    greetings();
    
    int l_bound;
    int r_bound;
    try
    {
        cout << "Enter left bound: ";
        cin >> l_bound;
        cout << "Enter right bound: ";
        cin >> r_bound;

        if (l_bound > r_bound)
            throw -1;

        cout << "Ok! Let's play! Pick a number from " << l_bound << " to " << r_bound << endl;     
    }
    catch(const int& e)
    {
        cerr << "\nError bounds of the range. Right bound must be less than left bound." << endl;
        system("pause");
        return -1;
    }
    
    string user_answer {""};
    while (user_answer != "yes")
    {
        cout << "Your number is " << binary_search(l_bound, r_bound, user_answer) << "?" << endl;
        cin >> user_answer;
        user_answer = lower_case(user_answer);
        if (user_answer != "yes")
        {
            cout << "More or less?" << endl;
            cin >> user_answer;
            user_answer = lower_case(user_answer);
        }
    }
    
    cout << "\nGood game! Thank you!" << endl;

    system("pause");
    return 0;
}
