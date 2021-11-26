#include "pch.h"
#include "MyFormComSelec.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void MainComSelec(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name
    ProjetAPP::MyFormComSelec form;
    Application::Run(% form);
}
