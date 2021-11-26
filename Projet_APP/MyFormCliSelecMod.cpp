#include "pch.h"
#include "MyFormCliSelecMod.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void MainCliSelecMod(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name
    ProjetAPP::MyFormCliSelecMod form;
    Application::Run(% form);
}