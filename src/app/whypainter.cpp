#include <iostream>
#include "whypainter.h"
#include "frame_manager.h"
// using std::cout,std::endl;

WhyPainter::WhyPainter()
{
}

WhyPainter::~WhyPainter()
{
}

bool WhyPainter::OnInit()
{
    if ( !wxApp::OnInit() )
        return false;

    SINGLETON_PTR(FrameManager)->OpenFrame(g_strPaintFrame);
    return true;
}

wxIMPLEMENT_APP(WhyPainter);