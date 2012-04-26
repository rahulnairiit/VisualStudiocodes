#pragma once


namespace sample {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::WebBrowser^  webBrowser1;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
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
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->SuspendLayout();
			// 
			// webBrowser1
			// 
			this->webBrowser1->Location = System::Drawing::Point(-4, 12);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(415, 232);
			this->webBrowser1->TabIndex = 0;
			this->webBrowser1->Url = (gcnew System::Uri(L"http://www.google.com", System::UriKind::Absolute));
			this->webBrowser1->DocumentCompleted += gcnew System::Windows::Forms::WebBrowserDocumentCompletedEventHandler(this, &Form1::webBrowser1_DocumentCompleted);
			// 
			// backgroundWorker1
			// 
			this->backgroundWorker1->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &Form1::backgroundWorker1_DoWork);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(595, 285);
			this->Controls->Add(this->webBrowser1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void webBrowser1_DocumentCompleted(System::Object^  sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^  e) {
			 }
	private: System::Void backgroundWorker1_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
			 }
	};
}

