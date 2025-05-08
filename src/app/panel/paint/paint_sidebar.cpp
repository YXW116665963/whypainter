#include "paint_sidebar.h"
#include "panel_ui_info.h"

PaintSideBar::PaintSideBar()
:ChildPanel(m_mapPanelUiInfo[g_strPaintSideBarPanel].m_pos
    , m_mapPanelUiInfo[g_strPaintSideBarPanel].m_size
    , m_mapPanelUiInfo[g_strPaintSideBarPanel].m_style)
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