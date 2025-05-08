#include "frame_manager.h"
#include "paint_canvas.h"
#include "paint_toolbar.h"
#include "paint_sidebar.h"
#include "paint_log.h"
#include "preview_fileshow.h"
#include "preview_toolbar.h"
#include "preview_sidebar.h"

FrameManager::FrameManager()
{
    m_mapFrameFactory = {
        {g_strPaintFrame,new FrameFactory<PaintCanvas,PaintSideBar,PaintToolBar,PaintLog>()},
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

    for(auto m_pPanel:m_mapFrameChildPanel[frameName])
    {
        m_pPanel->Close();
    }
    
};

void FrameManager::CreateFrame(std::string frameName, bool beHide)
{
    IFrameFactory* pFrameFactory = m_mapFrameFactory[frameName];

    FrameChildPanel m_vecPanels = pFrameFactory->CreatePanels();
    m_mapFrameChildPanel.insert(std::make_pair(frameName, m_vecPanels));
};

void FrameManager::ShowFrame(std::string frameName)
{
    if (!FindFrame(frameName))
        return;

    for(auto m_pPanel:m_mapFrameChildPanel[frameName])
    {
        m_pPanel->Show();
    }
};

bool FrameManager::FindFrame(std::string frameName)
{
    if(m_mapFrameChildPanel.find(frameName) != m_mapFrameChildPanel.end())
        return true;
    else
        return false;
};
