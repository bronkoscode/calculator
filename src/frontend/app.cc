#include <app.h>
#include <window.h>

bool App::OnInit()
{
    MyFrame*  frame = new Window();
    frame->Show();
    return true;
}
