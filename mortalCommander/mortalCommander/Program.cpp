
#include "MainForm.h"

using namespace mortalCommander;

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main() 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MainForm());
}