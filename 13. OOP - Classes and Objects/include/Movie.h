#ifndef MOVIE_H
#define MOVIE_H
#include <string>
using namespace std;

class Movie
{
private:
    friend class Movies;
    string MoveiName;
    string Genre;
    int Rating;
    int Watched_cntr;

public:
    Movie (string the_name = "None" ,string the_genre = "None", int the_rate = 0, int the_watche_num = 1);
    //~Movie ();
};

#endif // MOVIE_H
