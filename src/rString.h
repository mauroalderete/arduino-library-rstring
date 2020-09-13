#ifndef _RSTRING_HPP_
#define _RSTRING_HPP_

#include "Arduino.h"

class rString
{
private:
    String _string;
public:
    const String Empty = "";
    rString();
    rString(String string);
    rString(String string, String string2);
    rString(const char* string);
    rString(const char* string, const char* string2);
    rString(String string, const char* string2);
    rString(const char* string, String string2);
    rString(const String* string, int length);
    ~rString();

    String toString();
    const char* toArray();

    bool IsEmpty();

    const char charAt(int index);
    int compareTo(rString string);
    int compareTo(String string);
    bool Equals(rString string);
    bool Equals(String string);
};

#endif