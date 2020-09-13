#include "Arduino.h"
#include "rString.h"

rString::rString(){
    _string = Empty;
}

rString::rString(String string){
    _string = string;
}

rString::rString(String string, String string2){
    _string = string + string2;
}

rString::rString(const char* string){
    _string = string;
}

rString::rString(const char* string, const char* string2){
    _string = String(string) + String(string2);
}

rString::rString(String string, const char* string2){
    _string = string + String(string2);
}

rString::rString(const char* string, String string2){
    _string = String(string) + string2;
}

rString::rString(const String* string, int length){
    _string = "";

    for(int i=0; i<length; i++){
        _string += string[i];
    }
}

rString::~rString(){
    _string = "";
}

const char* rString::toArray(){
    char* buf;
    _string.toCharArray(buf, _string.length() );
    return buf;
}

String rString::toString(){
    return _string;
}

bool rString::IsEmpty(){
    return (_string == Empty);
}

const char rString::charAt(int index){
    return _string.charAt(index);
}

int rString::compareTo(rString string){
    return _string.compareTo(string.toString());
}

int rString::compareTo(String string){
    return _string.compareTo(string);
}

bool rString::Equals(rString string){
    return (_string.compareTo(string.toString())==0);
}

bool rString::Equals(String string){
    return (_string.compareTo(string)==0);
}
