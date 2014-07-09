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
    const wchar_t *szTestString2 = L"Ni nI NI nI Ni Ni No Ni";
    
    unsigned int asciiNiCountA = NIStringParser::getNiCountA(szTestString1);
    std::cout << "Found " << asciiNiCountA << " occurrences of Ni. " << "New string: \n";
    unsigned int asciiNiCountW = NIStringParser::getNiCountW(szTestString2);
    std::cout << "Found " << asciiNiCountW << " occurrences of Ni. " << "New string: ";
    std::cin.ignore();
    return 0;
}

