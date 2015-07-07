//
//  SQSchedularProtocol.h
//  
//
//  Created by Bradley Clayton on 7/30/12.
//  Copyright (c) 2012 Squarepolka. All rights reserved.
//

#ifndef SQSchedularProtocol_h
#define SQSchedularProtocol_h

#include "Arduino.h"

class SQSchedularProtocol
{
public:
    // Configuration events
    virtual unsigned int executionInterval() = 0;
    
    // Clock events
    virtual void loop() = 0;
};

#endif