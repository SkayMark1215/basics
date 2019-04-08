#include <iostream>
using namespace std;

int main () {
    cout << "Please, enter your name: ";
    string your_name {" "};
    cin >> your_name;
    cout << "Enter the name of the person you want to write to: ";
    string name {" "};
    cin >> name;
    cout << "Enter name of your other friend: ";
    string friend_name {" "};
    cin >> friend_name;
    cout << "Enter 'm' if the friend is male and an 'f' if the friend is female: ";
    char friend_sex {'?'};
    cin >> friend_sex;
    cout << "Please, enter the age of recipient: ";
    int age {-1};
    cin >> age;
    if (age <= 0 or age >= 110)
        cout << "You're kidding!" << endl; 
    if (age < 12) 
        cout << "Next year you will be " << age+1 << endl;
    if (age == 17)
        cout << "Next year you will be able to vote" << endl;   
    if (age >= 70)
        cout << "I hope you are enjoying retiriment" << endl;         
    cout << "Dear " << name << ", how are you? Is all OK? Waiting for ur answer..." << endl;
    cout << "Have u seen " << friend_name << " lately?" << endl; 
    if (friend_sex=='m') 
        cout << "If you see " << friend_name << " please ask him to call me." << endl << endl;
    if (friend_sex=='f') 
        cout << "If you see " << friend_name << " please ask her to call me." << endl << endl;
    cout << "Your sincerely, " << endl << endl << endl << your_name;
    cin >> name;    //screen freezing

    return 0;
}