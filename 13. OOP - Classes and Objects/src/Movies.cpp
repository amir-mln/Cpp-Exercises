#include "Movies.h"
#include <string>
#include <iostream>

using namespace std;

bool Movies::check_repitition(string rep_string)
{
    for (int cntr = 0; cntr < Collector.size(); cntr++)
    {
        if (rep_string == Collector[cntr].MoveiName)
        {
            return false;
        }
    }

    return true;
}

void Movies::increase_num (string num_string)
{
    for (int cntr = 0; cntr < Collector.size(); cntr++)
    {
        if (num_string == Collector[cntr].MoveiName)
        {
            Collector[cntr].Watched_cntr += 1;
        }
    }
}

void Movies::add_movie (string my_name ,string my_genre ,int my_rate)
{
    if (check_repitition(my_name))
    {
       Collector.push_back ({my_name,my_genre,my_rate});
       vec_num ++;
    }
    else
    {
        cout << "The Movie " << my_name<< " already exist in the list. \n";
        cout << "Adding to 'THE WATCHED NUMBER' of the movie. \n\n";
        increase_num(my_name);

    }
}

void Movies::display_movies()
{
    if (Collector.size() == 0)
        cout << "You haven't add any movies yet.\n\n";
    else
    {
        for (int cntr =0; cntr < Collector.size(); cntr++)
        {
            cout << "The Name: "<<Collector[cntr].MoveiName << ", ";
            cout << "The Genre: "<<Collector[cntr].Genre << ", ";
            cout << "The Rating: "<<Collector[cntr].Rating << " .\n";
            cout << "The Watched Number: "<<Collector[cntr].Watched_cntr << " .\n\n";
        }
    }
}


/*Movies::Movies()
{
    //ctor
}

Movies::~Movies()
{
    //dtor
}
*/
