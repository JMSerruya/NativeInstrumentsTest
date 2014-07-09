//
//  NIStringParser.cpp
//  NativeInstrumentsTest
//
//  Created by Juan Manuel Serruya on 7/9/14.
//  Copyright (c) 2014 NativeInstrumentsTest. All rights reserved.
//

#include "NIStringParser.h"

unsigned int NIStringParser::getNiCountA(const char* inputString) {
    unsigned int count = 0;
    const char *compareString = "Ni";
    char* inputStringCopy = const_cast<char *>(inputString);
    while ((inputStringCopy = strstr( inputStringCopy, compareString )))
    {
        count++;
        inputStringCopy += strlen(compareString);
    }
    return count;
}

unsigned int NIStringParser::getNiCountW(const wchar_t* inputString) {
    return 0;
}