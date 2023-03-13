#include "windowM.h"

using namespace System;
using namespace System::Windows::Forms;


int main()
{
	
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();


	MyProgram::windowM form;
	Application::Run(% form);


	return 0;
}