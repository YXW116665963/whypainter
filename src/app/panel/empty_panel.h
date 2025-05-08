#pragma once
#include "common_header.h"
#include "gui_header.h"
class EmptyPanel : public ChildPanel
{
public:
    EmptyPanel(const wxPoint& pos, const wxSize& size, long style);
    ~EmptyPanel();
private:
}; 