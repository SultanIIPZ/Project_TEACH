#pragma once
#include <iostream>
#include "Professor.h"
#include "Staff.h"
#include "AttendanceRecord.h"
#include "AttendanceSystem.h"
//#include <msclr/marshal_cppstd.h>

using namespace std;


//My Codes//
// 
//INPUT: std::string; OUTPUT SYSTEM::String^//
static System::String^ convertertoString(std::string temporary) {
	return gcnew String(temporary.c_str());
}
//static std::string convertS(String^ temporary)
//{
//	return msclr::interop::marshal_as<std::string>(temporary);
//}
// 
//int to String^//
String^ intToString(int temporary) {
	string tempString = to_string(temporary);
	String^ newString = convertertoString(tempString);

	return newString;
}
//
//variables//
//
Professor prof1, prof2;
Staff staff1;
AttendanceRecord attendanceRecord;
AttendanceSystem attendanceSystem;
string details;
string theRoom;
string theDay;
string theTime;
int UpdateNumber;
string theProfID;
string theStaffID;
string oldStatus;
string theStatus;
string* statusAddress;
int flag = 0;
int prof = 0;


namespace ProjectTEACH {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;




	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			this->LogInPanel->Show();
			this->label5->Hide();
			this->LogInPanel->BringToFront();
			this->ProfessorPanel->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ LoginPassword;

	private: System::Windows::Forms::TextBox^ LoginName;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;


	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ ProfessorPanel;
	private: System::Windows::Forms::Panel^ LogInPanel;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ Home;
	private: System::Windows::Forms::Button^ LogOut;

