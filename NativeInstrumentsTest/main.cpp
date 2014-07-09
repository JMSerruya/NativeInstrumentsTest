//
//  main.cpp
//  NativeInstrumentsTest
//
//  Created by Juan Manuel Serruya on 7/9/14.
//  Copyright (c) 2014 NativeInstrumentsTest. All rights reserved.
//

#include <iostream>
#include "NIStringParser.h"

int main(int argc, const char * argv[])
{
    const char *szTestString1 = "Ni nI NI nI Ni";
    const wchar_t *szTestString2 = L"Ni nI NI nI Ni";
    
    unsigned int asciiNiCount = NIStringParser::getNiCountA(szTestString1);
    std::cout << "Found " << asciiNiCount << " occurrences of Ni. " << "New string: ";
    std::cin.ignore();
    return 0;
}

