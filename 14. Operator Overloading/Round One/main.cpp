#include <iostream>
#include <cstring>
#include <C_String.h>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    C_string amir {"amir"};
    C_string mahdi {"mahdi"};
    C_string Ln (amir + mahdi);
    C_string product("reza");
    amir += product;
    amir.print_info();
    mahdi.print_info();
    Ln.print_info();
    C_string copy_cons (Ln);
    product.print_info();
    return 0;
}
