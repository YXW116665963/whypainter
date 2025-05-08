#include "child_panel.h"
#include "cxx_import.h"
#include "main_frame.h"
#include "singleton.h"
ChildPanel::ChildPanel(const wxPoint &pos, const wxSize &size, long style)
:wxPanel(SINGLETON_PTR(MainFrame), wxID_ANY, pos, size, style)
{
    m_pTextTag=new wxTextCtrl(this, wxID_ANY, wxString("paneltag"), pos, size, style);
}

ChildPanel::~ChildPanel()
{

}
