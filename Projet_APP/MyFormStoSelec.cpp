#include "pch.h"
#include "MyFormStoSelec.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void MainStoSelec(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name
    ProjetAPP::MyFormStoSelec form;
    Application::Run(% form);
}
