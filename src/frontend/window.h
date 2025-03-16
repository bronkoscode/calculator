#pragma once
#include <wx/wx.h>

class Window : public wxFrame
{
    public:
        Window();
    private:
        void OnHello(wxCommandEvent& event);
        void OnExit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
};
