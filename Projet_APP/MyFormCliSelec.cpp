#include "pch.h"
#include "MyFormCliSelec.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void MainCliSelec(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name
    ProjetAPP::MyFormCliSelec form;
    Application::Run(% form);
}
