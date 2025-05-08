#pragma once
#include "main_frame.h"
#include "frame_factory.h"//没带；号导致报错？？？

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
    // 窗口子模板实例
    typedef std::vector<ChildPanel*> FrameChildPanel;
    std::map<std::string,FrameChildPanel> m_mapFrameChildPanel;

    // 模板工厂
    typedef std::map<const std::string,IFrameFactory*> FrameFactoryMap;
    FrameFactoryMap m_mapFrameFactory;
};


