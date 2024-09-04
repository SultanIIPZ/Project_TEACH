#pragma once
#ifndef AYOKONA_H
#define AYOKONA_H

#include <string>
//#include <msclr/marshal_cppstd.h>
#include "MyForm.h"
#include "Professor.h"

using namespace std;

public ref class StringConverter {
public:
    static System::String^ convertertoString(std::string);

    static System::String^ intToString(int);

    //static std::string convertS(String^);

};
#endif
