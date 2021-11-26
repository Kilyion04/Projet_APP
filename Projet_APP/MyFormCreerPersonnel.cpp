#include "pch.h"
#include "MyFormCreerPersonnel.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void MainCreationPersonnel(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name
    ProjetAPP::MyFormCreerPersonnel form;
    Application::Run(% form);
}