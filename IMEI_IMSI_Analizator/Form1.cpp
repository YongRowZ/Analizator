#include "Form1.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	IMEI_IMSI_Analizator::Form1 form;
	Application::Run(%form);
}

