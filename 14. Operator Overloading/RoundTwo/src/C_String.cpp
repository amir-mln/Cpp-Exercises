#include "C_String.h"

C_String::C_String (char *resource = '\0')
:Charactors{nullptr}
{
    if (resource==nullptr)
    {
        Charactors = new char [1];
        Charactors = '\0';
    }
    Charactors = new char [strlen(resource)+1];
    strcpy(Charactors, resource);
}
