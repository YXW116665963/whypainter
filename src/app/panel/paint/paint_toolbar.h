#pragma once
#include "common_header.h"
#include "gui_header.h"
class PaintToolBar : public ChildPanel
{
public:
    PaintToolBar();
    ~PaintToolBar();
    void OnPaint(wxPaintEvent &event);
    // void OnMouseMove(wxMouseEvent &event);
    // void OnMouseDown(wxMouseEvent &event);
    // void OnMouseUp(wxMouseEvent &event);
    // void OnMouseCaptureLost(wxMouseCaptureLostEvent& WXUNUSED(event));

private:
    wxDECLARE_EVENT_TABLE();//必要的事件响应声明
};