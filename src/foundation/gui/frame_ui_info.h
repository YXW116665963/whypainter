#pragma once

#include "wx_import.h"
#include "cxx_import.h"

inline const std::string g_strPreviewFrame{ "PreviewFrame" };                  //预览窗口
inline const std::string g_strPaintFrame{ "PaintFrame" };                      //绘图窗口
typedef struct FrameUiInfo
{
    wxString m_name;
    wxPoint m_pos;
    wxSize m_size;
}FrameUiInfo;


//extern FrameUiInfo m_mainFrameUiInfo;
inline FrameUiInfo m_mainFrameUiInfo{wxString("whypainter"),wxPoint(0, 0), wxSize(1280, 1024)};