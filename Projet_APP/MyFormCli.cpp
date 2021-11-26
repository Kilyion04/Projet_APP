#include "pch.h"
#include "MyFormCli.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void MainCli(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name
    ProjetAPP::MyFormCli form;
    Application::Run(% form);
}