#ifndef C_STRING_H
#define C_STRING_H
#include <iostream>
using namespace std;

class C_string
{
  // friend C_string operator += (C_string, C_string);
   friend C_string operator *= (C_string, int);
    public:
        C_string();
        C_string (char *para_char);
        C_string (const C_string &resource);
        C_string operator =(C_string &);
        C_string operator +(const C_string &) const;
        C_string operator - ();
        C_string &operator += (const C_string &) const;
        C_string operator * (int);
        //C_string operator *= (int);
        C_string operator ++ ();
        C_string operator -- ();
        bool operator == (C_string &);
        bool operator != (C_string &);
        bool operator < (C_string &);
        bool operator > (C_string &);
        void print_info ();

        virtual ~C_string();
    private:
        char *Charactor;

};

#endif // C_STRING_H
