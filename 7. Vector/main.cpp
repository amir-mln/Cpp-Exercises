#include <iostream>
#include <vector>
using namespace std;

/* Udemy Beginning C++ Programming - From Beginner To Beyond/Section 7/Challenge*/

int main()
{
    cout << "Vector Challenge ..." << endl<<endl;
    vector <int> vector1;
    vector <int> vector2;
    vector1.push_back(10);
    vector1.push_back(20);
    cout << "Vector1 members: " << vector1.at(0) << " " << vector1.at(1)<<endl;
    cout << "\nNumber of Vector1 members: " << vector1.size()<<endl;
    vector2.push_back(33);
    vector2.push_back(55);
    cout << "Vector2 members: " << vector2.at(0) << " " << vector2.at(1)<<endl;
    cout << "\nNumber of Vector2 members: " << vector2.size()<<endl;

    vector < vector <int> > Two_D_Vector;
    Two_D_Vector.push_back(vector1);
    Two_D_Vector.push_back(vector2);

    cout << endl << "The two Dimensional vector members are : " <<endl;
    cout << Two_D_Vector[0][0] << endl;
    cout << Two_D_Vector[0][1] << endl;
    cout << Two_D_Vector[1][0] << endl;
    cout << Two_D_Vector[1][1] << endl<<endl;

    vector1.at(0)= 1010;
    Two_D_Vector.at(0).at(0)= 1010;
    cout << endl << "The NEW two dimensional vector members are : " <<endl;
    cout << Two_D_Vector[0][0] << endl;
    cout << Two_D_Vector[0][1] << endl;
    cout << Two_D_Vector[1][0] << endl;
    cout << Two_D_Vector[1][1] << endl<<endl;

    cout << "The NEW vector1 members: " << vector1.at(0) << " " << vector1.at(1)<<endl;
    return 0;
}
