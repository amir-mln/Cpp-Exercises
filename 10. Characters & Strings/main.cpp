#include <iostream>
#include <string>
using namespace std;

int main()
{
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ'"};

    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr#"};

    string PrimaryMassage;

    string Encrypted, Decrypted;

    cout << endl << "Enter your secret massage: " << endl;

    getline(cin, PrimaryMassage);

    cout << "\nYour massage is: "<<PrimaryMassage<<endl;

    cout << "\nEncrypting\n.\n.\n.\n.\n.\n.\n."<<endl;

    for ( size_t i=0; i < PrimaryMassage.length(); i++ )
    {
        char temp = PrimaryMassage.at(i);

        size_t position = alphabet.find(temp);

        if (position != string::npos)
             Encrypted += key.at(position);
        else
             Encrypted += temp;
    }

    cout <<"The encrypted massage is:\n"<<Encrypted<<endl<<endl;

    cout << "\n\nDecrypting\n.\n.\n.\n.\n.\n.\n."<<endl;

    for ( size_t i=0; i < Encrypted.length(); i++ )
    {
        char temp = Encrypted.at(i);

        size_t position = key.find(temp);

        if (position != string::npos)
             Decrypted += alphabet.at(position);
        else
             Decrypted += temp;
    }
    cout <<"\n\nThe decryption of Encrypted massage turns it back to: \n"<< Decrypted << endl << endl;
    return 0;
}
