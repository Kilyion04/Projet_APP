#include "pch.h"
#include "MyFormCom.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void MainCom(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name
    ProjetAPP::MyFormCom form;
    Application::Run(% form);
}