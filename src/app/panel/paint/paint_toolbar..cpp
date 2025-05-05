#include "paint_toolbar.h"


PaintToolBar::PaintToolBar(const wxPoint & pos, const wxSize & size, long style)
:ChildPanel(pos, size, style)
{

}


PaintToolBar::~PaintToolBar()
{

}

void PaintToolBar::OnPaint(wxPaintEvent &event)
{

}

wxBEGIN_EVENT_TABLE(PaintToolBar, wxPanel)
    EVT_PAINT  (PaintToolBar::OnPaint)
wxEND_EVENT_TABLE()