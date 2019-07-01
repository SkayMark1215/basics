#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <iostream>

using namespace std;

class Movie
{
private:
    string title, genre, rating;
    float MC_score;
    int watched;
public:
    void set_title(string title) { this->title = title; }
    string get_title() const { return title; }

    void set_genre(string genre) { this->genre = genre; }
    string get_genre() const { return genre; }

    void set_rating(string rating) { this->rating = rating; }
    string get_rating() const { return rating; }

    void set_MC_score(float MC_score) { this->MC_score = MC_score; }
    float get_MC_score() const { return MC_score; }

    void set_watched(int watched) { this->watched += watched; }
    int get_watched() const { return watched; }

    Movie(string title, string genre, string rating, float MC_score, int watched);
    ~Movie();
};

#endif  // _MOVIE_H_