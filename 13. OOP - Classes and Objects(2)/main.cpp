#include <iostream>
#include <string>
#include <vector>

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

Movie::Movie(string the_name, string the_genre, int the_rate, int the_watched_num)
:MoveiName{the_name}, Genre{the_genre}, Rating{the_rate}, Watched_cntr{the_watched_num}
{

}
/*Movie::~Movie()
{
    //cout<<"Destructor Is Called.\n";
}
*/

class Movies
{
private:
    vector <Movie> Collector;


public:
    bool check_repitition (string rep_string);
    void add_movie (string my_name,string my_genre,int my_rate);
    void display_movies ();
    void increase_num (string num_string);
    //Movies();
    //~ Moveis();

};

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

int main()
{
    Movies MyMovies;
    MyMovies.display_movies();

    MyMovies.add_movie("Fight Club","Drama",9);
    MyMovies.add_movie("The Avengers","Science Fiction",8);
    MyMovies.add_movie("Sinister","Horror",7);

    MyMovies.display_movies();
    MyMovies.add_movie("Fight Club","Drama",9);
    MyMovies.display_movies();
    MyMovies.add_movie("Sinister","Horror",7);
    MyMovies.display_movies();


    return 0;
}
