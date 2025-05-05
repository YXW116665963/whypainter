#include "frame_manager.h"
#include "paint_canvas.h"
#include "paint_toolbar.h"
#include "paint_sidebar.h"
#include "preview_fileshow.h"
#include "preview_toolbar.h"
#include "preview_sidebar.h"

FrameManager::FrameManager()
{
    m_mapFrameFactory=
    {
        //{g_strPreviewFrame,new FrameFactory<PreviewFileShow,PreviewSideBar,PreviewToolBar>()},
        {g_strPaintFrame,new FrameFactory<PaintCanvas,PaintSideBar,PaintToolBar>()},
    };
};

FrameManager::~FrameManager()
{
};

void FrameManager::OpenFrame(std::string frameName, bool beHide)
{
    if (!FindFrame(frameName))
        CreateFrame(frameName, beHide);

    ShowFrame(frameName);
};

void FrameManager::CloseFrame(std::string frameName)
{
    if (!FindFrame(frameName))
        return;
    m_mapFrameInfo[frameName].m_pMainWnd->Close();
    m_mapFrameInfo[frameName].m_pSideBar->Close();
    m_mapFrameInfo[frameName].m_pToolBar->Close();

    
};

void FrameManager::CreateFrame(std::string frameName, bool beHide)
{
    IFrameFactory* pFrameFactory = m_mapFrameFactory[frameName];
    FrameInfo m_fFrameInfo;
    m_fFrameInfo.m_pMainWnd 
    = pFrameFactory->CreateMainWnd(wxPoint(150, 20), wxSize(650, 580), wxHSCROLL | wxVSCROLL);

    m_fFrameInfo.m_pSideBar 
    = pFrameFactory->CreateSideBar(wxPoint(0, 20), wxSize(150, 580), wxHSCROLL | wxVSCROLL);

    m_fFrameInfo.m_pToolBar 
    = pFrameFactory->CreateToolBar(wxPoint(0, 0), wxSize(800, 20), wxHSCROLL | wxVSCROLL);

    m_mapFrameInfo.insert(std::make_pair(frameName, std::move(m_fFrameInfo)));
};

void FrameManager::ShowFrame(std::string frameName)
{
    if (!FindFrame(frameName))
        return;

    m_mapFrameInfo[frameName].m_pMainWnd->Show();
    m_mapFrameInfo[frameName].m_pSideBar->Show();
    m_mapFrameInfo[frameName].m_pToolBar->Show();
};

bool FrameManager::FindFrame(std::string frameName)
{
    if(m_mapFrameInfo.find(frameName) != m_mapFrameInfo.end())
        return true;
    else
        return false;
};
