//
//  SQSchedular.cpp
//  
//
//  Created by Bradley Clayton on 7/30/12.
//  Copyright (c) 2012 Squarepolka. All rights reserved.
//


#include "SQSchedular.h"

SQSchedular::SQSchedular()
{
    numberOfTasks = 0;
}

void SQSchedular::addTask(SQSchedularProtocol *task)
{
    tasks[numberOfTasks] = task;
    numberOfTasks++;
}

void SQSchedular::start()
{
    for (;;)
    {
        for (int i = 0; i < numberOfTasks; i++)
        {
            tasks[i]->loop();
        }
    }
}