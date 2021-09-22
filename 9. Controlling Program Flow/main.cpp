#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "\n <<LP Academy C++ Programing, Section 9 Challenge>> \n" << endl;
    int number;
    char InputLetter;
    vector <int> Vector;
    do
{
    cout << "\nP - Print numbers\n \nA - Add a number\n \nM - Display mean of the numbers\n ";
    cout << "\nS - Display the smallest number\n \nL - Display the largest number\n \nQ - Quit " <<endl<<endl;
    cout << "\nSelect an item of the list:\n" << endl;
    cin >> InputLetter;
    cout << "\n";
    switch (InputLetter){

    case 'P' : case 'p' :
        if ( Vector.size() == 0)
            cout << "\n\nPlease enter a number first.\n";
        else
        {
            cout << "\nHere are the number(s) you entered" << endl;
            for (int i =0;i < Vector.size();i++)
            cout << endl<< Vector.at (i)<<endl;
        }
        break;

    case 'A' : case 'a'  :
        cout << "\nEnter your number\n";
        cin >> number;
        cout << "\nYou entered '" << number << "' ." << endl;
        Vector.push_back(number);
        break;

    case 'M' : case 'm' :

        if ( Vector.size() == 0)
            cout << "\n\nPlease enter a number first.\n";
        else
        {
        int sum=0;
        for (int i=0; i < Vector.size(); i++)
            {
                sum += Vector.at(i);
            }
        cout<< "\nthe sum of the number(s) is: "<< sum<<endl;
        cout<< "\nThe mean of the number(s) is: "<< sum/(Vector.size())<<endl<<endl;
        }
        break;

    case 'S' : case 's' :
        if ( Vector.size() == 0)
            cout << "\n\nPlease enter a number first.\n";
        else
        {
        int small= Vector.at((Vector.size())-1);
        for (int i=0; i < Vector.size(); i++)
          {
            if ( small > Vector.at(i))
                small = Vector.at(i);
          }
        cout << "\nThe Smallest number is: " << small << endl<<endl;
        }
        break;

    case 'L' : case 'l' :
        if ( Vector.size() == 0)
            cout << "\nPlease enter a number first.\n";
        else
        {
            int big=Vector.at((Vector.size())-1);
            for (int i=0; i < Vector.size(); i++)
          {
            if ( big < Vector.at(i))
                big = Vector.at(i);
          }
            cout << "\nThe largest number is: " << big << endl<<endl;
        }
        break;

    case 'Q' : case 'q' :
        cout << "\nGoodbye...\n";
        break;

    default :
        cout << "\nYou entered the wrong character.\n ";
        break;
    }
    if ( InputLetter == 'Q' || InputLetter == 'q' ) break;

    } while(InputLetter != 'Q' || InputLetter != 'q');

    return 0;
}
