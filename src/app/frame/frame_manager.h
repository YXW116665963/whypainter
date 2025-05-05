#pragma once

#include "wx_import.h"
#include "cxx_import.h"
#include "main_frame.h"
#include "frame_factory.h"//没带；号导致报错？？？
const std::string g_strPreviewFrame{ "PreviewFrame" };     //预览选择界面
const std::string g_strPaintFrame{ "PaintFrame" };       //绘图界面

typedef struct FrameInfo
{
    ChildPanel* m_pMainWnd;
    ChildPanel* m_pSideBar;
    ChildPanel* m_pToolBar;
    FrameInfo(){};
    // 移动构造函数
    FrameInfo(FrameInfo&& other) noexcept {
        m_pMainWnd=other.m_pMainWnd;
        m_pSideBar=other.m_pSideBar;
        m_pToolBar=other.m_pToolBar;
        other.m_pMainWnd=nullptr;
        other.m_pSideBar=nullptr;
        other.m_pToolBar=nullptr;
    }
}FrameInfo;


class FrameManager
{
public:
    FrameManager();
    ~FrameManager();
    MainFrame *m_pCurFrame;
    void OpenFrame(std::string frameName,bool beHide=true);
    void CloseFrame(std::string frameName);
private:
    void CreateFrame(std::string frameName,bool beHide);
    void ShowFrame(std::string frameName);
    bool FindFrame(std::string frameName);
private:
    std::map<std::string, FrameInfo> m_mapFrameInfo;

    typedef std::map<const std::string,IFrameFactory*> FrameFactoryMap;
    FrameFactoryMap m_mapFrameFactory;
};
