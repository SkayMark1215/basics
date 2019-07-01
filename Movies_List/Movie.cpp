#include <iostream>
#include "Movie.h"

Movie::Movie(string title, string genre, string rating, float MC_score, int watched)
    :  title(title), genre(genre), rating(rating), MC_score(MC_score), watched(watched) {
}

Movie::~Movie()
{
}