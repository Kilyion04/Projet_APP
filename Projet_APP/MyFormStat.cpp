#include "pch.h"
#include "MyFormStat.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void MainStat(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name
    ProjetAPP::MyFormStat form;
    Application::Run(% form);
}