#ifndef MOVIES_H
#define MOVIES_H
#include "Movie.h"
#include <string>
#include <vector>


class Movies
{
    private:
        vector <Movie> Collector;
        int vec_num = 0;

    public:
        bool check_repitition (string rep_string);
        void add_movie (string my_name,string my_genre,int my_rate);
        void display_movies ();
        void increase_num (string num_string);
        //Movies();
        //~ Moveis();

};

#endif // MOVIES_H
