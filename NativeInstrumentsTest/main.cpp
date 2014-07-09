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
    
    unsigned int asciiNiCountA = NIStringParser::getNiCountA(szTestString1);
    std::string newString1 = NIStringParser::replaceNiWithNIA(szTestString1);
    std::cout << "Found " << asciiNiCountA << " occurrences of Ni. " << "New string: " << newString1 <<"\n";

    unsigned int asciiNiCountW = NIStringParser::getNiCountW(szTestString2);
    std::wstring newString2 = NIStringParser::replaceNiWithNIW(szTestString2);
    std::wcout << "Found " << asciiNiCountW << " occurrences of Ni. " << "New string: " << newString2 <<"\n";

    std::cin.ignore();
    return 0;
}

