#include <iostream>
#include <vector>

using namespace std;

void PrintFunc (vector <int> &);
void AddNumb (vector <int> &);
int mean (vector <int> &);
int largest (vector <int> &);
int smallest (vector <int> &);



int main()
{
    cout << "\n <<LP Academy C++ Programing, Section 11 Challenge>> \n" << endl;
    char input_letter;
    vector <int> numbers;
    do
    {
        cout << "\nP - Print numbers\n \nA - Add a number\n \nM - Display mean of the numbers\n ";
        cout << "\nS - Display the smallest number\n \nL - Display the largest number\n \nQ - Quit " <<endl<<endl;
        cout << "\nSelect an item of the list:\n" << endl;
        cin >> input_letter;
        switch (input_letter)
        {
            case 'P' : case 'p' :
                PrintFunc(numbers);
                break;
            case 'A' : case 'a' :
                AddNumb(numbers);
                break;
            case 'M' : case 'm' :
                mean (numbers);
                break;
            case 'L' : case 'l' :
                largest(numbers);
                break;
            case 'S' : case 's' :
                smallest(numbers);
                break;
            case 'Q' : case 'q' :
                cout << "You selected 'Quit'. \nGoodBye";
                break;
        }
        if ( input_letter == 'q' || input_letter == 'Q')
            break;
    }
    while ( input_letter != 'q' || input_letter != 'Q');
    return 0;
}

void PrintFunc(vector <int> &PrintVec)
{
    cout << "You selected 'Print numbers' \n";
    cout << "Numbers are: \n";
    if ( PrintVec.size() == 0)
        cout << "You Haven't entered any number yet." << endl;
    else
    {
       for (int ctr = 0; ctr < PrintVec.size(); ctr++)
        cout << PrintVec.at(ctr) << endl;
    }
}
void AddNumb(vector <int> &FuncVect)
{
    cout << "You selected 'Add a Number' \n";
    cout << "please add a number:\n";
    int input_number;
    cin >> input_number;
    FuncVect.push_back(input_number);
}
int mean (vector <int> &MeanVect)
{
    cout << "You selected 'Display mean of the numbers' \n";
    if ( MeanVect.size() == 0)
        cout << "You Haven't entered any number yet." << endl;
    else
        {
        double sum = 0;
        for (int ctr = 0; ctr < MeanVect.size(); ctr++)
        {
            sum += MeanVect.at(ctr);
        }
        cout << (sum / MeanVect.size());
        }
}
int largest (vector <int> &LargVect)
{
    cout << "You selected 'Display the largest number' \n";
    if ( LargVect.size() == 0)
        cout << "You Haven't entered any number yet." << endl;
    else
    {
        int largest = LargVect.at(0);
        for (int ctr = 1; ctr < LargVect.size(); ctr++)
        {
            if (largest < LargVect.at(ctr))
                largest = LargVect.at(ctr);
        }
        cout << "\nThe largest number is: \n" << largest;
    }
}
int smallest (vector <int> &SmallVect)
{
  cout << "You selected 'Display the smallest number' \n";
    if ( SmallVect.size() == 0)
        cout << "You Haven't entered any number yet." << endl;
    else
    {
        int Small = SmallVect.at(0);
        for (int ctr = 1; ctr < SmallVect.size(); ctr++)
        {
            if (Small > SmallVect.at(ctr))
                Small = SmallVect.at(ctr);
        }
        cout << "\nThe smallest number is: \n" << Small;
    }
}
