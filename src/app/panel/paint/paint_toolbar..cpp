#include "paint_toolbar.h"


PaintToolBar::PaintToolBar():ChildPanel
(m_mapPanelUiInfo[g_strPaintSideBarPanel].m_pos
    , m_mapPanelUiInfo[g_strPaintSideBarPanel].m_size
    , m_mapPanelUiInfo[g_strPaintSideBarPanel].m_style)
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