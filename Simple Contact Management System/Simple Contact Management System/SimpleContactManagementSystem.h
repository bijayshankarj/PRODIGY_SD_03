#pragma once


namespace SimpleContactManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	//using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for SimpleContactManagementSystem
	/// </summary>
	public ref class SimpleContactManagementSystem : public System::Windows::Forms::Form
	{
	public:
		SimpleContactManagementSystem(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SimpleContactManagementSystem()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ fname;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ submit;
	private: System::Windows::Forms::Button^ edit;
	private: System::Windows::Forms::Button^ del;
	private: System::Windows::Forms::TextBox^ name_input;
	private: System::Windows::Forms::TextBox^ number_input;
	private: System::Windows::Forms::TextBox^ email_input;
	private: System::Windows::Forms::TextBox^ address_input;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;







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
			this->fname = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->submit = (gcnew System::Windows::Forms::Button());
			this->edit = (gcnew System::Windows::Forms::Button());
			this->del = (gcnew System::Windows::Forms::Button());
			this->name_input = (gcnew System::Windows::Forms::TextBox());
			this->number_input = (gcnew System::Windows::Forms::TextBox());
			this->email_input = (gcnew System::Windows::Forms::TextBox());
			this->address_input = (gcnew System::Windows::Forms::TextBox());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->SuspendLayout();
			// 
			// fname
			// 
			this->fname->AutoSize = true;
			this->fname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->fname->Location = System::Drawing::Point(38, 44);
			this->fname->Name = L"fname";
			this->fname->Size = System::Drawing::Size(84, 20);
			this->fname->TabIndex = 0;
			this->fname->Text = L"Full Name:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->Location = System::Drawing::Point(38, 77);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Number:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(38, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"E-Mail:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(38, 142);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Address:";
			// 
			// submit
			// 
			this->submit->BackColor = System::Drawing::Color::LightBlue;
			this->submit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->submit->Location = System::Drawing::Point(42, 207);
			this->submit->Name = L"submit";
			this->submit->Size = System::Drawing::Size(331, 46);
			this->submit->TabIndex = 4;
			this->submit->Text = L"Submit";
			this->submit->UseVisualStyleBackColor = false;
			this->submit->Click += gcnew System::EventHandler(this, &SimpleContactManagementSystem::submit_Click);
			// 
			// edit
			// 
			this->edit->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->edit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->edit->Location = System::Drawing::Point(42, 277);
			this->edit->Name = L"edit";
			this->edit->Size = System::Drawing::Size(331, 47);
			this->edit->TabIndex = 5;
			this->edit->Text = L"Edit";
			this->edit->UseVisualStyleBackColor = false;
			// 
			// del
			// 
			this->del->BackColor = System::Drawing::Color::LightCoral;
			this->del->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->del->Location = System::Drawing::Point(42, 347);
			this->del->Name = L"del";
			this->del->Size = System::Drawing::Size(331, 49);
			this->del->TabIndex = 6;
			this->del->Text = L"Delete";
			this->del->UseVisualStyleBackColor = false;
			// 
			// name_input
			// 
			this->name_input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->name_input->Location = System::Drawing::Point(128, 41);
			this->name_input->Name = L"name_input";
			this->name_input->Size = System::Drawing::Size(245, 26);
			this->name_input->TabIndex = 7;
			// 
			// number_input
			// 
			this->number_input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->number_input->Location = System::Drawing::Point(128, 74);
			this->number_input->Name = L"number_input";
			this->number_input->Size = System::Drawing::Size(245, 26);
			this->number_input->TabIndex = 8;
			// 
			// email_input
			// 
			this->email_input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->email_input->Location = System::Drawing::Point(128, 107);
			this->email_input->Name = L"email_input";
			this->email_input->Size = System::Drawing::Size(245, 26);
			this->email_input->TabIndex = 9;
			// 
			// address_input
			// 
			this->address_input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->address_input->Location = System::Drawing::Point(128, 139);
			this->address_input->Name = L"address_input";
			this->address_input->Size = System::Drawing::Size(245, 26);
			this->address_input->TabIndex = 10;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::SystemColors::Control;
			this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel1->Location = System::Drawing::Point(436, 41);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(443, 355);
			this->flowLayoutPanel1->TabIndex = 11;
			this->flowLayoutPanel1->Tag = L"";
			// 
			// SimpleContactManagementSystem
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(905, 448);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->address_input);
			this->Controls->Add(this->email_input);
			this->Controls->Add(this->number_input);
			this->Controls->Add(this->name_input);
			this->Controls->Add(this->del);
			this->Controls->Add(this->edit);
			this->Controls->Add(this->submit);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->fname);
			this->Name = L"SimpleContactManagementSystem";
			this->Text = L"SimpleContactManagementSystem";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void submit_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->number_input->Text->Trim() == "") {
		MessageBox::Show("Please enter a valid number", "Validation", MessageBoxButtons::OK,MessageBoxIcon::Information);
	}
	else if (this->name_input->Text->Trim() == "") {
		MessageBox::Show("Please enter a valid name", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else if (this->email_input->Text->Trim() == "") {
		MessageBox::Show("Please enter a valid email", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else if (this->address_input->Text->Trim() == "") {
		MessageBox::Show("Please enter a valid address", "Validation", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		try {
			String^ connectionString = L"Data Source=(localdb)\MSSQLLocalDB;Integrated Security=True";
			//SqlConnection^ conDataBase = gcnew SqlConnection(connectionString);
			//SqlCommand^ conDataBase = gcnew SqlCommand("create table continfo(fname varchar(50), email varchar(50), number char(10) primary key, address varchar(100));");
			SqlConnection con(connectionString);
			con.Open();
			//String^ sqlquery = "Insert into contacts values('"+this->name_input->Text+"','"+ this->email_input->Text+"','"+this->number_input->Text+"','"+this->address_input->Text+"')";
			String^ sqlquery = "insert into databse.continfo values('bj','emai@email.com','5445','vk');";
			SqlCommand cmd(sqlquery, % con);
			cmd.ExecuteNonQuery();
			con.Close();
			MessageBox::Show("Data submitted successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			name_input->Text = "";
			number_input->Text = "";
			email_input->Text = "";
			address_input->Text = "";
		}
		catch(Exception^ ex){
			throw ex;
		}
	}
}
};
}
