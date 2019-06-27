#include <iostream>
using namespace std;

int main() {
    cout << "Hi! This is calorie calculator." << endl 
         << "It is based on Mifflin & St. Jeor formula for calculating basal metabolism and then calculate the TDEE." << endl;
    //colecting data 
    cout << "Please, enter your weight: ";
    float weight;
    cin >> weight;
    cout << "height: ";
    float height;
    cin >> height;
    cout << "age: ";
    float age;
    cin >> age;
    cout << "gender (m/f): ";
    char gender;
    cin >> gender;
    cout << "Enter your activity level, where:" << endl
         << "1.2 - sedentary lifestyle" << endl
         << "1.375 - average activity (light exercise 1-3 times a week)" << endl
         << "1.55 - high activity (intensive exercise 3-5 times a week)" << endl
         << "1.725 - very high activity (heavy physical activity 6-7 times a week)" << endl
         << "Activity level: ";
    float activity_level; 
    cin >> activity_level;    
    //calculating
    float metabolism = (10 * weight) + (6.25 * height) - (5 * age);
    switch (gender)
    {
    case 'm':
        metabolism += 5;
        cout << "Your basal metabolism: " << metabolism << " kcal." << endl
             << "Your TDEE: " << metabolism * activity_level << " kcal." << endl;
        break;
    case 'f':
        metabolism -= 161;
        cout << "Your basal metabolism: " << metabolism << " kcal." << endl
             << "Your TDEE: " << metabolism * activity_level << " kcal." << endl;
        break;
    default:
        cout << "Invalid gender." << endl;
        break;
    }
    cout << "Thank you for using. Bye!" << endl;

    system("pause");
    return 0;
}
