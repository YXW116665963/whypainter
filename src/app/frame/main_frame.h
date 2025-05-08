#pragma once

#include <wx/wx.h>
// #include "gui_header.h"
// #include "common_header.h"
// IDs for the controls and the menu commands
enum
{
    // menu items
    WNDEDA_Quit = wxID_EXIT,

    // it is important for the id corresponding to the "About" command to have
    // this standard value as otherwise it won't be handled properly under Mac
    // (where it is special and put into the "Apple" menu)
    WNDEDA_About = wxID_ABOUT
};



class MainFrame : public wxFrame
{
public:
    //MainFrame(wxWindow *parent);//设定父系中的坐标？实现？
    MainFrame();
    ~MainFrame();
    // event handlers (these functions should _not_ be virtual)
    void OnQuit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
private:


private:
    wxDECLARE_EVENT_TABLE();
};

