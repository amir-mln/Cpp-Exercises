#include <iostream>

using namespace std;

void print ( int *, int );
int *aplyy_all (int *, int , int* , int);


 int main()
{
    int size1, size2;

    cout << "How many numbers do you want to store in array 1 ?\n";
    cin >> size1;
    int arr1 [size1];
    int *arr_ptr1 {arr1};
    cout << "\n\n\nHow many numbers do you want to store in array 2 ?\n";
    cin >> size2;
    int arr2 [size2];
    int *arr_ptr2 {arr2};

    cout << "\n\nEnter array 1 numbers: \n";
    for  ( int i = 0; i< size1 ; i++)
    {
        cin >> arr1[i];
    }
    print(arr_ptr1,size1);

    cout << "\n\nEnter array 2 numbers: \n";

    for  ( int i = 0; i< size2 ; i++)
    {
        cin >> arr2[i];
    }
    print(arr_ptr2,size2);

    cout << "\n************\n************\n************\n";
    int *end_array = aplyy_all(arr_ptr1, size1, arr_ptr2, size2);

    print (end_array,(size1*size2));

    delete end_array;
    return 0;
}
 void print(int *arr_ptr, int size)
{
    cout << "\nthe members of the array are: \n";
    for (int i=0; i < size ; i++)
        cout << *(arr_ptr + i) << endl;
}

 int *aplyy_all(int *PtrToArr1, int arr1_size, int *PtrToArr2, int arr2_size)
{
    int new_size = arr1_size * arr2_size;
    int *dyn_ptr = new int [new_size];
    int main_ctr=0;
    for (int ctr1=0; ctr1 < arr1_size; ctr1++)
    {
        for (int ctr2=0; ctr2 < arr2_size; ctr2++)
        {
            *(dyn_ptr + (main_ctr++)) = *(PtrToArr1+ctr1) * *(PtrToArr2+ctr2);
        }
    }

    return dyn_ptr;
}

