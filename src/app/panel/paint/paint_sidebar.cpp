#include "paint_sidebar.h"


PaintSideBar::PaintSideBar(const wxPoint & pos, const wxSize & size, long style)
:ChildPanel(pos, size, style)
{

}


PaintSideBar::~PaintSideBar()
{

}

void PaintSideBar::OnPaint(wxPaintEvent &event)
{

}


wxBEGIN_EVENT_TABLE(PaintSideBar, wxPanel)
    EVT_PAINT  (PaintSideBar::OnPaint)
wxEND_EVENT_TABLE()