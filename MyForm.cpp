#include "MyForm.h"
#include "Professor.h"
#include "AttendanceRecord.h"
#include "Staff.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace ProjectTEACH;
using namespace std;
[STAThread]

int main()
{
	Application::Run(gcnew MyForm());

	return 0;
} 