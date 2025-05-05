#pragma once

#include "wx_import.h"
#include "cxx_import.h"

#include "child_panel.h"
class IFrameFactory
{
public:
    virtual ~IFrameFactory(){};

public:
    /// @brief 创建主窗口
    /// @param parent 主窗口的父窗口
    /// @param pos 主窗口的位置
    /// @param size 尺寸
    /// @return 主窗口指针
    virtual ChildPanel* CreateMainWnd(const wxPoint& pos,const wxSize& size, long style) = 0;
    virtual ChildPanel* CreateSideBar(const wxPoint& pos,const wxSize& size, long style) = 0;
    virtual ChildPanel* CreateToolBar(const wxPoint& pos,const wxSize& size, long style) = 0;
    virtual bool IsSupportReadOnly()=0;
};