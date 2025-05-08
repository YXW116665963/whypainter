#include "paint_log.h"
#include "panel_ui_info.h"

PaintLog::PaintLog()
:ChildPanel(m_mapPanelUiInfo[g_strPaintLogPanel].m_pos
    , m_mapPanelUiInfo[g_strPaintLogPanel].m_size
    , m_mapPanelUiInfo[g_strPaintLogPanel].m_style)
{

}

PaintLog::~PaintLog()
{

}

void PaintLog::OnPaint(wxPaintEvent &event)
{

}


wxBEGIN_EVENT_TABLE(PaintLog, wxPanel)
    EVT_PAINT  (PaintLog::OnPaint)
wxEND_EVENT_TABLE()