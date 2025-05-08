#pragma once

#include "frame_factory_interface.h"
template <typename... Args>
class FrameFactory : public IFrameFactory
{
public:
    FrameFactory(bool bSupportReadOnly =false){};
    ~FrameFactory() override = default;
public:
    std::vector<ChildPanel*> CreatePanels() override
    {
        std::vector<ChildPanel*> m_vecPanels;
        (CreatePanel<Args>(m_vecPanels),...);
        return m_vecPanels;
    }
    bool IsSupportReadOnly() override
    {
        return m_bSupportReadOnly;
    }
private:
    bool m_bSupportReadOnly;
    bool m_bEmptyPanel;

    template <typename T>
    void CreatePanel(std::vector<ChildPanel*>& panels)
    {
        panels.push_back(new T());
    };
};