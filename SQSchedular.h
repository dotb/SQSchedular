//
//  SQSchedular.h
//  
//
//  Created by Bradley Clayton on 7/30/12.
//  Copyright (c) 2012 Squarepolka. All rights reserved.
//

#ifndef SQSchedular_h
#define SQSchedular_h

#include "Arduino.h"
#include "SQSchedularProtocol.h"

class SQSchedular
{
public:
    SQSchedular();
    virtual void start();
    void addTask(SQSchedularProtocol *task);
    
private:
    SQSchedularProtocol *tasks[5];
    unsigned int numberOfTasks;
};

#endif