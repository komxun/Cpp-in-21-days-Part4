// Listing 13.14 - Using a String class (P.437)
// (UNFINISH!)
#include <iostream>
#include <string.h>
using namespace std;

// Rdimentary string class
class String
{
    public:
        String();
        String(const char *const);
        String(const String &);  // Copy constructor
        ~String();

        // overloaded operators
        char & operator[] (unsigned short offset);          // converting type
        char operator[] (unsigned short offset) const;
        String operator+(const String&);        // + operator
        void operator+=(const String&);         // += operator
        String & operator= (const String &);    // = operator

        // General accessors
        unsigned short GetLen() const {return itsLen;}
        const char * GetString() const {return itsString;}
    private:
        String(unsigned short); // private constructor
        char * itsString;
        unsigned short itsLen;
};

// default constructor creates string of 0 bytes
String::String()
{
    itsString = new char[1];
    itsString[0] = '\0';
    itsLen = 0;
}

// private (helper) constructor, used only by 
// class methods for creating a new string o
// required size. Null filled
String::String(unsigned short len)
{
    itsString = new char[len+1];
    for (unsigned short i=0; i<=len; i++)
        itsString[i] = '\0';
        itsLen = len;
}

// Converts a character array to a String
String::String(const char * const cString)
{
    itsLen = strlen(cString);
    itsString = new char[itsLen+1];
}