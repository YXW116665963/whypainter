#include "paint_canvas.h"
//:wxScrolledWindow(parent, wxID_ANY, pos, size,wxHSCROLL | wxVSCROLL)
PaintCanvas::PaintCanvas(const wxPoint &pos, const wxSize &size, long style)
:ChildPanel(pos, size, style)
{
    //m_owner = parent;
    
}

PaintCanvas::~PaintCanvas()
{
}


void PaintCanvas::OnPaint(wxPaintEvent &WXUNUSED(event))
{
}

void PaintCanvas::OnMouseMove(wxMouseEvent &event)
{
// #if wxUSE_STATUSBAR
//     {
//         wxClientDC dc(this);
//         PrepareDC(dc);
//         m_owner->PrepareDC(dc);

//         wxPoint pos = dc.DeviceToLogical(event.GetPosition());
//         wxPoint dipPos = dc.ToDIP(pos);
//         wxString str;
//         str.Printf( "Mouse position: %d,%d", pos.x, pos.y );
//         if ( pos != dipPos )
//             str += wxString::Format("; DIP position: %d,%d", dipPos.x, dipPos.y);
//         m_owner->SetStatusText( str );
//     }
// #endif
    


}

void PaintCanvas::OnMouseDown(wxMouseEvent &event)
{
}

void PaintCanvas::OnMouseUp(wxMouseEvent &event)
{
}

void PaintCanvas::OnMouseCaptureLost(wxMouseCaptureLostEvent &WXUNUSED)
{
}

wxBEGIN_EVENT_TABLE(PaintCanvas, wxPanel)
    EVT_PAINT  (PaintCanvas::OnPaint)
    EVT_MOTION (PaintCanvas::OnMouseMove)
    EVT_LEFT_DOWN (PaintCanvas::OnMouseDown)
    EVT_LEFT_UP (PaintCanvas::OnMouseUp)
    EVT_MOUSE_CAPTURE_LOST (PaintCanvas::OnMouseCaptureLost)
wxEND_EVENT_TABLE()