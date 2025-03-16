#include <iostream>

#include <wx/wx.h>

#include <window.h>
#include <app.h>
#include <sum.h>

class MyFrame : wxFrame {
public:
  MyFrame();
  MyFrame(MyFrame &&) = default;
  MyFrame(const MyFrame &) = default;
  MyFrame &operator=(MyFrame &&) = default;
  MyFrame &operator=(const MyFrame &) = default;
  ~MyFrame();

private:
  void OnHello(wxCommandEvent& e);
  void OnExit(wxCommandEvent& e);
  void OnAbout(wxCommandEvent& e);
};

MyFrame::MyFrame() {
}

MyFrame::~MyFrame() {
}

class MyApp : public wxApp
{
  public:
    bool OnInit() override;
}

bool MyApp::OnInit()
{
  MyFrame *frame = new MyFrame(); 
  frame->Show();
  return true;
}

wxIMPLEMENT_APP(MyApp);
