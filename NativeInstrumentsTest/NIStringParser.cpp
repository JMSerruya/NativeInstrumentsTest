//
//  NIStringParser.cpp
//  NativeInstrumentsTest
//
//  Created by Juan Manuel Serruya on 7/9/14.
//  Copyright (c) 2014 NativeInstrumentsTest. All rights reserved.
//

#include "NIStringParser.h"

unsigned int NIStringParser::getNiCountA(const char* inputString)
{
    unsigned int count = 0;
    const char *compareString = "Ni";
    char* inputStringCopy = const_cast<char*>(inputString);
    while ((inputStringCopy = strstr( inputStringCopy, compareString)))
    {
        count++;
        inputStringCopy += strlen(compareString);
    }
    return count;
}

unsigned int NIStringParser::getNiCountW(const wchar_t* inputString)
{
    unsigned int count = 0;
    const wchar_t *compareString = L"Ni";
    wchar_t* inputStringCopy = const_cast<wchar_t*>(inputString);

    while ((inputStringCopy = wcsstr( inputStringCopy, compareString)))
    {
        count++;
        inputStringCopy += wcslen(compareString);
    }
    return count;
}

std::string NIStringParser::replaceNiWithNIA(const char* inputCString)
{
    //convert to C++ string to make use of stdlib
    std::string newString(inputCString);
    const std::string s = "Ni";
    const std::string t = "NI";

    std::string::size_type n = 0;
    while ( ( n = newString.find( s, n ) ) != std::string::npos )
    {
        newString.replace( n, s.size(), t );
        n += t.size();
    }
    return newString;
}

std::wstring NIStringParser::replaceNiWithNIW(const wchar_t* inputCString)
{
    //convert to C++ wstring to make use of stdlib
    std::wstring newString(inputCString);
    const std::wstring s = L"Ni";
    const std::wstring t = L"NI";

    std::string::size_type n = 0;
    while ( ( n = newString.find( s, n ) ) != std::string::npos )
    {
        newString.replace( n, s.size(), t );
        n += t.size();
    }
    return newString;
}