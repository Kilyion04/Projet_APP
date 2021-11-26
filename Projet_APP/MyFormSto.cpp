#include "pch.h"
#include "MyFormSto.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void MainSto(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name
    ProjetAPP::MyFormSto form;
    Application::Run(% form);
}