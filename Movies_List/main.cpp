#include <iostream>
#include "Movies.h"

int main() {
    cout << "Hi!" << endl
         << "This program create a list with your watched films that you can modify" << endl;

    Movies movies_list;
    string title, genre, rating;
    char selection;
    float MC_score;
    int watched, index, num;

    do
    {
        cout << "\n~~~~~~~~ Menu ~~~~~~~~" << endl
             << "1. Add movie" << endl
             << "2. Delete movie" << endl
             << "3. Increment watched" << endl
             << "4. Decrement watched" << endl
             << "5. Sort" << endl
             << "6. Display list" << endl
             << "7. Statistics" << endl
             << "8. Quite" << endl;

        cout << "Choose option: ";
        cin >> selection;

        switch (selection)
        {
        case '1':
            cout << "\nPlease, enter a title: ";
            cin >> title;
            cout << "Enter a genre: ";
            cin >> genre;
            cout << "Enter a rating: ";
            cin >> rating;
            cout << "Enter a metacritic score: ";
            cin >> MC_score;
            cout << "Enter a number of wathes: ";
            cin >> watched;
            
            movies_list.add_movie(title, genre, rating, MC_score, watched);
            break;

        case '2':
            cout << "\nPlease, enter index of the film you want to delete: ";
            cin >> index;
            movies_list.delete_movie(index);
            break;

        case '3':
            cout << "\nPLease, enter title of the film you want to increment watched: ";
            cin >> title;
            cout << "Enter amount of 'watched': ";
            cin >> num;
            movies_list.increment_watched(title, num);
            break;

        case '4':
            cout << "\nPLease, enter title of the film you want to decrement watched: ";
            cin >> title;
            cout << "Enter amount of 'watched': ";
            cin >> num;
            movies_list.decrement_watched(title, num);
            break;

        case '5':
            cout << "\nSort by:" << endl
                << "1. Alphabet" << endl
                << "2. Date added" << endl
                << "3. Metacritic score" << endl
                << "4. Genre" << endl;
            cout << "Choose option:";
            cin >> selection;
            movies_list.sort(selection);     
            break;

        case '6':
            movies_list.display_list();
            break;

        case '7':
            movies_list.get_stat();
            break;

        case '8':
            cout << "\nThank you for using! Bye!" << endl;
            break;    
        
        default:
            cout << "\nError: Wrong selection" << endl; 
            break;
        }    
    } while (selection != '8');        
  
    system("pause");
    return 0;
}