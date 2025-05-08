#pragma once

#include "common_header.h"
#include "gui_header.h"
class IFrameFactory
{
public:
    virtual ~IFrameFactory(){};

public:
    virtual std::vector<ChildPanel*> CreatePanels()=0;
    virtual bool IsSupportReadOnly()=0;
};