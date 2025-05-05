#pragma once

#include "wx_import.h"
#include "cxx_import.h"
#include "child_panel.h"
//class PaintCanvas : public wxScrolledWindow
class PaintCanvas : public ChildPanel
{
public:
    PaintCanvas(const wxPoint& pos, const wxSize& size, long style);
    ~PaintCanvas();
    void OnPaint(wxPaintEvent &WXUNUSED(event));
    void OnMouseMove(wxMouseEvent &event);
    void OnMouseDown(wxMouseEvent &event);
    void OnMouseUp(wxMouseEvent &event);
    void OnMouseCaptureLost(wxMouseCaptureLostEvent& WXUNUSED(event));

private:
    //MyTextCtrl    *m_tab;
    wxDECLARE_EVENT_TABLE();//必要的事件响应声明
};

