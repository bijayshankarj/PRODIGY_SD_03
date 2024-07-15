#include "SimpleContactManagementSystem.h"
using namespace System::Data::SqlClient;
using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SimpleContactManagementSystem::SimpleContactManagementSystem form;
	Application::Run(% form);
}