#ifndef C_STRING_H
#define C_STRING_H
#include <cstring>


class C_String
{
private:
    char *Charactors;
public:
    C_String (char *);
    C_String (const C_String &resource);
    void display ();
    void set_string ();
    C_String operator + (C_String &);
    C_String &operator += (C_String &);
    C_String operator = (C_String &);

};

#endif // C_STRING_H
