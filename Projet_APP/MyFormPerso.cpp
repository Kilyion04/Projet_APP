#include "pch.h"
#include "MyFormPerso.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void MainPerso(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name
    ProjetAPP::MyFormPerso form;
    Application::Run(% form);
}