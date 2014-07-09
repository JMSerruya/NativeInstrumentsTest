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

char * NIStringParser::replaceNiWithNIA(const char* inputString)
{
    char * newString = const_cast<char*>(inputString);
    return newString;
}

wchar_t * NIStringParser::replaceNiWithNIW(const wchar_t* inputString)
{
    wchar_t * newString = const_cast<wchar_t*>(inputString);
    return newString;
}