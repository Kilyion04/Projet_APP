#include "pch.h"
#include "MyFormPersoSelec.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void MainPersoSelec(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name
    ProjetAPP::MyFormPersoSelec form;
    Application::Run(% form);
}
