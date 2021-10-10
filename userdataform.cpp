#include "userdataform.h"



using namespace measAccurecy;
using namespace System;
using namespace System::Windows::Forms;

       
[STAThreadAttribute]
int main(cli::array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    measAccurecy::userdataform form;
    Application::Run(%form);
    return 0;
}


