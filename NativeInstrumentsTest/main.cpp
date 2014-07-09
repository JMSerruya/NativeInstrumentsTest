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
    const char *newString1 = NIStringParser::replaceNiWithNI(szTestString1);
    std::cout << "Found " << asciiNiCountA << " occurrences of Ni. " << "New string: " << newString1 <<"\n";
    unsigned int asciiNiCountW = NIStringParser::getNiCountW(szTestString2);
    const wchar_t *newString2 = NIStringParser::replaceNiWithNI(szTestString2);
    std::wcout << "Found " << asciiNiCountW << " occurrences of Ni. " << "New string: " << newString2 <<"\n";
    std::cin.ignore();
    return 0;
}

