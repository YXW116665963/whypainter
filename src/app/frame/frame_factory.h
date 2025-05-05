#pragma once

#include "frame_factory_interface.h"
template<class MainWndT,class SideBarT,class ToolBarT>
class FrameFactory : public IFrameFactory
{
public:
    FrameFactory(bool bSupportReadOnly =false){};
    ~FrameFactory() override = default;
public:
    ChildPanel* CreateMainWnd(const wxPoint& pos,const wxSize& size, long style) override
    {
        return new MainWndT(pos,size,style);
    }
    ChildPanel* CreateSideBar(const wxPoint& pos,const wxSize& size, long style) override
    {
        return new SideBarT(pos,size,style);
    }
    ChildPanel* CreateToolBar(const wxPoint& pos,const wxSize& size, long style) override
    {
        return new ToolBarT(pos,size,style);
    }
    bool IsSupportReadOnly() override
    {
        return m_bSupportReadOnly;
    }
private:
    bool m_bSupportReadOnly;
    bool m_bEmptyPanel;

    
};