#include "main_frame.h"
#include "common_header.h"
#include "gui_header.h"
MainFrame::MainFrame()
: wxFrame(nullptr, wxID_ANY
    , m_mainFrameUiInfo.m_name
    ,m_mainFrameUiInfo.m_pos
    , m_mainFrameUiInfo.m_size)
{
    // create a menu bar
    wxMenu *fileMenu = new wxMenu;
    // the "About" item should be in the help menu
    wxMenu *helpMenu = new wxMenu;
    helpMenu->Append(WNDEDA_About, "&About\tF1", "Show about dialog");
    fileMenu->Append(WNDEDA_Quit, "E&xit\tAlt-X", "Quit this program");
    // now append the freshly created menu to the menu bar...
    wxMenuBar *menuBar = new wxMenuBar();
    menuBar->Append(fileMenu, "&File");
    menuBar->Append(helpMenu, "&Help");
    SetMenuBar(menuBar);// ... and attach this menu bar to the frame

    // create a status bar just for fun (by default with 1 pane only)
    CreateStatusBar(2);
    SetStatusText("Welcome to wxWidgets!");
    Show();
}

MainFrame::~MainFrame()
{
}

void MainFrame::OnQuit(wxCommandEvent &event)
{
    Close();
}

void MainFrame::OnAbout(wxCommandEvent &event)
{
    wxMessageBox(wxString::Format
        (
           "Welcome to %s!\n"
           "\n"
           "This is the minimal wxWidgets sample\n"
           "running under %s.",
           wxVERSION_STRING,
           wxGetOsDescription()
        ),
        "About wxWidgets minimal sample",
        wxOK | wxICON_INFORMATION,
        this);
}

wxBEGIN_EVENT_TABLE(MainFrame, wxFrame)
    EVT_MENU(WNDEDA_Quit,  MainFrame::OnQuit)
    EVT_MENU(WNDEDA_About, MainFrame::OnAbout)
wxEND_EVENT_TABLE()