	private: System::Windows::Forms::Button^ Profile;
	private: System::Windows::Forms::Panel^ ProfDetails;
	private: System::Windows::Forms::Label^ XProfDetails;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Panel^ ProfChangeDetail;

	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Panel^ panel11;

	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Panel^ panel10;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Panel^ StaffPanel;
private: System::Windows::Forms::Panel^ panel17;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Panel^ panel18;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::Panel^ panel19;
private: System::Windows::Forms::Panel^ panel22;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::Panel^ panel23;
private: System::Windows::Forms::Panel^ panel20;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::Panel^ panel21;
private: System::Windows::Forms::Panel^ panel24;
private: System::Windows::Forms::Label^ label40;

private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::Panel^ panel25;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::Panel^ SelectSectionPannel;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::Button^ button20;

private: System::Windows::Forms::Panel^ panel26;
private: System::Windows::Forms::Panel^ panel27;
private: System::Windows::Forms::Label^ label48;
private: System::Windows::Forms::Label^ label53;
private: System::Windows::Forms::Label^ label51;
private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::Label^ label50;
private: System::Windows::Forms::Label^ label54;
private: System::Windows::Forms::Label^ label55;
private: System::Windows::Forms::Label^ label60;
private: System::Windows::Forms::Label^ label61;
private: System::Windows::Forms::Button^ button26;
private: System::Windows::Forms::Button^ button27;
private: System::Windows::Forms::Button^ button24;
private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::Button^ button22;

private: System::Windows::Forms::Button^ button31;
private: System::Windows::Forms::Button^ button32;
private: System::Windows::Forms::Button^ button29;
private: System::Windows::Forms::Button^ button30;
private: System::Windows::Forms::Button^ button28;
private: System::Windows::Forms::Button^ button36;
private: System::Windows::Forms::Panel^ N301Panel;

private: System::Windows::Forms::Button^ button33;
private: System::Windows::Forms::Button^ button35;
private: System::Windows::Forms::Button^ button34;
private: System::Windows::Forms::Button^ button37;
private: System::Windows::Forms::Button^ button38;
private: System::Windows::Forms::Button^ button39;
private: System::Windows::Forms::Button^ button40;
private: System::Windows::Forms::Button^ button42;
private: System::Windows::Forms::Button^ button41;
private: System::Windows::Forms::Button^ button43;
private: System::Windows::Forms::Button^ button44;
private: System::Windows::Forms::Panel^ N303Panel;

private: System::Windows::Forms::Button^ button49;

private: System::Windows::Forms::Button^ button51;

private: System::Windows::Forms::Button^ button53;
private: System::Windows::Forms::Button^ button56;
private: System::Windows::Forms::Button^ button55;
private: System::Windows::Forms::Button^ button52;
private: System::Windows::Forms::Button^ button54;
private: System::Windows::Forms::Panel^ panel28;
private: System::Windows::Forms::Label^ label57;

private: System::Windows::Forms::Panel^ panel29;
private: System::Windows::Forms::Panel^ panel30;
private: System::Windows::Forms::Button^ button45;
private: System::Windows::Forms::Label^ label58;
private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
private: System::Windows::Forms::Button^ button46;
private: System::Windows::Forms::Label^ label56;
private: System::Windows::Forms::Button^ button47;
private: System::Windows::Forms::Button^ button57;
private: System::Windows::Forms::Button^ button50;
private: System::Windows::Forms::Button^ button48;
private: System::Windows::Forms::Button^ button58;
private: System::Windows::Forms::Label^ label59;
private: System::Windows::Forms::Panel^ panel31;
private: System::Windows::Forms::Panel^ panel32;
private: System::Windows::Forms::Label^ label62;
private: System::Windows::Forms::Label^ label64;
private: System::Windows::Forms::Label^ label63;
private: System::Windows::Forms::Panel^ panel33;
private: System::Windows::Forms::Label^ label65;
private: System::Windows::Forms::Label^ label66;
private: System::Windows::Forms::Panel^ panel34;

private: System::Windows::Forms::Label^ label67;
private: System::Windows::Forms::Label^ label73;
private: System::Windows::Forms::Label^ label72;
private: System::Windows::Forms::Label^ label71;
private: System::Windows::Forms::Label^ label70;
private: System::Windows::Forms::Label^ label69;
private: System::Windows::Forms::Label^ label68;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->Profile = (gcnew System::Windows::Forms::Button());
			this->Home = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->LogOut = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->LoginPassword = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->LoginName = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->ProfessorPanel = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->ProfChangeDetail = (gcnew System::Windows::Forms::Panel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->ProfDetails = (gcnew System::Windows::Forms::Panel());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->XProfDetails = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->LogInPanel = (gcnew System::Windows::Forms::Panel());
			this->StaffPanel = (gcnew System::Windows::Forms::Panel());
			this->panel33 = (gcnew System::Windows::Forms::Panel());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->panel34 = (gcnew System::Windows::Forms::Panel());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->N301Panel = (gcnew System::Windows::Forms::Panel());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->N303Panel = (gcnew System::Windows::Forms::Panel());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->SelectSectionPannel = (gcnew System::Windows::Forms::Panel());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->panel31 = (gcnew System::Windows::Forms::Panel());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->panel32 = (gcnew System::Windows::Forms::Panel());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->panel28 = (gcnew System::Windows::Forms::Panel());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->panel30 = (gcnew System::Windows::Forms::Panel());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->panel29 = (gcnew System::Windows::Forms::Panel());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel6->SuspendLayout();
			this->ProfessorPanel->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel14->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel8->SuspendLayout();
			this->ProfChangeDetail->SuspendLayout();
			this->ProfDetails->SuspendLayout();
			this->LogInPanel->SuspendLayout();
			this->StaffPanel->SuspendLayout();
			this->panel33->SuspendLayout();
			this->panel34->SuspendLayout();
			this->panel22->SuspendLayout();
			this->panel20->SuspendLayout();
			this->panel18->SuspendLayout();
			this->panel17->SuspendLayout();
			this->panel25->SuspendLayout();
			this->panel27->SuspendLayout();
			this->panel26->SuspendLayout();
			this->N301Panel->SuspendLayout();
			this->N303Panel->SuspendLayout();
			this->SelectSectionPannel->SuspendLayout();
			this->panel24->SuspendLayout();
			this->panel31->SuspendLayout();
			this->panel32->SuspendLayout();
			this->panel28->SuspendLayout();
			this->panel30->SuspendLayout();
			this->panel29->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 56.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(637, 130);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(266, 100);
			this->label1->TabIndex = 0;
			this->label1->Text = L"TEACH";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->label4);
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(397, 825);
			this->panel1->TabIndex = 1;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(30, 49);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(343, 510);
			this->label4->TabIndex = 0;
			this->label4->Text = resources->GetString(L"label4.Text");
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// panel3
			// 
			this->panel3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Controls->Add(this->Profile);
			this->panel3->Controls->Add(this->Home);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->LogOut);
			this->panel3->Location = System::Drawing::Point(38, 43);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(997, 80);
			this->panel3->TabIndex = 5;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel3_Paint);
			// 
			// Profile
			// 
			this->Profile->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Profile.BackgroundImage")));
			this->Profile->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Profile->FlatAppearance->BorderSize = 0;
			this->Profile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Profile->Location = System::Drawing::Point(736, 21);
			this->Profile->Name = L"Profile";
			this->Profile->Size = System::Drawing::Size(50, 48);
			this->Profile->TabIndex = 2;
			this->Profile->UseVisualStyleBackColor = true;
			this->Profile->Click += gcnew System::EventHandler(this, &MyForm::Profile_Click);
			// 
			// Home
			// 
			this->Home->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Home.BackgroundImage")));
			this->Home->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Home->FlatAppearance->BorderSize = 0;
			this->Home->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Home->Location = System::Drawing::Point(41, 19);
			this->Home->Name = L"Home";
			this->Home->Size = System::Drawing::Size(46, 41);
			this->Home->TabIndex = 1;
			this->Home->UseVisualStyleBackColor = true;
			this->Home->Click += gcnew System::EventHandler(this, &MyForm::Home_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(104, 26);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(370, 28);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Good day, Professor Carlos Hortinela";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// LogOut
			// 
			this->LogOut->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LogOut.BackgroundImage")));
			this->LogOut->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->LogOut->FlatAppearance->BorderSize = 0;
			this->LogOut->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LogOut->Location = System::Drawing::Point(905, 21);
			this->LogOut->Name = L"LogOut";
			this->LogOut->Size = System::Drawing::Size(41, 37);
			this->LogOut->TabIndex = 3;
			this->LogOut->UseVisualStyleBackColor = true;
			this->LogOut->Click += gcnew System::EventHandler(this, &MyForm::LogOut_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->LoginPassword);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->LoginName);
			this->panel2->Location = System::Drawing::Point(533, 336);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(471, 259);
			this->panel2->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(143, 211);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(209, 15);
			this->label5->TabIndex = 5;
			this->label5->Text = L"*Incorrect Name/Password. Try Again.\r\n";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// LoginPassword
			// 
			this->LoginPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->LoginPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginPassword->Location = System::Drawing::Point(25, 115);
			this->LoginPassword->Name = L"LoginPassword";
			this->LoginPassword->Size = System::Drawing::Size(428, 22);
			this->LoginPassword->TabIndex = 4;
			this->LoginPassword->UseSystemPasswordChar = true;
			this->LoginPassword->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)),
				static_cast<System::Int32>(static_cast<System::Byte>(84)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(25, 157);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(428, 37);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Log In";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(21, 87);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 20);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Password";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(21, 21);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 20);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Name";
			// 
			// LoginName
			// 
			this->LoginName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->LoginName->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginName->Location = System::Drawing::Point(25, 49);
			this->LoginName->Name = L"LoginName";
			this->LoginName->Size = System::Drawing::Size(428, 22);
			this->LoginName->TabIndex = 3;
			this->LoginName->TextChanged += gcnew System::EventHandler(this, &MyForm::LoginName_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->label6->Location = System::Drawing::Point(1032, 13);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(27, 29);
			this->label6->TabIndex = 4;
			this->label6->Text = L"x";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// panel4
			// 
			this->panel4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Controls->Add(this->button2);
			this->panel4->Location = System::Drawing::Point(38, 263);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(434, 332);
			this->panel4->TabIndex = 6;
			// 
			// panel5
			// 
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel5->Location = System::Drawing::Point(10, 14);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(412, 267);
			this->panel5->TabIndex = 8;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(10, 276);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(412, 45);
			this->button2->TabIndex = 0;
			this->button2->Text = L"View Schedule for the Day";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// panel6
			// 
			this->panel6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panel6->BackColor = System::Drawing::Color::Transparent;
			this->panel6->Controls->Add(this->panel7);
			this->panel6->Controls->Add(this->button3);
			this->panel6->Location = System::Drawing::Point(601, 263);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(434, 332);
			this->panel6->TabIndex = 9;
			this->panel6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel6_Paint);
			// 
			// panel7
			// 
			this->panel7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel7.BackgroundImage")));
			this->panel7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel7->Location = System::Drawing::Point(12, 14);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(412, 267);
			this->panel7->TabIndex = 8;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(12, 276);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(412, 45);
			this->button3->TabIndex = 0;
			this->button3->Text = L"Update Contact Info";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 17, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(42, 185);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(317, 31);
			this->label8->TabIndex = 10;
			this->label8->Text = L"What would you like to do\?";
			// 
			// ProfessorPanel
			// 
			this->ProfessorPanel->BackColor = System::Drawing::Color::Transparent;
			this->ProfessorPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ProfessorPanel.BackgroundImage")));
			this->ProfessorPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ProfessorPanel->Controls->Add(this->label8);
			this->ProfessorPanel->Controls->Add(this->panel6);
			this->ProfessorPanel->Controls->Add(this->panel4);
			this->ProfessorPanel->Controls->Add(this->panel3);
			this->ProfessorPanel->Controls->Add(this->panel9);
			this->ProfessorPanel->Controls->Add(this->panel8);
			this->ProfessorPanel->Controls->Add(this->ProfChangeDetail);
			this->ProfessorPanel->Controls->Add(this->ProfDetails);
			this->ProfessorPanel->Location = System::Drawing::Point(-1, -2);
			this->ProfessorPanel->Name = L"ProfessorPanel";
			this->ProfessorPanel->Size = System::Drawing::Size(1070, 749);
			this->ProfessorPanel->TabIndex = 11;
			this->ProfessorPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::ProfessorPanel_Paint);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->panel9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel9->Controls->Add(this->panel10);
			this->panel9->Controls->Add(this->label32);
			this->panel9->Controls->Add(this->label25);
			this->panel9->Controls->Add(this->button7);
			this->panel9->Controls->Add(this->button10);
			this->panel9->Controls->Add(this->button11);
			this->panel9->Controls->Add(this->button8);
			this->panel9->Controls->Add(this->button9);
			this->panel9->Controls->Add(this->button6);
			this->panel9->Controls->Add(this->panel16);
			this->panel9->Controls->Add(this->panel15);
			this->panel9->Controls->Add(this->panel14);
			this->panel9->Controls->Add(this->panel13);
			this->panel9->Controls->Add(this->panel12);
			this->panel9->Controls->Add(this->panel11);
			this->panel9->Location = System::Drawing::Point(38, 158);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(997, 586);
			this->panel9->TabIndex = 13;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::White;
			this->panel10->Controls->Add(this->label35);
			this->panel10->Controls->Add(this->label33);
			this->panel10->Location = System::Drawing::Point(0, 78);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(997, 508);
			this->panel10->TabIndex = 10;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::Color::Transparent;
			this->label35->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label35->Location = System::Drawing::Point(956, 10);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(21, 28);
			this->label35->TabIndex = 2;
			this->label35->Text = L"x";
			this->label35->Click += gcnew System::EventHandler(this, &MyForm::label35_Click);
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(44, 38);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(61, 21);
			this->label33->TabIndex = 0;
			this->label33->Text = L"label33";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::Color::White;
			this->label32->ForeColor = System::Drawing::Color::Black;
			this->label32->Location = System::Drawing::Point(366, 16);
			this->label32->Name = L"label32";
			this->label32->Padding = System::Windows::Forms::Padding(55, 7, 55, 7);
			this->label32->Size = System::Drawing::Size(259, 42);
			this->label32->TabIndex = 9;
			this->label32->Text = L"Choose the Day";
			this->label32->Click += gcnew System::EventHandler(this, &MyForm::label32_Click);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::Transparent;
			this->label25->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label25->Location = System::Drawing::Point(964, 2);
			this->label25->Margin = System::Windows::Forms::Padding(0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(21, 28);
			this->label25->TabIndex = 8;
			this->label25->Text = L"x";
			this->label25->Click += gcnew System::EventHandler(this, &MyForm::label25_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button7->Location = System::Drawing::Point(167, 78);
			this->button7->Name = L"button7";
			this->button7->Padding = System::Windows::Forms::Padding(2, 4, 1, 4);
			this->button7->Size = System::Drawing::Size(163, 57);
			this->button7->TabIndex = 1;
			this->button7->Text = L"Tuesday";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button10->Location = System::Drawing::Point(835, 78);
			this->button10->Name = L"button10";
			this->button10->Padding = System::Windows::Forms::Padding(2, 4, 1, 4);
			this->button10->Size = System::Drawing::Size(162, 57);
			this->button10->TabIndex = 5;
			this->button10->Text = L"Saturday";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button11->Location = System::Drawing::Point(668, 78);
			this->button11->Name = L"button11";
			this->button11->Padding = System::Windows::Forms::Padding(2, 4, 1, 4);
			this->button11->Size = System::Drawing::Size(163, 57);
			this->button11->TabIndex = 4;
			this->button11->Text = L"Friday";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button8->Location = System::Drawing::Point(501, 78);
			this->button8->Name = L"button8";
			this->button8->Padding = System::Windows::Forms::Padding(2, 4, 1, 4);
			this->button8->Size = System::Drawing::Size(163, 57);
			this->button8->TabIndex = 3;
			this->button8->Text = L"Thursday";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button9->Location = System::Drawing::Point(334, 78);
			this->button9->Name = L"button9";
			this->button9->Padding = System::Windows::Forms::Padding(2, 4, 1, 4);
			this->button9->Size = System::Drawing::Size(163, 57);
			this->button9->TabIndex = 2;
			this->button9->Text = L"Wednesday";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button6->Location = System::Drawing::Point(0, 78);
			this->button6->Name = L"button6";
			this->button6->Padding = System::Windows::Forms::Padding(2, 4, 1, 4);
			this->button6->Size = System::Drawing::Size(163, 57);
			this->button6->TabIndex = 0;
			this->button6->Text = L"Monday";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel16->Controls->Add(this->label31);
			this->panel16->Location = System::Drawing::Point(835, 136);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(162, 447);
			this->panel16->TabIndex = 7;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(20, 36);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(50, 17);
			this->label31->TabIndex = 5;
			this->label31->Text = L"label31";
			this->label31->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel15->Controls->Add(this->label30);
			this->panel15->Location = System::Drawing::Point(668, 135);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(163, 448);
			this->panel15->TabIndex = 6;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(19, 37);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(50, 17);
			this->label30->TabIndex = 4;
			this->label30->Text = L"label30";
			this->label30->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel14->Controls->Add(this->label29);
			this->panel14->Location = System::Drawing::Point(501, 135);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(163, 448);
			this->panel14->TabIndex = 5;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(22, 37);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(50, 17);
			this->label29->TabIndex = 3;
			this->label29->Text = L"label29";
			this->label29->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel13->Controls->Add(this->label28);
			this->panel13->Location = System::Drawing::Point(334, 136);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(163, 447);
			this->panel13->TabIndex = 5;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(23, 36);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(50, 17);
			this->label28->TabIndex = 2;
			this->label28->Text = L"label28";
			this->label28->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel12->Controls->Add(this->label27);
			this->panel12->Location = System::Drawing::Point(167, 135);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(163, 448);
			this->panel12->TabIndex = 4;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(22, 37);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(50, 17);
			this->label27->TabIndex = 1;
			this->label27->Text = L"label27";
			this->label27->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel11->Controls->Add(this->label26);
			this->panel11->Location = System::Drawing::Point(0, 136);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(163, 447);
			this->panel11->TabIndex = 3;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(24, 36);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(50, 17);
			this->label26->TabIndex = 0;
			this->label26->Text = L"label26";
			this->label26->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label26->Click += gcnew System::EventHandler(this, &MyForm::label26_Click);
			// 
			// panel8
			// 
			this->panel8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel8.BackgroundImage")));
			this->panel8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel8->Controls->Add(this->label24);
			this->panel8->Controls->Add(this->label23);
			this->panel8->Controls->Add(this->button5);
			this->panel8->Controls->Add(this->textBox3);
			this->panel8->Controls->Add(this->textBox2);
			this->panel8->Controls->Add(this->label22);
			this->panel8->Controls->Add(this->label21);
			this->panel8->Controls->Add(this->label20);
			this->panel8->Location = System::Drawing::Point(38, 158);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(997, 537);
			this->panel8->TabIndex = 4;
			this->panel8->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel8_Paint);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(958, 4);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(25, 31);
			this->label24->TabIndex = 7;
			this->label24->Text = L"x";
			this->label24->Click += gcnew System::EventHandler(this, &MyForm::label24_Click);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(329, 334);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(342, 21);
			this->label23->TabIndex = 6;
			this->label23->Text = L"*Your New Contact Information has been saved.";
			this->label23->Click += gcnew System::EventHandler(this, &MyForm::label23_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button5->Location = System::Drawing::Point(366, 264);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(259, 41);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Update";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->textBox3->Location = System::Drawing::Point(527, 162);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(430, 27);
			this->textBox3->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->textBox2->Location = System::Drawing::Point(57, 162);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(417, 27);
			this->textBox2->TabIndex = 3;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(522, 130);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(166, 28);
			this->label22->TabIndex = 2;
			this->label22->Text = L"Contact Number: ";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(52, 120);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(68, 28);
			this->label21->TabIndex = 1;
			this->label21->Text = L"Email: ";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(52, 69);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(341, 28);
			this->label20->TabIndex = 0;
			this->label20->Text = L"Please Enter New Contact Information";
			// 
			// ProfChangeDetail
			// 
			this->ProfChangeDetail->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ProfChangeDetail.BackgroundImage")));
			this->ProfChangeDetail->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ProfChangeDetail->Controls->Add(this->label19);
			this->ProfChangeDetail->Controls->Add(this->button4);
			this->ProfChangeDetail->Controls->Add(this->textBox1);
			this->ProfChangeDetail->Controls->Add(this->label18);
			this->ProfChangeDetail->Location = System::Drawing::Point(38, 171);
			this->ProfChangeDetail->Name = L"ProfChangeDetail";
			this->ProfChangeDetail->Size = System::Drawing::Size(997, 500);
			this->ProfChangeDetail->TabIndex = 12;
			this->ProfChangeDetail->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::ProfChangeDetail_Paint);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(370, 270);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(277, 28);
			this->label19->TabIndex = 3;
			this->label19->Text = L"*Incorrect Password. Try again.\r\n";
			this->label19->Click += gcnew System::EventHandler(this, &MyForm::label19_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button4->Location = System::Drawing::Point(294, 212);
			this->button4->Name = L"button4";
			this->button4->Padding = System::Windows::Forms::Padding(3);
			this->button4->Size = System::Drawing::Size(440, 44);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Verify";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_2);
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(294, 154);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(440, 31);
			this->textBox1->TabIndex = 1;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(288, 83);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(446, 31);
			this->label18->TabIndex = 0;
			this->label18->Text = L"Please enter your password for verification";
			this->label18->Click += gcnew System::EventHandler(this, &MyForm::label18_Click);
			// 
			// ProfDetails
			// 
			this->ProfDetails->BackColor = System::Drawing::Color::Transparent;
			this->ProfDetails->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ProfDetails.BackgroundImage")));
			this->ProfDetails->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ProfDetails->Controls->Add(this->label73);
			this->ProfDetails->Controls->Add(this->label72);
			this->ProfDetails->Controls->Add(this->label71);
			this->ProfDetails->Controls->Add(this->label70);
			this->ProfDetails->Controls->Add(this->label69);
			this->ProfDetails->Controls->Add(this->label68);
			this->ProfDetails->Controls->Add(this->label16);
			this->ProfDetails->Controls->Add(this->label14);
			this->ProfDetails->Controls->Add(this->label13);
			this->ProfDetails->Controls->Add(this->label12);
			this->ProfDetails->Controls->Add(this->label11);
			this->ProfDetails->Controls->Add(this->XProfDetails);
			this->ProfDetails->Controls->Add(this->label10);
			this->ProfDetails->Controls->Add(this->label17);
			this->ProfDetails->Controls->Add(this->label15);
			this->ProfDetails->Location = System::Drawing::Point(38, 185);
			this->ProfDetails->Name = L"ProfDetails";
			this->ProfDetails->Size = System::Drawing::Size(997, 500);
			this->ProfDetails->TabIndex = 11;
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->BackColor = System::Drawing::Color::Transparent;
			this->label73->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label73->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label73->Location = System::Drawing::Point(471, 264);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(114, 23);
			this->label73->TabIndex = 19;
			this->label73->Text = L"Professor ID\r\n";
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->BackColor = System::Drawing::Color::Transparent;
			this->label72->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label72->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label72->Location = System::Drawing::Point(471, 180);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(114, 23);
			this->label72->TabIndex = 18;
			this->label72->Text = L"Professor ID\r\n";
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->BackColor = System::Drawing::Color::Transparent;
			this->label71->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label71->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label71->Location = System::Drawing::Point(471, 98);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(60, 23);
			this->label71->TabIndex = 17;
			this->label71->Text = L"Name\r\n";
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label70->Location = System::Drawing::Point(471, 230);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(180, 23);
			this->label70->TabIndex = 16;
			this->label70->Text = L"Number of Absents:";
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label69->Location = System::Drawing::Point(471, 145);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(157, 23);
			this->label69->TabIndex = 15;
			this->label69->Text = L"Number of Lates:";
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label68->Location = System::Drawing::Point(471, 68);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(185, 23);
			this->label68->TabIndex = 14;
			this->label68->Text = L"Number of Presents:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(53, 309);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(157, 23);
			this->label16->TabIndex = 12;
			this->label16->Text = L"Contact Number:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(53, 230);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(61, 23);
			this->label14->TabIndex = 10;
			this->label14->Text = L"Email:";
			this->label14->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label13->Location = System::Drawing::Point(49, 180);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(114, 23);
			this->label13->TabIndex = 9;
			this->label13->Text = L"Professor ID\r\n";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(49, 147);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(119, 23);
			this->label12->TabIndex = 8;
			this->label12->Text = L"Professor ID:\r\n";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label11->Location = System::Drawing::Point(49, 102);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(60, 23);
			this->label11->TabIndex = 7;
			this->label11->Text = L"Name\r\n";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// XProfDetails
			// 
			this->XProfDetails->AutoSize = true;
			this->XProfDetails->BackColor = System::Drawing::Color::Transparent;
			this->XProfDetails->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->XProfDetails->ForeColor = System::Drawing::Color::DimGray;
			this->XProfDetails->Location = System::Drawing::Point(960, 14);
			this->XProfDetails->Name = L"XProfDetails";
			this->XProfDetails->Size = System::Drawing::Size(27, 29);
			this->XProfDetails->TabIndex = 5;
			this->XProfDetails->Text = L"x";
			this->XProfDetails->Click += gcnew System::EventHandler(this, &MyForm::XProfDetails_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(49, 69);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(65, 23);
			this->label10->TabIndex = 6;
			this->label10->Text = L"Name:\r\n";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click_1);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label17->Location = System::Drawing::Point(53, 342);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(114, 23);
			this->label17->TabIndex = 13;
			this->label17->Text = L"Professor ID\r\n";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label15->Location = System::Drawing::Point(53, 263);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(114, 23);
			this->label15->TabIndex = 11;
			this->label15->Text = L"Professor ID\r\n";
			// 
			// LogInPanel
			// 
			this->LogInPanel->BackColor = System::Drawing::Color::Transparent;
			this->LogInPanel->Controls->Add(this->panel2);
			this->LogInPanel->Controls->Add(this->label1);
			this->LogInPanel->Controls->Add(this->panel1);
			this->LogInPanel->Controls->Add(this->label6);
			this->LogInPanel->Location = System::Drawing::Point(-3, -4);
			this->LogInPanel->Name = L"LogInPanel";
			this->LogInPanel->Size = System::Drawing::Size(1075, 746);
			this->LogInPanel->TabIndex = 12;
			this->LogInPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::LogInPanel_Paint);
			// 
			// StaffPanel
			// 
			this->StaffPanel->BackColor = System::Drawing::Color::Transparent;
			this->StaffPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"StaffPanel.BackgroundImage")));
			this->StaffPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->StaffPanel->Controls->Add(this->panel33);
			this->StaffPanel->Controls->Add(this->panel22);
			this->StaffPanel->Controls->Add(this->panel20);
			this->StaffPanel->Controls->Add(this->label36);
			this->StaffPanel->Controls->Add(this->panel18);
			this->StaffPanel->Controls->Add(this->panel17);
			this->StaffPanel->Controls->Add(this->panel25);
			this->StaffPanel->Controls->Add(this->panel24);
			this->StaffPanel->Controls->Add(this->panel31);
			this->StaffPanel->Controls->Add(this->panel28);
			this->StaffPanel->Location = System::Drawing::Point(-1, -2);
			this->StaffPanel->Name = L"StaffPanel";
			this->StaffPanel->Size = System::Drawing::Size(1073, 749);
			this->StaffPanel->TabIndex = 13;
			this->StaffPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::StaffPanel_Paint);
			// 
			// panel33
			// 
			this->panel33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->panel33->Controls->Add(this->label65);
			this->panel33->Controls->Add(this->label66);
			this->panel33->Controls->Add(this->panel34);
			this->panel33->Location = System::Drawing::Point(40, 151);
			this->panel33->Name = L"panel33";
			this->panel33->Size = System::Drawing::Size(997, 544);
			this->panel33->TabIndex = 22;
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->BackColor = System::Drawing::Color::Transparent;
			this->label65->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label65->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label65->Location = System::Drawing::Point(963, 11);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(22, 28);
			this->label65->TabIndex = 6;
			this->label65->Text = L"x";
			this->label65->Click += gcnew System::EventHandler(this, &MyForm::label65_Click);
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label66->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label66->Location = System::Drawing::Point(26, 23);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(194, 28);
			this->label66->TabIndex = 4;
			this->label66->Text = L"Attendance Report";
			// 
			// panel34
			// 
			this->panel34->AutoScroll = true;
			this->panel34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel34->Controls->Add(this->label67);
			this->panel34->Location = System::Drawing::Point(0, 69);
			this->panel34->Name = L"panel34";
			this->panel34->Size = System::Drawing::Size(998, 475);
			this->panel34->TabIndex = 5;
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->BackColor = System::Drawing::Color::Transparent;
			this->label67->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label67->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label67->Location = System::Drawing::Point(26, 40);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(83, 28);
			this->label67->TabIndex = 7;
			this->label67->Text = L"label67";
			// 
			// panel22
			// 
			this->panel22->BackColor = System::Drawing::Color::White;
			this->panel22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel22.BackgroundImage")));
			this->panel22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel22->Controls->Add(this->button17);
			this->panel22->Controls->Add(this->panel23);
			this->panel22->Location = System::Drawing::Point(386, 227);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(299, 236);
			this->panel22->TabIndex = 18;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::White;
			this->button17->Location = System::Drawing::Point(0, 183);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(299, 53);
			this->button17->TabIndex = 17;
			this->button17->Text = L"Generate Attendace Report";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// panel23
			// 
			this->panel23->BackColor = System::Drawing::Color::White;
			this->panel23->Location = System::Drawing::Point(330, 0);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(332, 236);
			this->panel23->TabIndex = 16;
			// 
			// panel20
			// 
			this->panel20->BackColor = System::Drawing::Color::White;
			this->panel20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel20.BackgroundImage")));
			this->panel20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel20->Controls->Add(this->button16);
			this->panel20->Controls->Add(this->panel21);
			this->panel20->Location = System::Drawing::Point(736, 227);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(299, 236);
			this->panel20->TabIndex = 18;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::White;
			this->button16->Location = System::Drawing::Point(0, 183);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(299, 53);
			this->button16->TabIndex = 17;
			this->button16->Text = L"Generate Staff Report";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// panel21
			// 
			this->panel21->BackColor = System::Drawing::Color::White;
			this->panel21->Location = System::Drawing::Point(330, 0);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(332, 236);
			this->panel21->TabIndex = 16;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 18.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label36->Location = System::Drawing::Point(37, 162);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(296, 35);
			this->label36->TabIndex = 16;
			this->label36->Text = L"What do you want to do\?";
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::Color::White;
			this->panel18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel18.BackgroundImage")));
			this->panel18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel18->Controls->Add(this->button15);
			this->panel18->Controls->Add(this->panel19);
			this->panel18->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->panel18->Location = System::Drawing::Point(40, 227);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(299, 236);
			this->panel18->TabIndex = 15;
			this->panel18->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel18_Paint);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->Location = System::Drawing::Point(0, 183);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(299, 53);
			this->button15->TabIndex = 17;
			this->button15->Text = L"Check Attendance";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// panel19
			// 
			this->panel19->BackColor = System::Drawing::Color::White;
			this->panel19->Location = System::Drawing::Point(330, 0);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(332, 236);
			this->panel19->TabIndex = 16;
			// 
			// panel17
			// 
			this->panel17->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panel17->BackColor = System::Drawing::Color::White;
			this->panel17->Controls->Add(this->button12);
			this->panel17->Controls->Add(this->label34);
			this->panel17->Controls->Add(this->button14);
			this->panel17->Controls->Add(this->button13);
			this->panel17->Location = System::Drawing::Point(40, 37);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(997, 80);
			this->panel17->TabIndex = 14;
			// 
			// button12
			// 
			this->button12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.BackgroundImage")));
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Location = System::Drawing::Point(734, 15);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(50, 48);
			this->button12->TabIndex = 2;
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(104, 26);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(370, 28);
			this->label34->TabIndex = 0;
			this->label34->Text = L"Good day, Professor Carlos Hortinela";
			this->label34->Click += gcnew System::EventHandler(this, &MyForm::label34_Click);
			// 
			// button14
			// 
			this->button14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.BackgroundImage")));
			this->button14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Location = System::Drawing::Point(905, 21);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(41, 37);
			this->button14->TabIndex = 3;
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button13
			// 
			this->button13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.BackgroundImage")));
			this->button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Location = System::Drawing::Point(41, 19);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(46, 41);
			this->button13->TabIndex = 1;
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// panel25
			// 
			this->panel25->BackColor = System::Drawing::Color::Transparent;
			this->panel25->Controls->Add(this->panel27);
			this->panel25->Controls->Add(this->panel26);
			this->panel25->Controls->Add(this->button21);
			this->panel25->Controls->Add(this->SelectSectionPannel);
			this->panel25->Controls->Add(this->button18);
			this->panel25->Location = System::Drawing::Point(40, 158);
			this->panel25->Name = L"panel25";
			this->panel25->Size = System::Drawing::Size(997, 544);
			this->panel25->TabIndex = 20;
			// 
			// panel27
			// 
			this->panel27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->panel27->Controls->Add(this->label48);
			this->panel27->Controls->Add(this->label60);
			this->panel27->Controls->Add(this->label53);
			this->panel27->Controls->Add(this->label61);
			this->panel27->Controls->Add(this->label51);
			this->panel27->Controls->Add(this->label52);
			this->panel27->Controls->Add(this->label49);
			this->panel27->Controls->Add(this->label50);
			this->panel27->Controls->Add(this->label54);
			this->panel27->Controls->Add(this->label55);
			this->panel27->Location = System::Drawing::Point(0, 157);
			this->panel27->Name = L"panel27";
			this->panel27->Size = System::Drawing::Size(160, 387);
			this->panel27->TabIndex = 6;
			this->panel27->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel27_Paint);
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label48->Location = System::Drawing::Point(13, 17);
			this->label48->Name = L"label48";
			this->label48->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label48->Size = System::Drawing::Size(131, 30);
			this->label48->TabIndex = 4;
			this->label48->Text = L"7:30 AM - 9:00 AM";
			this->label48->Click += gcnew System::EventHandler(this, &MyForm::label48_Click_1);
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->BackColor = System::Drawing::Color::Transparent;
			this->label60->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label60->Location = System::Drawing::Point(13, 339);
			this->label60->Name = L"label60";
			this->label60->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label60->Size = System::Drawing::Size(127, 30);
			this->label60->TabIndex = 14;
			this->label60->Text = L"8:00 PM - 9:00 PM";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label53->Location = System::Drawing::Point(13, 233);
			this->label53->Name = L"label53";
			this->label53->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label53->Size = System::Drawing::Size(127, 30);
			this->label53->TabIndex = 11;
			this->label53->Text = L"4:30 PM - 5:00 PM";
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label61->Location = System::Drawing::Point(13, 304);
			this->label61->Name = L"label61";
			this->label61->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label61->Size = System::Drawing::Size(127, 30);
			this->label61->TabIndex = 13;
			this->label61->Text = L"6:30 PM - 8:00 PM";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label51->Location = System::Drawing::Point(13, 89);
			this->label51->Name = L"label51";
			this->label51->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label51->Size = System::Drawing::Size(145, 30);
			this->label51->TabIndex = 7;
			this->label51->Text = L"10:30 AM - 12:00 PM";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->BackColor = System::Drawing::Color::Transparent;
			this->label52->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label52->Location = System::Drawing::Point(13, 268);
			this->label52->Name = L"label52";
			this->label52->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label52->Size = System::Drawing::Size(127, 30);
			this->label52->TabIndex = 12;
			this->label52->Text = L"5:00 PM - 6:30 PM";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->BackColor = System::Drawing::Color::Transparent;
			this->label49->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label49->Location = System::Drawing::Point(13, 53);
			this->label49->Name = L"label49";
			this->label49->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label49->Size = System::Drawing::Size(139, 30);
			this->label49->TabIndex = 5;
			this->label49->Text = L"9:00 AM - 10:30 AM";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->BackColor = System::Drawing::Color::Transparent;
			this->label50->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label50->Location = System::Drawing::Point(13, 125);
			this->label50->Name = L"label50";
			this->label50->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label50->Size = System::Drawing::Size(135, 30);
			this->label50->TabIndex = 8;
			this->label50->Text = L"12:00 PM - 1:30 PM";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->BackColor = System::Drawing::Color::Transparent;
			this->label54->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label54->Location = System::Drawing::Point(13, 197);
			this->label54->Name = L"label54";
			this->label54->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label54->Size = System::Drawing::Size(127, 30);
			this->label54->TabIndex = 10;
			this->label54->Text = L"3:00 PM - 4:30 PM";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label55->Location = System::Drawing::Point(13, 161);
			this->label55->Name = L"label55";
			this->label55->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label55->Size = System::Drawing::Size(127, 30);
			this->label55->TabIndex = 9;
			this->label55->Text = L"1:30 PM - 3:00 PM";
			// 
			// panel26
			// 
			this->panel26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->panel26->Controls->Add(this->button36);
			this->panel26->Controls->Add(this->button31);
			this->panel26->Controls->Add(this->button32);
			this->panel26->Controls->Add(this->button29);
			this->panel26->Controls->Add(this->button30);
			this->panel26->Controls->Add(this->button28);
			this->panel26->Controls->Add(this->button26);
			this->panel26->Controls->Add(this->button27);
			this->panel26->Controls->Add(this->button24);
			this->panel26->Controls->Add(this->button25);
			this->panel26->Controls->Add(this->button23);
			this->panel26->Controls->Add(this->button22);
			this->panel26->Controls->Add(this->N301Panel);
			this->panel26->Controls->Add(this->N303Panel);
			this->panel26->Location = System::Drawing::Point(0, 88);
			this->panel26->Name = L"panel26";
			this->panel26->Size = System::Drawing::Size(999, 456);
			this->panel26->TabIndex = 6;
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::Color::Transparent;
			this->button36->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button36->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button36->FlatAppearance->BorderSize = 0;
			this->button36->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button36->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button36->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button36->Location = System::Drawing::Point(0, 11);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(161, 44);
			this->button36->TabIndex = 16;
			this->button36->Text = L"N301";
			this->button36->UseVisualStyleBackColor = false;
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::Transparent;
			this->button31->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button31.BackgroundImage")));
			this->button31->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button31->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button31->FlatAppearance->BorderSize = 0;
			this->button31->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button31->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button31->Location = System::Drawing::Point(862, 0);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(137, 63);
			this->button31->TabIndex = 10;
			this->button31->Text = L"Saturday";
			this->button31->UseVisualStyleBackColor = false;
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::Transparent;
			this->button32->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button32.BackgroundImage")));
			this->button32->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button32->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button32->FlatAppearance->BorderSize = 0;
			this->button32->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button32->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button32->Location = System::Drawing::Point(722, 0);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(135, 63);
			this->button32->TabIndex = 9;
			this->button32->Text = L"Friday";
			this->button32->UseVisualStyleBackColor = false;
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::Transparent;
			this->button29->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button29.BackgroundImage")));
			this->button29->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button29->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button29->FlatAppearance->BorderSize = 0;
			this->button29->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button29->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Location = System::Drawing::Point(582, 0);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(135, 63);
			this->button29->TabIndex = 8;
			this->button29->Text = L"Thursday";
			this->button29->UseVisualStyleBackColor = false;
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::Transparent;
			this->button30->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button30.BackgroundImage")));
			this->button30->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button30->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button30->FlatAppearance->BorderSize = 0;
			this->button30->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button30->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->Location = System::Drawing::Point(442, 0);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(135, 63);
			this->button30->TabIndex = 7;
			this->button30->Text = L"Wednesday";
			this->button30->UseVisualStyleBackColor = false;
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::Transparent;
			this->button28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button28.BackgroundImage")));
			this->button28->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button28->FlatAppearance->BorderSize = 0;
			this->button28->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button28->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Location = System::Drawing::Point(302, 0);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(135, 63);
			this->button28->TabIndex = 6;
			this->button28->Text = L"Tuesday";
			this->button28->UseVisualStyleBackColor = false;
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button26->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button26->FlatAppearance->BorderSize = 0;
			this->button26->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button26->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button26->Location = System::Drawing::Point(827, 1);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(0, 0);
			this->button26->TabIndex = 5;
			this->button26->Text = L"button26";
			this->button26->UseVisualStyleBackColor = false;
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button27->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button27->FlatAppearance->BorderSize = 0;
			this->button27->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button27->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button27->Location = System::Drawing::Point(694, 1);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(0, 0);
			this->button27->TabIndex = 4;
			this->button27->Text = L"button27";
			this->button27->UseVisualStyleBackColor = false;
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button24->FlatAppearance->BorderSize = 0;
			this->button24->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button24->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button24->Location = System::Drawing::Point(561, 0);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(0, 0);
			this->button24->TabIndex = 3;
			this->button24->Text = L"button24";
			this->button24->UseVisualStyleBackColor = false;
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button25->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button25->FlatAppearance->BorderSize = 0;
			this->button25->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button25->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button25->Location = System::Drawing::Point(428, 0);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(0, 0);
			this->button25->TabIndex = 2;
			this->button25->Text = L"button25";
			this->button25->UseVisualStyleBackColor = false;
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button23->FlatAppearance->BorderSize = 0;
			this->button23->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button23->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button23->Location = System::Drawing::Point(295, 0);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(0, 0);
			this->button23->TabIndex = 1;
			this->button23->Text = L"button23";
			this->button23->UseVisualStyleBackColor = false;
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::Transparent;
			this->button22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button22.BackgroundImage")));
			this->button22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button22->FlatAppearance->BorderSize = 0;
			this->button22->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button22->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Location = System::Drawing::Point(162, 0);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(135, 63);
			this->button22->TabIndex = 0;
			this->button22->Text = L"Monday";
			this->button22->UseVisualStyleBackColor = false;
			// 
			// N301Panel
			// 
			this->N301Panel->BackColor = System::Drawing::Color::Transparent;
			this->N301Panel->Controls->Add(this->button44);
			this->N301Panel->Controls->Add(this->button43);
			this->N301Panel->Controls->Add(this->button42);
			this->N301Panel->Controls->Add(this->button41);
			this->N301Panel->Controls->Add(this->button39);
			this->N301Panel->Controls->Add(this->button40);
			this->N301Panel->Controls->Add(this->button37);
			this->N301Panel->Controls->Add(this->button38);
			this->N301Panel->Controls->Add(this->button33);
			this->N301Panel->Controls->Add(this->button35);
			this->N301Panel->Controls->Add(this->button34);
			this->N301Panel->Location = System::Drawing::Point(162, 69);
			this->N301Panel->Name = L"N301Panel";
			this->N301Panel->Size = System::Drawing::Size(837, 387);
			this->N301Panel->TabIndex = 15;
			// 
			// button44
			// 
			this->button44->BackColor = System::Drawing::Color::Transparent;
			this->button44->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button44.BackgroundImage")));
			this->button44->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button44->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button44->FlatAppearance->BorderSize = 0;
			this->button44->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button44->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button44->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button44->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button44->ForeColor = System::Drawing::Color::Black;
			this->button44->Location = System::Drawing::Point(700, 241);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(137, 127);
			this->button44->TabIndex = 24;
			this->button44->Text = L"Villamor";
			this->button44->UseVisualStyleBackColor = false;
			this->button44->Click += gcnew System::EventHandler(this, &MyForm::button44_Click);
			// 
			// button43
			// 
			this->button43->BackColor = System::Drawing::Color::Transparent;
			this->button43->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button43.BackgroundImage")));
			this->button43->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button43->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button43->FlatAppearance->BorderSize = 0;
			this->button43->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button43->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button43->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button43->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button43->ForeColor = System::Drawing::Color::Black;
			this->button43->Location = System::Drawing::Point(700, 199);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(137, 38);
			this->button43->TabIndex = 23;
			this->button43->Text = L"Villamor";
			this->button43->UseVisualStyleBackColor = false;
			this->button43->Click += gcnew System::EventHandler(this, &MyForm::button43_Click);
			// 
			// button42
			// 
			this->button42->BackColor = System::Drawing::Color::Transparent;
			this->button42->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button42.BackgroundImage")));
			this->button42->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button42->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button42->FlatAppearance->BorderSize = 0;
			this->button42->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button42->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button42->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button42->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button42->ForeColor = System::Drawing::Color::Black;
			this->button42->Location = System::Drawing::Point(700, 115);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(137, 38);
			this->button42->TabIndex = 22;
			this->button42->Text = L"Hortinela";
			this->button42->UseVisualStyleBackColor = false;
			this->button42->Click += gcnew System::EventHandler(this, &MyForm::button42_Click);
			// 
			// button41
			// 
			this->button41->BackColor = System::Drawing::Color::Transparent;
			this->button41->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button41.BackgroundImage")));
			this->button41->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button41->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button41->FlatAppearance->BorderSize = 0;
			this->button41->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button41->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button41->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button41->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button41->ForeColor = System::Drawing::Color::Black;
			this->button41->Location = System::Drawing::Point(700, 157);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(137, 38);
			this->button41->TabIndex = 21;
			this->button41->Text = L"Hortinela";
			this->button41->UseVisualStyleBackColor = false;
			this->button41->Click += gcnew System::EventHandler(this, &MyForm::button41_Click);
			// 
			// button39
			// 
			this->button39->BackColor = System::Drawing::Color::Transparent;
			this->button39->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button39.BackgroundImage")));
			this->button39->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button39->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button39->FlatAppearance->BorderSize = 0;
			this->button39->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button39->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button39->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button39->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button39->ForeColor = System::Drawing::Color::Black;
			this->button39->Location = System::Drawing::Point(560, 49);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(135, 38);
			this->button39->TabIndex = 19;
			this->button39->Text = L"Hortinela";
			this->button39->UseVisualStyleBackColor = false;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::button39_Click);
			// 
			// button40
			// 
			this->button40->BackColor = System::Drawing::Color::Transparent;
			this->button40->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button40.BackgroundImage")));
			this->button40->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button40->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button40->FlatAppearance->BorderSize = 0;
			this->button40->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button40->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button40->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button40->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button40->ForeColor = System::Drawing::Color::Black;
			this->button40->Location = System::Drawing::Point(560, 157);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(135, 38);
			this->button40->TabIndex = 20;
			this->button40->Text = L"Hortinela";
			this->button40->UseVisualStyleBackColor = false;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm::button40_Click);
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::Color::Transparent;
			this->button37->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button37.BackgroundImage")));
			this->button37->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button37->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button37->FlatAppearance->BorderSize = 0;
			this->button37->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button37->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button37->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button37->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button37->ForeColor = System::Drawing::Color::Black;
			this->button37->Location = System::Drawing::Point(280, 49);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(135, 38);
			this->button37->TabIndex = 17;
			this->button37->Text = L"Hortinela";
			this->button37->UseVisualStyleBackColor = false;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::button37_Click);
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::Color::Transparent;
			this->button38->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button38.BackgroundImage")));
			this->button38->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button38->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button38->FlatAppearance->BorderSize = 0;
			this->button38->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button38->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button38->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button38->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button38->ForeColor = System::Drawing::Color::Black;
			this->button38->Location = System::Drawing::Point(280, 157);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(135, 38);
			this->button38->TabIndex = 18;
			this->button38->Text = L"Hortinela";
			this->button38->UseVisualStyleBackColor = false;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::button38_Click);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::Transparent;
			this->button33->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button33.BackgroundImage")));
			this->button33->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button33->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button33->FlatAppearance->BorderSize = 0;
			this->button33->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button33->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button33->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->ForeColor = System::Drawing::Color::Black;
			this->button33->Location = System::Drawing::Point(0, 49);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(135, 38);
			this->button33->TabIndex = 14;
			this->button33->Text = L"Hortinela";
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click_1);
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::Color::Transparent;
			this->button35->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button35.BackgroundImage")));
			this->button35->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button35->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button35->FlatAppearance->BorderSize = 0;
			this->button35->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button35->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button35->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button35->ForeColor = System::Drawing::Color::Black;
			this->button35->Location = System::Drawing::Point(140, 201);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(135, 112);
			this->button35->TabIndex = 16;
			this->button35->Text = L"Villamor";
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::Color::Transparent;
			this->button34->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button34.BackgroundImage")));
			this->button34->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button34->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button34->FlatAppearance->BorderSize = 0;
			this->button34->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button34->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button34->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button34->ForeColor = System::Drawing::Color::Black;
			this->button34->Location = System::Drawing::Point(0, 157);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(135, 38);
			this->button34->TabIndex = 15;
			this->button34->Text = L"Hortinela";
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			// 
			// N303Panel
			// 
			this->N303Panel->BackColor = System::Drawing::Color::Transparent;
			this->N303Panel->Controls->Add(this->button52);
			this->N303Panel->Controls->Add(this->button54);
			this->N303Panel->Controls->Add(this->button56);
			this->N303Panel->Controls->Add(this->button55);
			this->N303Panel->Controls->Add(this->button49);
			this->N303Panel->Controls->Add(this->button51);
			this->N303Panel->Controls->Add(this->button53);
			this->N303Panel->Location = System::Drawing::Point(162, 69);
			this->N303Panel->Name = L"N303Panel";
			this->N303Panel->Size = System::Drawing::Size(837, 387);
			this->N303Panel->TabIndex = 25;
			// 
			// button52
			// 
			this->button52->BackColor = System::Drawing::Color::Transparent;
			this->button52->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button52.BackgroundImage")));
			this->button52->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button52->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button52->FlatAppearance->BorderSize = 0;
			this->button52->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button52->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button52->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button52->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button52->ForeColor = System::Drawing::Color::Black;
			this->button52->Location = System::Drawing::Point(420, 115);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(135, 38);
			this->button52->TabIndex = 28;
			this->button52->Text = L"Hortinela";
			this->button52->UseVisualStyleBackColor = false;
			this->button52->Click += gcnew System::EventHandler(this, &MyForm::button52_Click);
			// 
			// button54
			// 
			this->button54->BackColor = System::Drawing::Color::Transparent;
			this->button54->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button54.BackgroundImage")));
			this->button54->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button54->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button54->FlatAppearance->BorderSize = 0;
			this->button54->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button54->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button54->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button54->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button54->ForeColor = System::Drawing::Color::Black;
			this->button54->Location = System::Drawing::Point(420, 157);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(135, 38);
			this->button54->TabIndex = 27;
			this->button54->Text = L"Hortinela";
			this->button54->UseVisualStyleBackColor = false;
			this->button54->Click += gcnew System::EventHandler(this, &MyForm::button54_Click);
			// 
			// button56
			// 
			this->button56->BackColor = System::Drawing::Color::Transparent;
			this->button56->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button56.BackgroundImage")));
			this->button56->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button56->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button56->FlatAppearance->BorderSize = 0;
			this->button56->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button56->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button56->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button56->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button56->ForeColor = System::Drawing::Color::Black;
			this->button56->Location = System::Drawing::Point(140, 115);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(135, 38);
			this->button56->TabIndex = 26;
			this->button56->Text = L"Hortinela";
			this->button56->UseVisualStyleBackColor = false;
			this->button56->Click += gcnew System::EventHandler(this, &MyForm::button56_Click);
			// 
			// button55
			// 
			this->button55->BackColor = System::Drawing::Color::Transparent;
			this->button55->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button55.BackgroundImage")));
			this->button55->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button55->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button55->FlatAppearance->BorderSize = 0;
			this->button55->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button55->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button55->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button55->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button55->ForeColor = System::Drawing::Color::Black;
			this->button55->Location = System::Drawing::Point(140, 157);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(135, 38);
			this->button55->TabIndex = 25;
			this->button55->Text = L"Hortinela";
			this->button55->UseVisualStyleBackColor = false;
			this->button55->Click += gcnew System::EventHandler(this, &MyForm::button55_Click);
			// 
			// button49
			// 
			this->button49->BackColor = System::Drawing::Color::Transparent;
			this->button49->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button49.BackgroundImage")));
			this->button49->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button49->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button49->FlatAppearance->BorderSize = 0;
			this->button49->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button49->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button49->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button49->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button49->ForeColor = System::Drawing::Color::Black;
			this->button49->Location = System::Drawing::Point(560, 49);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(135, 38);
			this->button49->TabIndex = 19;
			this->button49->Text = L"Villamor";
			this->button49->UseVisualStyleBackColor = false;
			this->button49->Click += gcnew System::EventHandler(this, &MyForm::button49_Click);
			// 
			// button51
			// 
			this->button51->BackColor = System::Drawing::Color::Transparent;
			this->button51->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button51.BackgroundImage")));
			this->button51->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button51->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button51->FlatAppearance->BorderSize = 0;
			this->button51->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button51->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button51->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button51->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button51->ForeColor = System::Drawing::Color::Black;
			this->button51->Location = System::Drawing::Point(280, 49);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(135, 38);
			this->button51->TabIndex = 17;
			this->button51->Text = L"Villamor";
			this->button51->UseVisualStyleBackColor = false;
			this->button51->Click += gcnew System::EventHandler(this, &MyForm::button51_Click);
			// 
			// button53
			// 
			this->button53->BackColor = System::Drawing::Color::Transparent;
			this->button53->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button53.BackgroundImage")));
			this->button53->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button53->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button53->FlatAppearance->BorderSize = 0;
			this->button53->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->button53->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button53->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button53->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button53->ForeColor = System::Drawing::Color::Black;
			this->button53->Location = System::Drawing::Point(0, 49);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(135, 38);
			this->button53->TabIndex = 14;
			this->button53->Text = L"Villamor";
			this->button53->UseVisualStyleBackColor = false;
			this->button53->Click += gcnew System::EventHandler(this, &MyForm::button53_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::Transparent;
			this->button21->FlatAppearance->BorderSize = 0;
			this->button21->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button21->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button21->Location = System::Drawing::Point(943, 8);
			this->button21->Margin = System::Windows::Forms::Padding(0);
			this->button21->Name = L"button21";
			this->button21->Padding = System::Windows::Forms::Padding(3, 0, 1, 7);
			this->button21->Size = System::Drawing::Size(44, 45);
			this->button21->TabIndex = 2;
			this->button21->Text = L"x";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// SelectSectionPannel
			// 
			this->SelectSectionPannel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->SelectSectionPannel->Controls->Add(this->button20);
			this->SelectSectionPannel->Controls->Add(this->button19);
			this->SelectSectionPannel->Location = System::Drawing::Point(399, 70);
			this->SelectSectionPannel->Name = L"SelectSectionPannel";
			this->SelectSectionPannel->Size = System::Drawing::Size(225, 73);
			this->SelectSectionPannel->TabIndex = 1;
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->button20->FlatAppearance->BorderSize = 0;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->ForeColor = System::Drawing::Color::White;
			this->button20->Location = System::Drawing::Point(20, 38);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(191, 26);
			this->button20->TabIndex = 2;
			this->button20->Text = L"N303";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->button19->FlatAppearance->BorderSize = 0;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::White;
			this->button19->Location = System::Drawing::Point(20, 6);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(191, 26);
			this->button19->TabIndex = 1;
			this->button19->Text = L"N301";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::White;
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Location = System::Drawing::Point(399, 27);
			this->button18->Margin = System::Windows::Forms::Padding(3, 3, 1, 3);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(225, 43);
			this->button18->TabIndex = 0;
			this->button18->Text = L"Select Room";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// panel24
			// 
			this->panel24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel24.BackgroundImage")));
			this->panel24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel24->Controls->Add(this->label46);
			this->panel24->Controls->Add(this->label47);
			this->panel24->Controls->Add(this->label44);
			this->panel24->Controls->Add(this->label45);
			this->panel24->Controls->Add(this->label42);
			this->panel24->Controls->Add(this->label43);
			this->panel24->Controls->Add(this->label39);
			this->panel24->Controls->Add(this->label41);
			this->panel24->Controls->Add(this->label40);
			this->panel24->Controls->Add(this->label38);
			this->panel24->Controls->Add(this->label37);
			this->panel24->Location = System::Drawing::Point(40, 158);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(997, 544);
			this->panel24->TabIndex = 19;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 15, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->Location = System::Drawing::Point(519, 332);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(76, 28);
			this->label46->TabIndex = 11;
			this->label46->Text = L"label46";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->Location = System::Drawing::Point(519, 284);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(330, 28);
			this->label47->TabIndex = 10;
			this->label47->Text = L"Number of Attendance Checked: ";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 15, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(519, 224);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(76, 28);
			this->label44->TabIndex = 9;
			this->label44->Text = L"label44";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->Location = System::Drawing::Point(519, 176);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(176, 28);
			this->label45->TabIndex = 8;
			this->label45->Text = L"Contact Number:";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 15, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(520, 117);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(76, 28);
			this->label42->TabIndex = 7;
			this->label42->Text = L"label42";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(520, 69);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(75, 28);
			this->label43->TabIndex = 6;
			this->label43->Text = L"Email: ";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 15, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(50, 224);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(76, 28);
			this->label39->TabIndex = 5;
			this->label39->Text = L"label39";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(50, 176);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(95, 28);
			this->label41->TabIndex = 4;
			this->label41->Text = L"Staff ID: ";
			this->label41->Click += gcnew System::EventHandler(this, &MyForm::label41_Click);
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 15, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(50, 116);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(76, 28);
			this->label40->TabIndex = 3;
			this->label40->Text = L"label40";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(50, 68);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(79, 28);
			this->label38->TabIndex = 1;
			this->label38->Text = L"Name: ";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(964, 6);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(21, 28);
			this->label37->TabIndex = 0;
			this->label37->Text = L"x";
			this->label37->Click += gcnew System::EventHandler(this, &MyForm::label37_Click);
			// 
			// panel31
			// 
			this->panel31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->panel31->Controls->Add(this->label64);
			this->panel31->Controls->Add(this->label62);
			this->panel31->Controls->Add(this->panel32);
			this->panel31->Location = System::Drawing::Point(40, 151);
			this->panel31->Name = L"panel31";
			this->panel31->Size = System::Drawing::Size(997, 593);
			this->panel31->TabIndex = 21;
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->BackColor = System::Drawing::Color::Transparent;
			this->label64->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label64->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label64->Location = System::Drawing::Point(963, 11);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(22, 28);
			this->label64->TabIndex = 6;
			this->label64->Text = L"x";
			this->label64->Click += gcnew System::EventHandler(this, &MyForm::label64_Click);
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label62->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label62->Location = System::Drawing::Point(26, 23);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(141, 28);
			this->label62->TabIndex = 4;
			this->label62->Text = L"Check Report";
			// 
			// panel32
			// 
			this->panel32->AutoScroll = true;
			this->panel32->BackColor = System::Drawing::Color::White;
			this->panel32->Controls->Add(this->label63);
			this->panel32->Location = System::Drawing::Point(0, 63);
			this->panel32->Name = L"panel32";
			this->panel32->Size = System::Drawing::Size(997, 527);
			this->panel32->TabIndex = 5;
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label63->Location = System::Drawing::Point(27, 27);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(15, 21);
			this->label63->TabIndex = 4;
			this->label63->Text = L" ";
			// 
			// panel28
			// 
			this->panel28->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panel28->BackColor = System::Drawing::Color::White;
			this->panel28->Controls->Add(this->label59);
			this->panel28->Controls->Add(this->label56);
			this->panel28->Controls->Add(this->button46);
			this->panel28->Controls->Add(this->button45);
			this->panel28->Controls->Add(this->panel30);
			this->panel28->Controls->Add(this->panel29);
			this->panel28->Controls->Add(this->label57);
			this->panel28->Location = System::Drawing::Point(40, 158);
			this->panel28->Name = L"panel28";
			this->panel28->Size = System::Drawing::Size(997, 544);
			this->panel28->TabIndex = 15;
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label59->ForeColor = System::Drawing::Color::LimeGreen;
			this->label59->Location = System::Drawing::Point(577, 166);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(261, 25);
			this->label59->TabIndex = 4;
			this->label59->Text = L"*The status has been updated";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->BackColor = System::Drawing::Color::Transparent;
			this->label56->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label56->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->label56->Location = System::Drawing::Point(955, 4);
			this->label56->Name = L"label56";
			this->label56->Padding = System::Windows::Forms::Padding(10, 5, 10, 5);
			this->label56->Size = System::Drawing::Size(43, 40);
			this->label56->TabIndex = 20;
			this->label56->Text = L"x";
			this->label56->Click += gcnew System::EventHandler(this, &MyForm::label56_Click);
			// 
			// button46
			// 
			this->button46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->button46->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button46->FlatAppearance->BorderSize = 0;
			this->button46->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->button46->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button46->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button46->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button46->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button46->Location = System::Drawing::Point(364, 23);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(334, 47);
			this->button46->TabIndex = 19;
			this->button46->Text = L"UPDATE";
			this->button46->UseVisualStyleBackColor = false;
			// 
			// button45
			// 
			this->button45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->button45->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button45->FlatAppearance->BorderSize = 0;
			this->button45->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->button45->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button45->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button45->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button45->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button45->Location = System::Drawing::Point(348, 466);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(334, 47);
			this->button45->TabIndex = 18;
			this->button45->Text = L"UPDATE";
			this->button45->UseVisualStyleBackColor = false;
			this->button45->Click += gcnew System::EventHandler(this, &MyForm::button45_Click);
			// 
			// panel30
			// 
			this->panel30->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panel30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->panel30->Controls->Add(this->label58);
			this->panel30->Location = System::Drawing::Point(40, 96);
			this->panel30->Name = L"panel30";
			this->panel30->Size = System::Drawing::Size(497, 209);
			this->panel30->TabIndex = 17;
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->BackColor = System::Drawing::Color::Transparent;
			this->label58->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label58->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label58->Location = System::Drawing::Point(11, 9);
			this->label58->Name = L"label58";
			this->label58->Padding = System::Windows::Forms::Padding(20, 10, 20, 10);
			this->label58->Size = System::Drawing::Size(96, 37);
			this->label58->TabIndex = 19;
			this->label58->Text = L"LABEL58";
			// 
			// panel29
			// 
			this->panel29->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panel29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)));
			this->panel29->Controls->Add(this->button58);
			this->panel29->Controls->Add(this->button57);
			this->panel29->Controls->Add(this->button50);
			this->panel29->Controls->Add(this->button48);
			this->panel29->Controls->Add(this->button47);
			this->panel29->Location = System::Drawing::Point(40, 354);
			this->panel29->Name = L"panel29";
			this->panel29->Size = System::Drawing::Size(916, 84);
			this->panel29->TabIndex = 16;
			this->panel29->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel29_Paint);
			// 
			// button58
			// 
			this->button58->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->button58->FlatAppearance->BorderSize = 0;
			this->button58->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button58->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button58->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button58->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button58->Location = System::Drawing::Point(734, 0);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(180, 84);
			this->button58->TabIndex = 4;
			this->button58->Text = L"online";
			this->button58->UseVisualStyleBackColor = false;
			this->button58->Click += gcnew System::EventHandler(this, &MyForm::button58_Click);
			// 
			// button57
			// 
			this->button57->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->button57->FlatAppearance->BorderSize = 0;
			this->button57->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button57->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button57->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button57->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button57->Location = System::Drawing::Point(552, 0);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(178, 84);
			this->button57->TabIndex = 3;
			this->button57->Text = L"early dismissal";
			this->button57->UseVisualStyleBackColor = false;
			this->button57->Click += gcnew System::EventHandler(this, &MyForm::button57_Click);
			// 
			// button50
			// 
			this->button50->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->button50->FlatAppearance->BorderSize = 0;
			this->button50->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button50->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button50->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button50->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->button50->Location = System::Drawing::Point(368, 0);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(180, 84);
			this->button50->TabIndex = 2;
			this->button50->Text = L"absent";
			this->button50->UseVisualStyleBackColor = false;
			this->button50->Click += gcnew System::EventHandler(this, &MyForm::button50_Click);
			// 
			// button48
			// 
			this->button48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->button48->FlatAppearance->BorderSize = 0;
			this->button48->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button48->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button48->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button48->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button48->Location = System::Drawing::Point(184, 0);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(180, 84);
			this->button48->TabIndex = 1;
			this->button48->Text = L"late";
			this->button48->UseVisualStyleBackColor = false;
			this->button48->Click += gcnew System::EventHandler(this, &MyForm::button48_Click);
			// 
			// button47
			// 
			this->button47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->button47->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button47->FlatAppearance->BorderSize = 0;
			this->button47->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button47->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button47->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button47->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button47->Location = System::Drawing::Point(0, 0);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(180, 84);
			this->button47->TabIndex = 0;
			this->button47->Text = L"present";
			this->button47->UseVisualStyleBackColor = false;
			this->button47->Click += gcnew System::EventHandler(this, &MyForm::button47_Click);
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label57->Location = System::Drawing::Point(43, 308);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(77, 28);
			this->label57->TabIndex = 2;
			this->label57->Text = L"Status:";
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1068, 739);
			this->Controls->Add(this->LogInPanel);
			this->Controls->Add(this->StaffPanel);
			this->Controls->Add(this->ProfessorPanel);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->ProfessorPanel->ResumeLayout(false);
			this->ProfessorPanel->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->ProfChangeDetail->ResumeLayout(false);
			this->ProfChangeDetail->PerformLayout();
			this->ProfDetails->ResumeLayout(false);
			this->ProfDetails->PerformLayout();
			this->LogInPanel->ResumeLayout(false);
			this->LogInPanel->PerformLayout();
			this->StaffPanel->ResumeLayout(false);
			this->StaffPanel->PerformLayout();
			this->panel33->ResumeLayout(false);
			this->panel33->PerformLayout();
			this->panel34->ResumeLayout(false);
			this->panel34->PerformLayout();
			this->panel22->ResumeLayout(false);
			this->panel20->ResumeLayout(false);
			this->panel18->ResumeLayout(false);
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			this->panel25->ResumeLayout(false);
			this->panel27->ResumeLayout(false);
			this->panel27->PerformLayout();
			this->panel26->ResumeLayout(false);
			this->N301Panel->ResumeLayout(false);
			this->N303Panel->ResumeLayout(false);
			this->SelectSectionPannel->ResumeLayout(false);
			this->panel24->ResumeLayout(false);
			this->panel24->PerformLayout();
			this->panel31->ResumeLayout(false);
			this->panel31->PerformLayout();
			this->panel32->ResumeLayout(false);
			this->panel32->PerformLayout();
			this->panel28->ResumeLayout(false);
			this->panel28->PerformLayout();
			this->panel30->ResumeLayout(false);
			this->panel30->PerformLayout();
			this->panel29->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((LoginName->Text == "Carlos Hortinela" && LoginPassword->Text == "MapuaUniversity") || (LoginName->Text == "Isagani Von Villamor" && LoginPassword->Text == "MapuaUniversity") || 
			(LoginName->Text == "Von Sorongon" && LoginPassword->Text == "MapuaUniversity")){

			if (flag == 0) {
				declare(prof1, prof2, staff1);
				flag++;
			}

			if (LoginName->Text == convertertoString(prof2.getName()))
			{
				label9->Text = "Good day, Professor Isagani Von Villamor";
				prof = 2;
				this->LogInPanel->Hide();
				this->ProfessorPanel->Show();
				this->ProfessorPanel->BringToFront();
				this->ProfDetails->Hide();
				this->ProfChangeDetail->Hide();
				this->panel8->Hide();
				this->panel9->Hide();
				this->panel10->Hide();
			}
			else if (LoginName->Text == convertertoString(prof1.getName())) {
				label9->Text = "Good day, Professor Carlos Hortinela";
				prof = 1;
				this->LogInPanel->Hide();
				this->ProfessorPanel->Show();
				this->ProfessorPanel->BringToFront();
				this->ProfDetails->Hide();
				this->ProfChangeDetail->Hide();
				this->panel8->Hide();
				this->panel9->Hide();
				this->panel10->Hide();
			}
			else if (LoginName->Text == "Von Sorongon"){
				
				label34->Text = "Good day, Von Sorongon :))";
				prof = 3;
				this->panel24->Hide();
				this->panel25->Hide();
				this->panel28->Hide();
				this->panel31->Hide();
				this->panel33->Hide();
				this->SelectSectionPannel->Hide();
				this->LogInPanel->Hide();
				this->ProfDetails->Hide();
				this->ProfChangeDetail->Hide();
				this->panel8->Hide();
				this->panel9->Hide();
				this->panel10->Hide();
				this->panel28->Hide();
				this->panel3->BringToFront();
				this->StaffPanel->Show();
				this->panel3->Show();
			}

			this->LoginName->Text = "";
			this->LoginPassword->Text = "";
			
		} 
		else {
			this->label5->Show();
			
		}
	}
	private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void label7_Click_1(System::Object^ sender, System::EventArgs^ e) {
		//reset button//
		this->LogInPanel->Show();
		this->label5->Hide();
		this->LogInPanel->BringToFront();
		this->ProfessorPanel->Hide();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ProfChangeDetail->Show();
		this->ProfChangeDetail->BringToFront();
		this->ProfDetails->Hide();
		this->label19->Hide();
	}
	private: System::Void ProfessorPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		
	}
	private: System::Void LogInPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	
	}
	private: System::Void LoginName_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void LogOut_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ProfessorPanel->Hide();
		this->LogInPanel->Show();
		this->label5->Hide();
		this->ProfessorPanel->SendToBack();
		//this->StaffPanel->Hide();

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void Profile_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ProfDetails->Show();
		this->ProfDetails->BringToFront();
		this->panel9->Hide();
		this->panel8->Hide();
		this->ProfChangeDetail->Hide();

		if (prof == 1) {
			String^ ProfName = convertertoString(prof1.getName());
			String^ ProfID = convertertoString(prof1.getID());
			String^ ProfEmail = convertertoString(prof1.getEmail());
			String^ ProfNumber = convertertoString(prof1.getContactNumber());
			label11->Text = ProfName;
			label13->Text = ProfID;
			label15->Text = ProfEmail;
			label17->Text = ProfNumber;
			label71->Text = convertertoString(prof1.getPresent());
			label72->Text = convertertoString(prof1.getLate());
			label73->Text = convertertoString(prof1.getAbsent());
		}
		else if (prof == 2) {
			String^ ProfName = convertertoString(prof2.getName());
			String^ ProfID = convertertoString(prof2.getID());
			String^ ProfEmail = convertertoString(prof2.getEmail());
			String^ ProfNumber = convertertoString(prof2.getContactNumber());
			label11->Text = ProfName;
			label13->Text = ProfID;
			label15->Text = ProfEmail;
			label17->Text = ProfNumber;
			label71->Text = convertertoString(prof2.getPresent());
			label72->Text = convertertoString(prof2.getLate());
			label73->Text = convertertoString(prof2.getAbsent());
		}
		
	}
	private: System::Void XProfDetails_Click(System::Object^ sender, System::EventArgs^ e) {
		//X button for View Professor Details//
		this->ProfDetails->Hide();
	}
	private: System::Void label10_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void panel6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		
	}
	private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void button4_Click_2(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "Mapua University")
		{
			this->ProfChangeDetail->Hide();
			this->panel8->Show();
			this->panel8->BringToFront();
			this->label23->Hide();
		}
		else {
			this->label19->Show();
		}
	}
	private: System::Void ProfChangeDetail_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	
	}
	private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void label23_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		//Update Button for professor contact info for prof//
		//email//
		//string text2 = convertS(textBox2->Text);
		//prof1.setEmail(text2);
		//////contact num//
		//string text3 = convertS(textBox3->Text);
		//prof1.setContactNumber(text3);
	}
	private: System::Void label24_Click(System::Object^ sender, System::EventArgs^ e) {
		//X button for update contact info of Prof//
		this->panel8->Hide();
		this->panel9->Hide();
		this->label24->Hide();
	}
	private: System::Void panel8_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		//pannel for updating prof contact info//
	}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		//button to view the schedule of the professor//
		
		this->panel10->Hide();
		this->panel9->Show();
		this->panel9->BringToFront();
		label32->Text = "Choose the Day";
		this->label24->Show();
		this->label24->BringToFront();
		
		if (prof == 1) {
			label26->Text = convertertoString(attendanceRecord.getTime(prof1, "monday"));
			label27->Text = convertertoString(attendanceRecord.getTime(prof1, "tuesday"));
			label28->Text = convertertoString(attendanceRecord.getTime(prof1, "wednesday"));
			label29->Text = convertertoString(attendanceRecord.getTime(prof1, "thursday"));
			label30->Text = convertertoString(attendanceRecord.getTime(prof1, "friday"));
			label31->Text = convertertoString(attendanceRecord.getTime(prof1, "saturday"));
		
		}
		else if (prof == 2) {
			label26->Text = convertertoString(attendanceRecord.getTime(prof2, "monday"));
			label27->Text = convertertoString(attendanceRecord.getTime(prof2, "tuesday"));
			label28->Text = convertertoString(attendanceRecord.getTime(prof2, "wednesday"));
			label29->Text = convertertoString(attendanceRecord.getTime(prof2, "thursday"));
			label30->Text = convertertoString(attendanceRecord.getTime(prof2, "friday"));
			label31->Text = convertertoString(attendanceRecord.getTime(prof2, "saturday"));
		}

		
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		//wednesday prof schedule button//	
		this->panel10->Show();
		this->label33->Show();
		label32->Text = "Your Wednesday Schedule";
		
		if (prof == 1) {
			label33->Text = convertertoString(attendanceRecord.getDetails(prof1, "wednesday"));
		}
		else if (prof == 2) {
			label33->Text = convertertoString(attendanceRecord.getDetails(prof2, "wednesday"));
		}
		
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		//monday prof schedule button//
		this->panel10->Show();
		this->label33->Show();
		label32->Text = "Your Monday Schedule";

		if (prof == 1) {
			label33->Text = convertertoString(attendanceRecord.getDetails(prof1, "monday"));
		}
		else if (prof == 2) {
			label33->Text = convertertoString(attendanceRecord.getDetails(prof2, "monday"));
		}

	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		//tuesday prof schedule button//	
		this->panel10->Show();
		this->label33->Show();
		label32->Text = "Your Tuesday Schedule";

		if (prof == 1) {
			label33->Text = convertertoString(attendanceRecord.getDetails(prof1, "tuesday"));
		}
		else if (prof == 2) {
			label33->Text = convertertoString(attendanceRecord.getDetails(prof2, "tuesday"));
		}
	}
	private: System::Void label25_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel9->Hide();
		this->panel10->Hide();
	}
	private: System::Void Home_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel9->Hide();
		this->panel8->Hide();
		this->ProfChangeDetail->Hide();
		this->ProfDetails->Hide();
		
	}
	private: System::Void label26_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		//thursday prof schedule button//		
		this->panel10->Show();
		this->label33->Show();
		label32->Text = "Your Thursday Schedule";


		if (prof == 1) {
			label33->Text = convertertoString(attendanceRecord.getDetails(prof1, "Thursday"));
		}
		else if (prof == 2) {
			label33->Text = convertertoString(attendanceRecord.getDetails(prof2, "Thursday"));
		}
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		//friday prof schedule button//		
		this->panel10->Show();
		this->label33->Show();
		label32->Text = "Your Friday Schedule";
		
		
		if (prof == 1) {
			label33->Text = convertertoString(attendanceRecord.getDetails(prof1, "friday"));
		}
		else if (prof == 2) {
			label33->Text = convertertoString(attendanceRecord.getDetails(prof2, "friday"));
		}
	}

	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		//saturday prof schedule button//		
		this->panel10->Show();
		this->label33->Show();
		label32->Text = "Your Saturday Schedule";
		

		if (prof == 1) {
			label33->Text = convertertoString(attendanceRecord.getDetails(prof1, "saturday"));
		}
		else if (prof == 2) {
			label33->Text = convertertoString(attendanceRecord.getDetails(prof2, "saturday"));
		}
	}
	private: System::Void label32_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label35_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel10->Hide();
		this->label33->Hide();
		label32->Text = "Choose the Day";

	}
	private: System::Void panel18_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel33->BringToFront();
		this->panel33->Show();
		label67->Text = convertertoString(attendanceSystem.generateAttendanceReport(prof1, prof2));

	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	//staff log out button//
		this->StaffPanel->Hide();
		this->label5->Hide();
		this->LogInPanel->Show();
		this->LogInPanel->BringToFront();

	
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	//staff details button//
		this->panel24->Show();
		this->panel24->BringToFront();
		this->panel28->Hide();
		this->panel31->Hide();

		String^ StaffName = convertertoString(staff1.getName());
		String^ StaffID = convertertoString(staff1.getstaffID());
		String^ StaffEmail = convertertoString(staff1.getEmail());
		String^ StaffNumber = convertertoString(staff1.getContactNumber());
		String^ StaffAttendanceChecked = intToString(staff1.getAttendanceChecks());
		label40->Text = StaffName;
		label39->Text = StaffID;
		label42->Text = StaffEmail;
		label44->Text = StaffNumber;
		label46->Text = StaffAttendanceChecked;

		/*if (prof == 3) {
			
		}
		else if (prof == 4) {
			String^ ProfName = convertertoString(prof2.getName());
			String^ ProfID = convertertoString(prof2.getID());
			String^ ProfEmail = convertertoString(prof2.getEmail());
			String^ ProfNumber = convertertoString(prof2.getContactNumber());
			label11->Text = ProfName;
			label13->Text = ProfID;
			label15->Text = ProfEmail;
			label17->Text = ProfNumber;
		}*/
	}
	private: System::Void label34_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void StaffPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		//Staff Home Button
		this->panel24->Hide();
		this->panel25->Hide();
		this->panel28->Hide();
		this->panel31->Hide();
		this->panel33->Hide();
		this->SelectSectionPannel->Hide();
		this->LogInPanel->Hide();
		this->ProfDetails->Hide();
		this->ProfChangeDetail->Hide();
		this->panel8->Hide();
		this->panel9->Hide();
		this->panel10->Hide();
		this->panel28->Hide();


	}
	private: System::Void label39_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void label37_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel24->Hide();
	}
	private: System::Void label41_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		button18->Text = "Select Room";
		this->panel25->Show();
		this->panel25->BringToFront();
		this->N301Panel->Hide();
		this->N303Panel->Hide();
		this->button45->Hide();
	}
	private: System::Void label49_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void label48_Click(System::Object^ sender, System::EventArgs^ e) {
		//N301 button//
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		this->SelectSectionPannel->BringToFront();
		this->SelectSectionPannel->Show();
		

		this->SelectSectionPannel->Show();
	}
	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel25->Hide();
		this->SelectSectionPannel->Hide();
	}
	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label48_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel27_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		//N301 button//
		theRoom = "N301";
		button36->Text = "N301";
		button18->Text = "N301";
		this->SelectSectionPannel->Hide();
		this->N303Panel->Hide();
		this->N301Panel->Show();
		this->N301Panel->BringToFront();
	}

	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		//N303 button//
		theRoom = "N303";
		button36->Text = "N303";
		button18->Text = "N303";
		this->SelectSectionPannel->Hide();
		this->N301Panel->Hide();
		this->N303Panel->Show();
		this->N303Panel->BringToFront();
	}
	private: System::Void panel29_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	}
	private: System::Void label56_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel28->Hide();
	}
	private: System::Void button33_Click_1(System::Object^ sender, System::EventArgs^ e) {
		//Monday: Hortinella: 0
		this->panel28->BringToFront();
		this->label59->Hide();
		this->panel28->Show();
		theDay = "Monday";
		button46->Text = convertertoString(theDay);
		label58->Text = convertertoString(prof1.getSpecificDetails(prof1, theRoom, prof1.classSchedule.monday[0], prof1.classSchedule.statusMon[0]));
		theProfID = prof1.getID();
		theStaffID = staff1.getstaffID();
		theTime = prof1.classSchedule.monday[0];
		oldStatus = prof1.classSchedule.statusMon[0];
		statusAddress = &prof1.classSchedule.statusMon[0];
		details = prof1.getSpecificDetails(prof1, theRoom, prof1.classSchedule.monday[0], prof1.classSchedule.statusMon[0]);

	}
	private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel28->BringToFront();
		this->label59->Hide();
		this->panel28->Show();
		theDay = "Monday";
		button46->Text = convertertoString(theDay);
		label58->Text = convertertoString(prof1.getSpecificDetails(prof1, theRoom, prof1.classSchedule.monday[1], prof1.classSchedule.statusMon[1]));
		theProfID = prof1.getID();
		theStaffID = staff1.getstaffID();
		theTime = prof1.classSchedule.monday[1];
		oldStatus = prof1.classSchedule.statusMon[1];
		statusAddress = &prof1.classSchedule.statusMon[1];
		details = prof1.getSpecificDetails(prof1, theRoom, prof1.classSchedule.monday[1], prof1.classSchedule.statusMon[1]);
	}
	private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel28->BringToFront();
		this->label59->Hide();
		this->panel28->Show();
		theDay = "Tuesday";
		button46->Text = convertertoString(theDay);
		label58->Text = convertertoString(prof2.getSpecificDetails(prof2, theRoom, prof2.classSchedule.tuesday[0], prof2.classSchedule.statusTue[0]));
		theProfID = prof2.getID();
		theStaffID = staff1.getstaffID();
		theTime = prof2.classSchedule.tuesday[0];
		oldStatus = prof2.classSchedule.statusTue[0];
		statusAddress = &prof2.classSchedule.statusTue[0];
		details = prof2.getSpecificDetails(prof2, theRoom, prof2.classSchedule.tuesday[0], prof2.classSchedule.statusTue[0]);
	}
	private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel28->BringToFront();
		this->label59->Hide();
		this->panel28->Show();
		theDay = "Wednesday";
		button46->Text = convertertoString(theDay);
		label58->Text = convertertoString(prof1.getSpecificDetails(prof1, theRoom, prof1.classSchedule.wednesday[0], prof1.classSchedule.statusWed[0]));
		theProfID = prof1.getID();
		theStaffID = staff1.getstaffID();
		theTime = prof1.classSchedule.wednesday[0];
		oldStatus = prof1.classSchedule.statusWed[0];
		statusAddress = &prof1.classSchedule.statusWed[0];
		details = prof1.getSpecificDetails(prof1, theRoom, prof1.classSchedule.wednesday[0], prof1.classSchedule.statusWed[0]);
	}
	private: System::Void button38_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel28->BringToFront();
		this->label59->Hide();
		this->panel28->Show();
		theDay = "Wednesday";
		button46->Text = convertertoString(theDay);
		label58->Text = convertertoString(prof1.getSpecificDetails(prof1, theRoom, prof1.classSchedule.wednesday[1], prof1.classSchedule.statusWed[1]));
		theProfID = prof1.getID();
		theStaffID = staff1.getstaffID();
		theTime = prof1.classSchedule.wednesday[1];
		oldStatus = prof1.classSchedule.statusWed[1];
		statusAddress = &prof1.classSchedule.statusWed[1];
		details = prof1.getSpecificDetails(prof1, theRoom, prof1.classSchedule.wednesday[1], prof1.classSchedule.statusWed[1]);
	}
	private: System::Void button39_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel28->BringToFront();
		this->label59->Hide();
		this->panel28->Show();
		theDay = "Friday";
		button46->Text = convertertoString(theDay);
		label58->Text = convertertoString(prof1.getSpecificDetails(prof1, theRoom, prof1.classSchedule.friday[0], prof1.classSchedule.statusSat[0]));
		theProfID = prof1.getID();
		theStaffID = staff1.getstaffID();
		theTime = prof1.classSchedule.saturday[0];
		oldStatus = prof1.classSchedule.statusSat[0];
		statusAddress = &prof1.classSchedule.statusSat[0];
		details = prof1.getSpecificDetails(prof1, theRoom, prof1.classSchedule.friday[0], prof1.classSchedule.statusSat[0]);
	}
	private: System::Void button40_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel28->BringToFront();
		this->label59->Hide();
		this->panel28->Show();
		theDay = "Friday";
		button46->Text = convertertoString(theDay);
		label58->Text = convertertoString(prof1.getSpecificDetails(prof1, theRoom, prof1.classSchedule.friday[1], prof1.classSchedule.statusFri[1]));
		theProfID = prof1.getID();
		theStaffID = staff1.getstaffID();
		theTime = prof1.classSchedule.friday[1];
		oldStatus = prof1.classSchedule.statusFri[1];
		statusAddress = &prof1.classSchedule.statusFri[1];
		details = prof1.getSpecificDetails(prof1, theRoom, prof1.classSchedule.friday[1], prof1.classSchedule.statusFri[1]);
	}
	private: System::Void button42_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel28->BringToFront();
		this->label59->Hide();
		this->panel28->Show();
		theDay = "Saturday";
		button46->Text = convertertoString(theDay);
		label58->Text = convertertoString(prof1.getSpecificDetails(prof1, theRoom, prof1.classSchedule.saturday[1], prof1.classSchedule.statusSat[1]));
		theProfID = prof1.getID();
		theStaffID = staff1.getstaffID();
		theTime = prof1.classSchedule.saturday[1];
		oldStatus = prof1.classSchedule.statusSat[1];
		statusAddress = &prof1.classSchedule.statusSat[1];
		details = prof1.getSpecificDetails(prof1, theRoom, prof1.classSchedule.saturday[1], prof1.classSchedule.statusSat[1]);
	}
	private: System::Void button41_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel28->BringToFront();
		this->label59->Hide();
		this->panel28->Show();
		theDay = "Saturday";
		button46->Text = convertertoString(theDay);
		label58->Text = convertertoString(prof1.getSpecificDetails(prof1, theRoom, prof1.classSchedule.saturday[2], prof1.classSchedule.statusSat[2]));
		theProfID = prof1.getID();
		theStaffID = staff1.getstaffID();
		theTime = prof1.classSchedule.saturday[2];
		oldStatus = prof1.classSchedule.statusSat[2];
		statusAddress = &prof1.classSchedule.statusSat[2];
		details = prof1.getSpecificDetails(prof1, theRoom, prof1.classSchedule.saturday[2], prof1.classSchedule.statusSat[2]);
	}
	private: System::Void button43_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel28->BringToFront();
		this->label59->Hide();
		this->panel28->Show();
		theDay = "Saturday";
		button46->Text = convertertoString(theDay);
		label58->Text = convertertoString(prof2.getSpecificDetails(prof2, theRoom, prof2.classSchedule.saturday[0], prof2.classSchedule.statusSat[0]));
		theProfID = prof2.getID();
		theStaffID = staff1.getstaffID();
		theTime = prof2.classSchedule.saturday[0];
		oldStatus = prof2.classSchedule.statusSat[0];
		statusAddress = &prof2.classSchedule.statusSat[0];
		details = prof2.getSpecificDetails(prof2, theRoom, prof2.classSchedule.saturday[0], prof2.classSchedule.statusSat[0]);
	}
	private: System::Void button44_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel28->BringToFront();
		this->label59->Hide();
		this->panel28->Show();
		theDay = "Saturday";
		button46->Text = convertertoString(theDay);
		label58->Text = convertertoString(prof2.getSpecificDetails(prof2, theRoom, prof2.classSchedule.saturday[1], prof2.classSchedule.statusSat[1]));
		theProfID = prof2.getID();
		theStaffID = staff1.getstaffID();
		theTime = prof2.classSchedule.saturday[1];
		oldStatus = prof2.classSchedule.statusSat[1];
		statusAddress = &prof2.classSchedule.statusSat[1];
		details = prof2.getSpecificDetails(prof2, theRoom, prof2.classSchedule.saturday[1], prof2.classSchedule.statusSat[1]);
	}
	private: System::Void button53_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel28->BringToFront();
		this->label59->Hide();
		this->panel28->Show();
		theDay = "Monday";
		button46->Text = convertertoString(theDay);
		label58->Text = convertertoString(prof2.getSpecificDetails(prof2, theRoom, prof2.classSchedule.monday[0], prof2.classSchedule.statusMon[0]));
		theProfID = prof2.getID();
		theStaffID = staff1.getstaffID();
		theTime = prof2.classSchedule.monday[0];
		oldStatus = prof2.classSchedule.statusMon[0];
		statusAddress = &prof2.classSchedule.statusMon[0];
		details = prof2.getSpecificDetails(prof2, theRoom, prof2.classSchedule.monday[0], prof2.classSchedule.statusMon[0]);
	}
	private: System::Void button56_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel28->BringToFront();
		this->label59->Hide();
		this->panel28->Show();
		theDay = "Tuesday";
		button46->Text = convertertoString(theDay);
		label58->Text = convertertoString(prof1.getSpecificDetails(prof1, theRoom, prof1.classSchedule.tuesday[1], prof1.classSchedule.statusTue[1]));
		theProfID = prof1.getID();
		theStaffID = staff1.getstaffID();
		theTime = prof1.classSchedule.tuesday[1];
		oldStatus = prof1.classSchedule.statusTue[1];
		statusAddress = &prof1.classSchedule.statusTue[1];
		details = prof1.getSpecificDetails(prof1, theRoom, prof1.classSchedule.tuesday[1], prof1.classSchedule.statusTue[1]);
	}
	private: System::Void button55_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel28->BringToFront();
		this->label59->Hide();
		this->panel28->Show();
		theDay = "Tuesday";
		button46->Text = convertertoString(theDay);
		label58->Text = convertertoString(prof1.getSpecificDetails(prof1, theRoom, prof1.classSchedule.tuesday[2], prof1.classSchedule.statusTue[2]));
		theProfID = prof1.getID();
		theStaffID = staff1.getstaffID();
		theTime = prof1.classSchedule.tuesday[2];
		oldStatus = prof1.classSchedule.statusTue[2];
		statusAddress = &prof1.classSchedule.statusTue[2];
		details = prof1.getSpecificDetails(prof1, theRoom, prof1.classSchedule.tuesday[2], prof1.classSchedule.statusTue[2]);
	}
	private: System::Void button51_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel28->BringToFront();
		this->label59->Hide();
		this->panel28->Show();
		theDay = "Wednesday";
		button46->Text = convertertoString(theDay);
		label58->Text = convertertoString(prof2.getSpecificDetails(prof2, theRoom, prof2.classSchedule.wednesday[0], prof2.classSchedule.statusWed[0]));
		theProfID = prof2.getID();
		theStaffID = staff1.getstaffID();
		theTime = prof2.classSchedule.wednesday[0];
		oldStatus = prof2.classSchedule.statusWed[0];
		statusAddress = &prof2.classSchedule.statusWed[0];
		details = prof2.getSpecificDetails(prof2, theRoom, prof2.classSchedule.wednesday[0], prof2.classSchedule.statusWed[0]);
	}
	private: System::Void button52_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel28->BringToFront();
		this->label59->Hide();
		this->panel28->Show();
		theDay = "Thursday";
		button46->Text = convertertoString(theDay);
		label58->Text = convertertoString(prof1.getSpecificDetails(prof1, theRoom, prof1.classSchedule.thursday[1], prof1.classSchedule.statusThu[1]));
		theProfID = prof1.getID();
		theStaffID = staff1.getstaffID();
		theTime = prof1.classSchedule.thursday[1];
		oldStatus = prof1.classSchedule.statusThu[1];
		statusAddress = &prof1.classSchedule.statusThu[1];
		details = prof1.getSpecificDetails(prof1, theRoom, prof1.classSchedule.thursday[1], prof1.classSchedule.statusThu[1]);
	}
	private: System::Void button54_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel28->BringToFront();
		this->label59->Hide();
		this->panel28->Show();
		theDay = "Thursday";
		button46->Text = convertertoString(theDay);
		label58->Text = convertertoString(prof1.getSpecificDetails(prof1, theRoom, prof1.classSchedule.thursday[2], prof1.classSchedule.statusThu[2]));
		theProfID = prof1.getID();
		theStaffID = staff1.getstaffID();
		theTime = prof1.classSchedule.thursday[2];
		oldStatus = prof1.classSchedule.statusThu[2];
		statusAddress = &prof1.classSchedule.statusThu[2];
		details = prof1.getSpecificDetails(prof1, theRoom, prof1.classSchedule.thursday[2], prof1.classSchedule.statusThu[2]);

	}
	private: System::Void button49_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel28->BringToFront();
		this->label59->Hide();
		this->panel28->Show();
		theDay = "Friday";
		button46->Text = convertertoString(theDay);
		label58->Text = convertertoString(prof2.getSpecificDetails(prof2, theRoom, prof2.classSchedule.friday[0], prof2.classSchedule.statusFri[0]));
		theProfID = prof2.getID();
		theStaffID = staff1.getstaffID();
		theTime = prof2.classSchedule.friday[0];
		oldStatus = prof2.classSchedule.statusFri[0];
		statusAddress = &prof2.classSchedule.statusFri[0];
		details = prof2.getSpecificDetails(prof2, theRoom, prof2.classSchedule.friday[0], prof2.classSchedule.statusFri[0]);
	}
	private: System::Void button47_Click(System::Object^ sender, System::EventArgs^ e) {
		theStatus = "PRESENT";
		this->button45->Show();
	}
	private: System::Void button48_Click(System::Object^ sender, System::EventArgs^ e) {
		theStatus = "LATE";
		this->button45->Show();
	}
	private: System::Void button50_Click(System::Object^ sender, System::EventArgs^ e) {
		theStatus = "ABSENT";
		this->button45->Show();
	}
	private: System::Void button57_Click(System::Object^ sender, System::EventArgs^ e) {
		theStatus = "EARLY DISMISSAL";
		this->button45->Show();
	}
	private: System::Void button58_Click(System::Object^ sender, System::EventArgs^ e) {
		theStatus = "ONLINE";
		this->button45->Show();
	}
	private: System::Void button45_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label59->Show();
		this->panel28->Hide();
		UpdateNumber++;
		staff1.incAttendanceChecked();

		if (theProfID == prof1.getID()) {
			prof1.updateStatus(theStatus, oldStatus, statusAddress);
		}
		else if (theProfID == prof2.getID()){
			prof2.updateStatus(theStatus, oldStatus, statusAddress);
		}
		
		AttendanceRecord Temporary(theTime, theProfID, theStatus, theStaffID, theDay, theRoom);

		attendanceSystem.addAttendanceReports(Temporary.printAttendanceReport(), UpdateNumber);

		label63->Text = convertertoString(attendanceSystem.generateStaffReport());
		label58->Text = convertertoString(details);
		this->button45->Hide();

	}
	private: System::Void label64_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel31->Hide();
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel31->BringToFront();
		this->panel31->Show();
	}
	private: System::Void label65_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel33->Hide();
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}



