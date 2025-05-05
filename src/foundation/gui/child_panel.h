#pragma once
#include "wx_import.h"

enum class PanelType
{
    MainWnd,
    SideBar,
    ToolBar,
};

class ChildPanel : public wxPanel
{
public:
    ChildPanel(const wxPoint& pos, const wxSize& size, long style);
    ~ChildPanel();
    wxTextCtrl* m_pTextTag;//标签
private:
    wxFrame* m_pMainWxFrame;//持有主窗口退化类型
    //wxTextCtrl(parent, id, value, pos, size, style)
};



