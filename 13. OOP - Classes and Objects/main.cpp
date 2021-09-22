#include <iostream>
#include "Movies.h"
#include <string>

using namespace std;

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


    /*Movies MyMovies;
    string temp_name;
    string temp_genre;
    int temp_rate;

    cout << "Hello world!" << endl;

    cout << "Enter the name of the movie: \n";
    getline(cin, temp_name);

    cout << "Type in the genre of the movie: \n";
    getline(cin, temp_genre);

    cout << "Please rate the movie from 1 to 10: \n";
    cin >> temp_rate;

    MyMovies.Add_Movie(temp_name,temp_genre,temp_rate);
    */
}
