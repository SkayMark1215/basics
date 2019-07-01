#ifndef _MOVIES_H_
#define _MOVIES_H_
#include "Movie.h"
#include <vector>

using namespace std;

class Movies
{
private:
    vector <Movie> movies_list;
    vector <string> titles;
    vector <string> genres {"Drama"};
    vector <float> MC_score;
public:
    void add_movie(string title = "None", string genre = "None", string rating = "None", float MC_score = 0.0, int watched = 0);
    void delete_movie(int index);
    void increment_watched(string title, int num);
    void decrement_watched(string title, int num);
    void sort(int selection);
    void display_list() const;
    void get_stat() const;
    Movies();
    ~Movies();
};



#endif  // _MOVIES_H_