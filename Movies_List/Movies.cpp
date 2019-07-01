#include <iostream>
#include <iomanip>
#include <cctype>
#include <vector>
#include "Movies.h"
#include "Movie.h"

using namespace std;

void Movies::add_movie(string title, string genre, string rating, float MC_score, int watched) {
    bool already_exists {false};
    for (const Movie &movie : movies_list) // check the replay
        if (movie.get_title() == title)
            already_exists = true;

    if (already_exists)
        cout << "\nError: This movie already exists in your list" << endl;
    else {
        // statistics block - begin
        for (char &c: genre)    // standartization of genre view
           c = tolower(c);
        genre.at(0)  = toupper(genre.at(0));   

        bool such_genre_is {false};   
        for (string s : genres) // filling genres vector
            if (s == genre)
                such_genre_is = true;

            if (!such_genre_is)
                genres.push_back(genre);        
        // statistics block - end
        
        Movie movie(title, genre, rating, MC_score, watched);   // adding movie to the list
        movies_list.push_back(movie);
        cout << "\nMovie '" << title << "' has been added" << endl;
    }
}

void Movies::delete_movie(int index) {
    cout << "\nMovie '" << movies_list.at(index).get_title() << "' has been deleted from your list" << endl;
    movies_list.erase(movies_list.begin() + index);
}

void Movies::increment_watched(string title, int num) {
    bool is_incremented {false};
    for (Movie &movie : movies_list)
        if (movie.get_title() == title) {
            movie.set_watched(num);
            is_incremented = true;
        }    

    if (is_incremented)
        cout << "\nWatched has been incremented by " << num << " to movie '" << title << "'" << endl;
    else
        cout << "\nError: There is no such movie in the list." << endl;     
}

void Movies::decrement_watched(string title, int num) {
    bool is_decremented {false};
    for (Movie &movie : movies_list)
        if (movie.get_title() == title) {
            movie.set_watched(-num);
            is_decremented = true;
        }    

    if (is_decremented)
        cout << "\nWatched has been incremented by " << num << endl;
    else
        cout << "\nError: There is no such movie '" << title << "' in the list." << endl;     
}

void Movies::sort(int selection) {
    int index {0};
    string temp_string;
    float temp_float;
    switch (selection)
    {
    case 1:
        cout << "\nSort by alphabet:" << endl << endl;

        for (size_t i = 0; i < movies_list.size(); i++) // filling vector with titles
            titles.push_back(movies_list.at(i).get_title());
        
        for (size_t i = 0; i < movies_list.size(); i++) // bubble sorting
            for (size_t j = 0; j < movies_list.size() - 1; j++)
                if (titles.at(j) > titles.at(j + 1))
                {
                    temp_string = titles.at(j + 1);
                    titles.at(j + 1) = titles.at(j);
                    titles.at(j) = temp_string;
                }
        
        for (string title : titles) 
            cout << title << endl;
        break;
    
    case 2:
        cout << "\nSort by date added" << endl;
        for (const Movie &movie : movies_list)
        {
            index++;
            cout << "#" << index << " " << movie.get_title() << endl;
        }
        break;

    case 3:
        cout << "\nSort by metacritic score:" << endl << endl;

        for (size_t i = 0; i < movies_list.size(); i++) // filling vector with titles
            MC_score.push_back(movies_list.at(i).get_MC_score());
        
        for (size_t i = 0; i < movies_list.size(); i++) // bubble sorting
            for (size_t j = 0; j < movies_list.size() - 1; j++)
                if (MC_score.at(j) < MC_score.at(j + 1))
                {
                    temp_float = MC_score.at(j + 1);
                    MC_score.at(j + 1) = MC_score.at(j);
                    MC_score.at(j) = temp_float;
                }
        
        for (float score : MC_score) 
            cout << score << endl;
        break;

    case 4:
        cout << "\nSort by genre:" << endl;
        for (const string &genre : genres)
        {
            cout << "\n" << genre << ":" << endl;
            for (const Movie &movie : movies_list)
                if (movie.get_genre() == genre)
                    cout << movie.get_title() << endl;
        }
        break;

    default:
        cout << "\nError: Wrong selection";
        break;
    }
}

void Movies::display_list() const {
    int index {0};
    if (movies_list.size() == 0)
        cout << "\nYour list is empty." << endl;
    else {    
        cout << "\n---------------- Your list ----------------" << endl
             << setw(2) << "" << setw(13) << "Title" << setw(18) << "Genre" << setw(13) << "Rating" << setw(8) << "Score" << setw(11) << "Watched" << endl;  
        for (const Movie &movie : movies_list)
        {
            index++;
            cout << "#" << index << setw(20) << movie.get_title() << setw(12) << movie.get_genre() << setw(11) << movie.get_rating() << setw(9) << movie.get_MC_score() << setw(11) << movie.get_watched() << endl;
        }
        cout << "-------------------------------------------" << endl << endl;
    }
}

void Movies::get_stat() const {
    int counter {0};
    cout << "Statistics:" << endl;
    for (const string &genre : genres)
    {
        counter = 0;
        for (const Movie &movie : movies_list)
            if (movie.get_genre() == genre)
                counter++;
        cout << genre << ": " << counter << " film(-s)" << endl;
    }
    cout << "\nYou have " << movies_list.size() << " in your list" << endl;
}

Movies::Movies()
{
}

Movies::~Movies()
{
}