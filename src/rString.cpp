#include "rString.h"

const char* rString::toArray(String string){
    char* buf;
    string.toCharArray(buf, string.length() );
    return buf;
}