#pragma once

#include "common_header.h"
#include "gui_header.h"
//class PaintCanvas : public wxScrolledWindow
class PaintCanvas : public ChildPanel
{
public:
    PaintCanvas();
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

