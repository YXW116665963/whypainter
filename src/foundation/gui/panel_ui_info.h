#pragma once

#include "wx_import.h"
#include "cxx_import.h"

inline const std::string g_strPaintCanvasPanel{ "PaintCanvasPanel" };           //画板子窗口
inline const std::string g_strPaintLogPanel{ "PaintLogPanel" };                 //底部日志子窗口
inline const std::string g_strPaintSideBarPanel{ "PaintSideBarPanel" };         //侧边绘图栏子窗口
inline const std::string g_strPaintToolBarPanel{ "PaintToolBarPanel" };         //顶部工具栏子窗口

//
typedef struct PanelUiInfo
{
    wxPoint m_pos;
    wxSize m_size;
    long m_style;
}PanelInfo;
typedef std::map<std::string, PanelInfo> PanelUiInfoMap;
//wxSize(1280,1024)
inline PanelUiInfoMap m_mapPanelUiInfo = {
    {g_strPaintCanvasPanel,{wxPoint(180, 24), wxSize(1080, 800), wxHSCROLL | wxVSCROLL}},
    {g_strPaintLogPanel,{wxPoint(180, 834), wxSize(1080, 180), wxHSCROLL | wxVSCROLL}},
    {g_strPaintSideBarPanel,{wxPoint(0, 24), wxSize(170, 990), wxHSCROLL | wxVSCROLL}},
    {g_strPaintToolBarPanel,{wxPoint(0, 0), wxSize(1280, 24), wxHSCROLL | wxVSCROLL}},
};