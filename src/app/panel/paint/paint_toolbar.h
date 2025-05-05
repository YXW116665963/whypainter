#pragma once

#include "wx_import.h"
#include "cxx_import.h"
#include "child_panel.h"
class PaintToolBar : public ChildPanel
{
public:
    PaintToolBar(const wxPoint& pos, const wxSize& size, long style);
    ~PaintToolBar();
    void OnPaint(wxPaintEvent &event);
    // void OnMouseMove(wxMouseEvent &event);
    // void OnMouseDown(wxMouseEvent &event);
    // void OnMouseUp(wxMouseEvent &event);
    // void OnMouseCaptureLost(wxMouseCaptureLostEvent& WXUNUSED(event));

private:
    wxDECLARE_EVENT_TABLE();//必要的事件响应声明
};