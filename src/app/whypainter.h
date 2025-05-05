#pragma once

#include "wx_import.h"
#include "main_frame.h"

class WhyPainter : public wxApp
{
public:
    // Constructor
    WhyPainter();
    // Destructor
    ~WhyPainter();

    virtual bool OnInit() override;

private:
    MainFrame* m_pMainFrame;
};

