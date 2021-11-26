#include "pch.h"
#include "MyFormStoSelecMod.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void MainStoSelecMod(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name
    ProjetAPP::MyFormStoSelecMod form;
    Application::Run(% form);
}