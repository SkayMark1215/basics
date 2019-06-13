#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

char print_menu_return_selection();
void print_list(vector <int> list_of_nums);
void print_largest(vector <int> list_of_nums);
void print_smallest(vector <int> list_of_nums);
void add_the_element(vector <int> &list_of_nums);
void calculate_the_mean(vector <int> list_of_nums);

int main() {
    cout << "Hello! This program simply displays a menu with some functionality." << endl
         << "=========================" << endl;
    vector <int> list_of_nums{};
    char selection;
    do
    {
        selection = print_menu_return_selection(); 
        switch (selection)
        {
        case 'P':
            print_list(list_of_nums);
            break;

        case 'A':
            add_the_element(list_of_nums);
            break;

        case 'M':
            calculate_the_mean(list_of_nums);
            break;

        case 'S':
            print_smallest(list_of_nums);
            break;

        case 'L':
            print_largest(list_of_nums);
            break;

        case 'Q':
            break;    

        default:
            cout << "Unknown option, please, try again." << endl;
            break;
        }
    } while (selection != 'Q');

    cout << "\nThank you for your attention :)" << endl;       

    system ("pause");
    return 0;
}

char print_menu_return_selection() {
    char selection;
    cout << "\n--- Menu ---" << endl
             << "P - Print list of numbers" << endl
             << "A - Add number to the list" << endl
             << "M - Display mean of the numbers" << endl
             << "S - Display the smallest number" << endl
             << "L - Display the largest number" << endl
             << "Q - Quit" << endl
             << "Enter your choice: ";
        cin >> selection;
        selection = toupper(selection);

        return selection;
}

void print_list(vector <int> list_of_nums) {
    if (list_of_nums.size() == 0)
        cout << "Sorry, but your list has nothing to print. Try to add number." << endl;
        else 
        {
            cout << "Numbers in your list: ";
            for (int num : list_of_nums)
                cout << num << " " << endl;
        }
}

void add_the_element(vector <int> &list_of_nums) {
    int num {};
    cout << "Enter a number you want to add: ";
                cin >> num;
                list_of_nums.push_back(num);
                cout << num << " has been added to your list." << endl;
}

void calculate_the_mean(vector <int> list_of_nums) {
    if (list_of_nums.size() == 0)
                cout << "Sorry, but your list is empty. Try to add number." << endl;
            else 
            {
                cout << "Mean of numbers from your list: ";
                int sum {}; 
                for (int num : list_of_nums)
                    sum += num;
                cout << static_cast<double>(sum)/list_of_nums.size() << endl;   
            }    
}

void print_smallest(vector <int> list_of_nums) {
    if (list_of_nums.size() == 0)
                cout << "Sorry, but your list is empty. Try to add number." << endl;
            else 
            {
                cout << "Smallest number from your list: ";
                int smallest {list_of_nums.at(0)};
                for (int num : list_of_nums)
                    if (num <= smallest)
                        smallest = num;
                cout << smallest << endl;
            }    
}

void print_largest(vector <int> list_of_nums) {
    if (list_of_nums.size() == 0)
        cout << "Sorry, but your list is empty. Try to add a number." << endl;
        else 
        {
            cout << "Smallest number from your list: ";
            int largest {list_of_nums.at(0)};
            for (int num : list_of_nums)
                if (num >= largest)
                    largest = num;
            cout << largest << endl;
        }
}