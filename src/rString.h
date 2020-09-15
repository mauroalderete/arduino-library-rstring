#ifndef _RSTRING_HPP_
#define _RSTRING_HPP_

#include "Arduino.h"

class rString{
public:
    rString();
    ~rString();

    static const char* toArray(String string);
};

#endif