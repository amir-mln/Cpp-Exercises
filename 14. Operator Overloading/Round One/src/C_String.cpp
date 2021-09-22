#include "C_String.h"
#include <cstring>
#include <iostream>

using namespace std;


C_string::C_string()
: Charactor {nullptr}
{
    Charactor = new char [1];
    *Charactor = '\0';
}

C_string::C_string(char *para_char = nullptr)
: Charactor {nullptr}
{
    Charactor = new char [strlen(para_char)+1];
    strcpy(Charactor, para_char);

}

C_string::C_string(const C_string &resource)
{
    Charactor = nullptr;
    Charactor = new char [strlen(resource.Charactor)+1];
    strcpy(Charactor, resource.Charactor);
    cout << "Copy Constructor is Called.\n";
}

C_string C_string::operator = (C_string &pass_char)
{
    this->Charactor = nullptr;
    this->Charactor = new char [strlen(pass_char.Charactor)+1];
    strcpy(this->Charactor, pass_char.Charactor);
}
C_string C_string::operator +(const C_string &resource) const
{
    char *temp = new char [strlen(this->Charactor) + strlen(resource.Charactor) + 1];
    strcpy(temp, this->Charactor);
    strcat(temp, " ");
    strcat(temp, resource.Charactor);
    C_string temp_obj {temp};
    delete temp;
    return temp_obj;
}

C_string C_string::operator - ()
{
    char *temp = new char [strlen(Charactor)+1];
    strcpy(temp,Charactor);
    tolower(*temp);
    C_string temp_obj {temp};
    delete temp;
    return temp_obj;
}

C_string &C_string::operator += (const C_string &lhs) const
{
    *this = *this + lhs
    return *this;
}

C_string C_string::operator * (int number)
{
    for (int cntr = 1; cntr < number; cntr++)
    {
        strcat(this->Charactor, " ");
        strcat(this->Charactor, this->Charactor);
    }

}

C_string operator *= (C_string &resource, int number)
{
    C_string temp (resource * number);
    resource = temp;
    return resource;
}

void C_string::print_info()
{
    cout << Charactor;
    cout << "\n";
}

C_string::~C_string()
{
    cout << "Destructor is called for: " << Charactor << endl;
    delete [] Charactor;
}
