//
//  NIStringParser.h
//  NativeInstrumentsTest
//
//  Created by Juan Manuel Serruya on 7/9/14.
//  Copyright (c) 2014 NativeInstrumentsTest. All rights reserved.
//

#ifndef __NativeInstrumentsTest__NIStringParser__
#define __NativeInstrumentsTest__NIStringParser__

#include <iostream>

class NIStringParser
{
    public:
        static unsigned int getNiCount(const char* inputString);
        static unsigned int getNiCount(const wchar_t* inputString);

};
#endif
