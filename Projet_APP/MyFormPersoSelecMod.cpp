#include "pch.h"
#include "MyFormPersoSelecMod.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void MainPersoSelecMod(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name
    ProjetAPP::MyFormPersoSelecMod form;
    Application::Run(% form);
}