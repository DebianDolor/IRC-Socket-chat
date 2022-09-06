#pragma once

#include <iostream>
#include <msclr\marshal_cppstd.h>
#include <string.h>
#include <string>

namespace Client {

	using namespace System::Text;
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Net;
	using namespace System::Net::Sockets;
	using namespace System::IO;
	using namespace System::Threading;
	using namespace System::Collections::Generic;
	using namespace System::Runtime::Serialization::Formatters::Binary;
	using namespace System::Runtime::Serialization;


	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			connect();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	// tab control of main screen
	private: System::Windows::Forms::TabControl^ tabControlMain;
	private: System::Windows::Forms::TabPage^ tabPageRoomChat;
	private: System::Windows::Forms::TabPage^ tabPagePrivateChat;
	private: System::Windows::Forms::TabPage^ tabHelp;

	//tab control of room chat
	private: System::Windows::Forms::TabControl^ tabControlRoom;
	private: System::Windows::Forms::TabPage^ tabPageListRoom;
	private: System::Windows::Forms::TabPage^ tabPageListUser;


		   // room chat	
	private: System::Windows::Forms::Label^ labelRoom;
	private: System::Windows::Forms::Label^ RoomNo;
	private: System::Windows::Forms::TextBox^ textBoxRoomChat;
	private: System::Windows::Forms::TextBox^ textBoxMessage;
	private: System::Windows::Forms::Button^ buttonSend;

		   // list rooms & users
	private: System::Windows::Forms::ListBox^ listRoom;
	private: System::Windows::Forms::ListBox^ listUser;
	private: System::Windows::Forms::Button^ btnDisconnect;
	private: System::Windows::Forms::Button^ btnConnect;

		   // private chat
	private: System::Windows::Forms::Label^ labelPrivateChat;
	private: System::Windows::Forms::TextBox^ textBoxPrivateChat;
	private: System::Windows::Forms::TextBox^ textBoxSendPrivateChat;
	private: System::Windows::Forms::Button^ buttonSendPrivate;

		   // list users for private chat
	private: System::Windows::Forms::Label^ labelListUser;
	private: System::Windows::Forms::ListBox^ listUserForPrivateChat;

		   // tab page rename
	private: System::Windows::Forms::TabPage^ Rename;
	private: System::Windows::Forms::Button^ buttonRename;
	private: System::Windows::Forms::Label^ labelName;
	private: System::Windows::Forms::TextBox^ textBoxRename;

		   //tab page help
	private: System::Windows::Forms::PictureBox^ pictureBoxGroupChat;
	private: System::Windows::Forms::PictureBox^ pictureBoxPrivateChat;
	private: System::Windows::Forms::PictureBox^ pictureBoxRename;
	private: System::Windows::Forms::Label^ labelHelp;




	private: System::ComponentModel::Container ^components;


#pragma region Windows Form Designer generated code


		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBoxRoomChat = (gcnew System::Windows::Forms::TextBox());
			this->btnDisconnect = (gcnew System::Windows::Forms::Button());
			this->buttonSend = (gcnew System::Windows::Forms::Button());
			this->textBoxMessage = (gcnew System::Windows::Forms::TextBox());
			this->btnConnect = (gcnew System::Windows::Forms::Button());
			this->listRoom = (gcnew System::Windows::Forms::ListBox());
			this->labelRoom = (gcnew System::Windows::Forms::Label());
			this->RoomNo = (gcnew System::Windows::Forms::Label());
			this->tabControlMain = (gcnew System::Windows::Forms::TabControl());
			this->tabHelp = (gcnew System::Windows::Forms::TabPage());
			this->pictureBoxGroupChat = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxPrivateChat = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxRename = (gcnew System::Windows::Forms::PictureBox());
			this->Rename = (gcnew System::Windows::Forms::TabPage());
			this->buttonRename = (gcnew System::Windows::Forms::Button());
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->textBoxRename = (gcnew System::Windows::Forms::TextBox());
			this->tabPageRoomChat = (gcnew System::Windows::Forms::TabPage());
			this->tabControlRoom = (gcnew System::Windows::Forms::TabControl());
			this->tabPageListRoom = (gcnew System::Windows::Forms::TabPage());
			this->tabPageListUser = (gcnew System::Windows::Forms::TabPage());
			this->listUser = (gcnew System::Windows::Forms::ListBox());
			this->tabPagePrivateChat = (gcnew System::Windows::Forms::TabPage());
			this->labelPrivateChat = (gcnew System::Windows::Forms::Label());
			this->buttonSendPrivate = (gcnew System::Windows::Forms::Button());
			this->textBoxSendPrivateChat = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrivateChat = (gcnew System::Windows::Forms::TextBox());
			this->labelListUser = (gcnew System::Windows::Forms::Label());
			this->listUserForPrivateChat = (gcnew System::Windows::Forms::ListBox());
			this->labelHelp = (gcnew System::Windows::Forms::Label());
			this->tabControlMain->SuspendLayout();
			this->tabHelp->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxGroupChat))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPrivateChat))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxRename))->BeginInit();
			this->Rename->SuspendLayout();
			this->tabPageRoomChat->SuspendLayout();
			this->tabControlRoom->SuspendLayout();
			this->tabPageListRoom->SuspendLayout();
			this->tabPageListUser->SuspendLayout();
			this->tabPagePrivateChat->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBoxRoomChat
			// 
			this->textBoxRoomChat->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBoxRoomChat->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxRoomChat->Location = System::Drawing::Point(16, 59);
			this->textBoxRoomChat->Multiline = true;
			this->textBoxRoomChat->Name = L"textBoxRoomChat";
			this->textBoxRoomChat->ReadOnly = true;
			this->textBoxRoomChat->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBoxRoomChat->Size = System::Drawing::Size(531, 375);
			this->textBoxRoomChat->TabIndex = 1;
			this->textBoxRoomChat->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxRoomChat_TextChanged);
			this->textBoxRoomChat->MouseHover += gcnew System::EventHandler(this, &MyForm::textBoxRoomChat_MouseHover);
			// 
			// btnDisconnect
			// 
			this->btnDisconnect->BackColor = System::Drawing::Color::Silver;
			this->btnDisconnect->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDisconnect->Location = System::Drawing::Point(880, 448);
			this->btnDisconnect->Name = L"btnDisconnect";
			this->btnDisconnect->Size = System::Drawing::Size(273, 55);
			this->btnDisconnect->TabIndex = 3;
			this->btnDisconnect->Text = L"Disconnect";
			this->btnDisconnect->UseVisualStyleBackColor = false;
			this->btnDisconnect->Click += gcnew System::EventHandler(this, &MyForm::buttonDisconnect_Click);
			this->btnDisconnect->MouseHover += gcnew System::EventHandler(this, &MyForm::btnDisconnectMouseHover);
			// 
			// buttonSend
			// 
			this->buttonSend->BackColor = System::Drawing::Color::Silver;
			this->buttonSend->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSend->Location = System::Drawing::Point(463, 448);
			this->buttonSend->Name = L"buttonSend";
			this->buttonSend->Size = System::Drawing::Size(84, 55);
			this->buttonSend->TabIndex = 8;
			this->buttonSend->Text = L"Send";
			this->buttonSend->UseVisualStyleBackColor = false;
			this->buttonSend->Click += gcnew System::EventHandler(this, &MyForm::buttonSend_Click);
			this->buttonSend->MouseHover += gcnew System::EventHandler(this, &MyForm::buttonSend_MouseHover);
			// 
			// textBoxMessage
			// 
			this->textBoxMessage->BackColor = System::Drawing::Color::Silver;
			this->textBoxMessage->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxMessage->Location = System::Drawing::Point(16, 448);
			this->textBoxMessage->Multiline = true;
			this->textBoxMessage->Name = L"textBoxMessage";
			this->textBoxMessage->Size = System::Drawing::Size(441, 55);
			this->textBoxMessage->TabIndex = 7;
			this->textBoxMessage->MouseHover += gcnew System::EventHandler(this, &MyForm::textBoxMessage_MouseHover);
			// 
			// btnConnect
			// 
			this->btnConnect->BackColor = System::Drawing::Color::Silver;
			this->btnConnect->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConnect->Location = System::Drawing::Point(573, 448);
			this->btnConnect->Name = L"btnConnect";
			this->btnConnect->Size = System::Drawing::Size(288, 55);
			this->btnConnect->TabIndex = 10;
			this->btnConnect->Text = L"Connect";
			this->btnConnect->UseVisualStyleBackColor = false;
			this->btnConnect->Click += gcnew System::EventHandler(this, &MyForm::buttonConnect_Click);
			this->btnConnect->MouseHover += gcnew System::EventHandler(this, &MyForm::btnConnectMouseHover);
			// 
			// listRoom
			// 
			this->listRoom->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->listRoom->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listRoom->FormattingEnabled = true;
			this->listRoom->ItemHeight = 29;
			this->listRoom->Location = System::Drawing::Point(0, 0);
			this->listRoom->Name = L"listRoom";
			this->listRoom->Size = System::Drawing::Size(569, 410);
			this->listRoom->TabIndex = 11;
			this->listRoom->MouseHover += gcnew System::EventHandler(this, &MyForm::listRoom_MouseHover);
			// 
			// labelRoom
			// 
			this->labelRoom->AutoSize = true;
			this->labelRoom->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelRoom->Location = System::Drawing::Point(11, 13);
			this->labelRoom->Name = L"labelRoom";
			this->labelRoom->Size = System::Drawing::Size(82, 30);
			this->labelRoom->TabIndex = 15;
			this->labelRoom->Text = L"Room";
			// 
			// RoomNo
			// 
			this->RoomNo->AutoSize = true;
			this->RoomNo->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RoomNo->Location = System::Drawing::Point(96, 13);
			this->RoomNo->Name = L"RoomNo";
			this->RoomNo->Size = System::Drawing::Size(123, 30);
			this->RoomNo->TabIndex = 16;
			this->RoomNo->Text = L"No Room";
			// 
			// tabControlMain
			// 
			this->tabControlMain->Controls->Add(this->tabHelp);
			this->tabControlMain->Controls->Add(this->Rename);
			this->tabControlMain->Controls->Add(this->tabPageRoomChat);
			this->tabControlMain->Controls->Add(this->tabPagePrivateChat);
			this->tabControlMain->Cursor = System::Windows::Forms::Cursors::Default;
			this->tabControlMain->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControlMain->Location = System::Drawing::Point(2, 0);
			this->tabControlMain->Name = L"tabControlMain";
			this->tabControlMain->SelectedIndex = 0;
			this->tabControlMain->Size = System::Drawing::Size(1214, 560);
			this->tabControlMain->TabIndex = 18;
			// 
			// tabHelp
			// 
			this->tabHelp->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->tabHelp->Controls->Add(this->pictureBoxGroupChat);
			this->tabHelp->Controls->Add(this->pictureBoxPrivateChat);
			this->tabHelp->Controls->Add(this->pictureBoxRename);
			this->tabHelp->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabHelp->Location = System::Drawing::Point(4, 34);
			this->tabHelp->Name = L"tabHelp";
			this->tabHelp->Padding = System::Windows::Forms::Padding(3);
			this->tabHelp->Size = System::Drawing::Size(1206, 522);
			this->tabHelp->TabIndex = 2;
			this->tabHelp->Text = L"Help";
			// 
			// pictureBoxGroupChat
			// 
			this->pictureBoxGroupChat->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxGroupChat.Image")));
			this->pictureBoxGroupChat->Location = System::Drawing::Point(605, 0);
			this->pictureBoxGroupChat->Name = L"pictureBoxGroupChat";
			this->pictureBoxGroupChat->Size = System::Drawing::Size(601, 522);
			this->pictureBoxGroupChat->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxGroupChat->TabIndex = 2;
			this->pictureBoxGroupChat->TabStop = false;
			// 
			// pictureBoxPrivateChat
			// 
			this->pictureBoxPrivateChat->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxPrivateChat.Image")));
			this->pictureBoxPrivateChat->Location = System::Drawing::Point(0, 241);
			this->pictureBoxPrivateChat->Name = L"pictureBoxPrivateChat";
			this->pictureBoxPrivateChat->Size = System::Drawing::Size(599, 281);
			this->pictureBoxPrivateChat->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxPrivateChat->TabIndex = 1;
			this->pictureBoxPrivateChat->TabStop = false;
			// 
			// pictureBoxRename
			// 
			this->pictureBoxRename->BackColor = System::Drawing::Color::Silver;
			this->pictureBoxRename->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxRename.Image")));
			this->pictureBoxRename->Location = System::Drawing::Point(-4, 0);
			this->pictureBoxRename->Name = L"pictureBoxRename";
			this->pictureBoxRename->Size = System::Drawing::Size(603, 235);
			this->pictureBoxRename->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxRename->TabIndex = 0;
			this->pictureBoxRename->TabStop = false;
			// 
			// Rename
			// 
			this->Rename->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Rename->Controls->Add(this->buttonRename);
			this->Rename->Controls->Add(this->labelName);
			this->Rename->Controls->Add(this->textBoxRename);
			this->Rename->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Rename->Location = System::Drawing::Point(4, 34);
			this->Rename->Name = L"Rename";
			this->Rename->Size = System::Drawing::Size(1206, 522);
			this->Rename->TabIndex = 3;
			this->Rename->Text = L"Rename";
			// 
			// buttonRename
			// 
			this->buttonRename->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->buttonRename->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonRename->Location = System::Drawing::Point(751, 237);
			this->buttonRename->Name = L"buttonRename";
			this->buttonRename->Size = System::Drawing::Size(105, 49);
			this->buttonRename->TabIndex = 17;
			this->buttonRename->Text = L"Rename";
			this->buttonRename->UseVisualStyleBackColor = false;
			this->buttonRename->Click += gcnew System::EventHandler(this, &MyForm::buttonRename_Click);
			this->buttonRename->MouseHover += gcnew System::EventHandler(this, &MyForm::buttonRename_MouseHover);
			// 
			// labelName
			// 
			this->labelName->AutoSize = true;
			this->labelName->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelName->Location = System::Drawing::Point(350, 246);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(79, 30);
			this->labelName->TabIndex = 16;
			this->labelName->Text = L"Name";
			// 
			// textBoxRename
			// 
			this->textBoxRename->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBoxRename->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxRename->Location = System::Drawing::Point(440, 237);
			this->textBoxRename->Multiline = true;
			this->textBoxRename->Name = L"textBoxRename";
			this->textBoxRename->Size = System::Drawing::Size(305, 49);
			this->textBoxRename->TabIndex = 15;
			this->textBoxRename->MouseHover += gcnew System::EventHandler(this, &MyForm::textBoxRename_MouseHover);
			// 
			// tabPageRoomChat
			// 
			this->tabPageRoomChat->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->tabPageRoomChat->Controls->Add(this->tabControlRoom);
			this->tabPageRoomChat->Controls->Add(this->textBoxRoomChat);
			this->tabPageRoomChat->Controls->Add(this->buttonSend);
			this->tabPageRoomChat->Controls->Add(this->btnConnect);
			this->tabPageRoomChat->Controls->Add(this->textBoxMessage);
			this->tabPageRoomChat->Controls->Add(this->btnDisconnect);
			this->tabPageRoomChat->Controls->Add(this->labelRoom);
			this->tabPageRoomChat->Controls->Add(this->RoomNo);
			this->tabPageRoomChat->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPageRoomChat->Location = System::Drawing::Point(4, 34);
			this->tabPageRoomChat->Name = L"tabPageRoomChat";
			this->tabPageRoomChat->Padding = System::Windows::Forms::Padding(3);
			this->tabPageRoomChat->Size = System::Drawing::Size(1206, 522);
			this->tabPageRoomChat->TabIndex = 0;
			this->tabPageRoomChat->Text = L"Group Chat";
			// 
			// tabControlRoom
			// 
			this->tabControlRoom->Controls->Add(this->tabPageListRoom);
			this->tabControlRoom->Controls->Add(this->tabPageListUser);
			this->tabControlRoom->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControlRoom->Location = System::Drawing::Point(573, 13);
			this->tabControlRoom->Name = L"tabControlRoom";
			this->tabControlRoom->SelectedIndex = 0;
			this->tabControlRoom->Size = System::Drawing::Size(580, 421);
			this->tabControlRoom->TabIndex = 17;
			// 
			// tabPageListRoom
			// 
			this->tabPageListRoom->Controls->Add(this->listRoom);
			this->tabPageListRoom->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPageListRoom->Location = System::Drawing::Point(4, 33);
			this->tabPageListRoom->Name = L"tabPageListRoom";
			this->tabPageListRoom->Padding = System::Windows::Forms::Padding(3);
			this->tabPageListRoom->Size = System::Drawing::Size(572, 384);
			this->tabPageListRoom->TabIndex = 0;
			this->tabPageListRoom->Text = L"Room";
			this->tabPageListRoom->UseVisualStyleBackColor = true;
			// 
			// tabPageListUser
			// 
			this->tabPageListUser->Controls->Add(this->listUser);
			this->tabPageListUser->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPageListUser->Location = System::Drawing::Point(4, 33);
			this->tabPageListUser->Name = L"tabPageListUser";
			this->tabPageListUser->Padding = System::Windows::Forms::Padding(3);
			this->tabPageListUser->Size = System::Drawing::Size(572, 384);
			this->tabPageListUser->TabIndex = 1;
			this->tabPageListUser->Text = L"Users";
			this->tabPageListUser->UseVisualStyleBackColor = true;
			// 
			// listUser
			// 
			this->listUser->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->listUser->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listUser->FormattingEnabled = true;
			this->listUser->ItemHeight = 29;
			this->listUser->Location = System::Drawing::Point(0, 0);
			this->listUser->MultiColumn = true;
			this->listUser->Name = L"listUser";
			this->listUser->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->listUser->Size = System::Drawing::Size(572, 410);
			this->listUser->TabIndex = 0;
			this->listUser->MouseHover += gcnew System::EventHandler(this, &MyForm::listUser_MouseHover);
			// 
			// tabPagePrivateChat
			// 
			this->tabPagePrivateChat->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->tabPagePrivateChat->Controls->Add(this->labelPrivateChat);
			this->tabPagePrivateChat->Controls->Add(this->buttonSendPrivate);
			this->tabPagePrivateChat->Controls->Add(this->textBoxSendPrivateChat);
			this->tabPagePrivateChat->Controls->Add(this->textBoxPrivateChat);
			this->tabPagePrivateChat->Controls->Add(this->labelListUser);
			this->tabPagePrivateChat->Controls->Add(this->listUserForPrivateChat);
			this->tabPagePrivateChat->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPagePrivateChat->Location = System::Drawing::Point(4, 34);
			this->tabPagePrivateChat->Name = L"tabPagePrivateChat";
			this->tabPagePrivateChat->Padding = System::Windows::Forms::Padding(3);
			this->tabPagePrivateChat->Size = System::Drawing::Size(1206, 522);
			this->tabPagePrivateChat->TabIndex = 1;
			this->tabPagePrivateChat->Text = L"Private Chat";
			// 
			// labelPrivateChat
			// 
			this->labelPrivateChat->AutoSize = true;
			this->labelPrivateChat->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPrivateChat->Location = System::Drawing::Point(80, 25);
			this->labelPrivateChat->Name = L"labelPrivateChat";
			this->labelPrivateChat->Size = System::Drawing::Size(145, 30);
			this->labelPrivateChat->TabIndex = 19;
			this->labelPrivateChat->Text = L"Private chat";
			// 
			// buttonSendPrivate
			// 
			this->buttonSendPrivate->BackColor = System::Drawing::Color::Silver;
			this->buttonSendPrivate->Enabled = false;
			this->buttonSendPrivate->Location = System::Drawing::Point(627, 415);
			this->buttonSendPrivate->Name = L"buttonSendPrivate";
			this->buttonSendPrivate->Size = System::Drawing::Size(95, 42);
			this->buttonSendPrivate->TabIndex = 18;
			this->buttonSendPrivate->Text = L"Send";
			this->buttonSendPrivate->UseVisualStyleBackColor = false;
			this->buttonSendPrivate->Click += gcnew System::EventHandler(this, &MyForm::buttonSendPrivate_Click);
			this->buttonSendPrivate->MouseHover += gcnew System::EventHandler(this, &MyForm::buttonSendPrivate_MouseHover);
			// 
			// textBoxSendPrivateChat
			// 
			this->textBoxSendPrivateChat->BackColor = System::Drawing::Color::Silver;
			this->textBoxSendPrivateChat->Location = System::Drawing::Point(85, 415);
			this->textBoxSendPrivateChat->Multiline = true;
			this->textBoxSendPrivateChat->Name = L"textBoxSendPrivateChat";
			this->textBoxSendPrivateChat->Size = System::Drawing::Size(536, 40);
			this->textBoxSendPrivateChat->TabIndex = 17;
			this->textBoxSendPrivateChat->MouseHover += gcnew System::EventHandler(this, &MyForm::textBoxSendPrivateChat_MouseHover);
			// 
			// textBoxPrivateChat
			// 
			this->textBoxPrivateChat->BackColor = System::Drawing::Color::Silver;
			this->textBoxPrivateChat->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPrivateChat->Location = System::Drawing::Point(85, 69);
			this->textBoxPrivateChat->Multiline = true;
			this->textBoxPrivateChat->Name = L"textBoxPrivateChat";
			this->textBoxPrivateChat->ReadOnly = true;
			this->textBoxPrivateChat->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBoxPrivateChat->Size = System::Drawing::Size(637, 323);
			this->textBoxPrivateChat->TabIndex = 16;
			this->textBoxPrivateChat->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxPrivateChat_TextChanged);
			this->textBoxPrivateChat->MouseHover += gcnew System::EventHandler(this, &MyForm::textBoxPrivateChat_MouseHover);
			// 
			// labelListUser
			// 
			this->labelListUser->AutoSize = true;
			this->labelListUser->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelListUser->Location = System::Drawing::Point(787, 25);
			this->labelListUser->Name = L"labelListUser";
			this->labelListUser->Size = System::Drawing::Size(65, 30);
			this->labelListUser->TabIndex = 14;
			this->labelListUser->Text = L"User";
			// 
			// listUserForPrivateChat
			// 
			this->listUserForPrivateChat->BackColor = System::Drawing::Color::Silver;
			this->listUserForPrivateChat->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->listUserForPrivateChat->ItemHeight = 29;
			this->listUserForPrivateChat->Location = System::Drawing::Point(775, 69);
			this->listUserForPrivateChat->MultiColumn = true;
			this->listUserForPrivateChat->Name = L"listUserForPrivateChat";
			this->listUserForPrivateChat->ScrollAlwaysVisible = true;
			this->listUserForPrivateChat->Size = System::Drawing::Size(351, 323);
			this->listUserForPrivateChat->TabIndex = 0;
			this->listUserForPrivateChat->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listUserForPrivateChat_SelectedIndexChanged);
			this->listUserForPrivateChat->MouseHover += gcnew System::EventHandler(this, &MyForm::listUserForPrivateChat_MouseHover);
			// 
			// labelHelp
			// 
			this->labelHelp->AutoSize = true;
			this->labelHelp->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelHelp->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelHelp->Location = System::Drawing::Point(373, 578);
			this->labelHelp->Name = L"labelHelp";
			this->labelHelp->Size = System::Drawing::Size(496, 24);
			this->labelHelp->TabIndex = 19;
			this->labelHelp->Text = L"Di chuột vào từng textbox, button để xem hướng dẫn.";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1215, 621);
			this->Controls->Add(this->labelHelp);
			this->Controls->Add(this->tabControlMain);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Client";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControlMain->ResumeLayout(false);
			this->tabHelp->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxGroupChat))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPrivateChat))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxRename))->EndInit();
			this->Rename->ResumeLayout(false);
			this->Rename->PerformLayout();
			this->tabPageRoomChat->ResumeLayout(false);
			this->tabPageRoomChat->PerformLayout();
			this->tabControlRoom->ResumeLayout(false);
			this->tabPageListRoom->ResumeLayout(false);
			this->tabPageListUser->ResumeLayout(false);
			this->tabPagePrivateChat->ResumeLayout(false);
			this->tabPagePrivateChat->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion

		//System::String^ server;
		IPAddress^ address;
		IPEndPoint^ IP;
		Socket^ client;
		bool isDisconnected = true;
		bool serverClosed = false;

		//--------------------------------------byteStream--------------------------------------
		// send an object as a stream of bytes
		cli::array<Byte>^ byteStream(Object^ e) {
			MemoryStream^ stream = gcnew MemoryStream();
			BinaryFormatter^ format = gcnew BinaryFormatter();
			format->Serialize(stream, e);
			return stream->ToArray();
		}


		//--------------------------------------Connect---------------------------
		void connect() {
			
				System::String^ Ip = "127.0.0.1";
				address = IPAddress::Parse(Ip);

				IP = gcnew IPEndPoint(address, 8989);

				client = gcnew Socket(AddressFamily::InterNetwork, SocketType::Stream, ProtocolType::IP);
			try
			{
		
				client->Connect(IP);

				System::Threading::Thread^ startConnection = gcnew System::Threading::Thread(gcnew System::Threading::ParameterizedThreadStart(this, &MyForm::receive));
				startConnection->IsBackground = true;
				startConnection->Start();
			}
			catch (SocketException^)
			{
				MessageBox::Show("Can not establish connection to target host!");
				return;
			}
		}


		//--------------------------------------Send------------------------------
		void send(Object^ data) {
			try {
				if (serverClosed == false)
					client->Send(byteStream(data));
				else
					client->Close();
			}
			catch (SocketError^) {
				MessageBox::Show("Cant connect to server!");
			}
		}


		//--------------------------------------receive--------------------------------------
		void receive(Object^ e) {

			Socket^ receiver = dynamic_cast<Socket^>(e);

			try
			{	
				while (true)
				{
					cli::array<System::Byte>^ data = gcnew cli::array<System::Byte>(100000);
					client->Receive(data);

					MemoryStream^ stream = gcnew MemoryStream(data);
					BinaryFormatter^ format = gcnew BinaryFormatter();
					Object^ mes = format->Deserialize(stream);
					System::String^ command = cli::safe_cast<System::String^>(mes);

					if (command == ":exit:") 
					{
						client->Close();
					}

					else 
					{
						msclr::interop::marshal_context context;
						std::string flag = context.marshal_as<std::string>(command);

						///////////////////////Command///////////////////////
						if (flag[0] == ':' && flag[1] == 'c' && flag[2] == ':') 
						{
							//--------------End_rename--------------
							if (flag.find(":end_rename:") != string::npos) 
							{
								textBoxRename->Text = "";
								int startRename = 0;

								for each (auto i in command)
								{
									startRename++;
									if (startRename >= 15)
										textBoxRename->Text += i;
								}
							}

							//--------------List_user--------------
							if (flag.find(":list:") != string::npos) 
							{
								listUserForPrivateChat->Items->Clear();
								int startPoint = 0;

								String^ client = "";

								for each (auto i in command)
								{
									startPoint++;

									if (startPoint >= 9)
									{
										if (i != '#') 
										{
											client += i;
										}
										else
										{
											listUserForPrivateChat->Items->Add(client);
											client = "";
										}	
									}
								}
							}

							//--------------List_room--------------
							if (flag.find(":list_room:") != string::npos) 
							{
								listUser->Items->Clear();
								int startPoint = 0;
								String^ client = "";

								for each (auto i in command)
								{
									startPoint++;

									if (startPoint >= 14)
									{
										if (i != '#') 
										{
											client += i;
										}
										else
										{
											listUser->Items->Add(client);
											client = "";
										}
									}
								}
							}

						}


						///////////////////////Group Chat///////////////////////
						else if(command[0] == ':' && command[1] == 'm' && command[2] == ':')
						{
							int startPoint = 0;
							String^ message_Text = "";

							for each (auto i in command)
							{
								startPoint++;
								if (startPoint >= 6) message_Text += i;
							}

							textBoxRoomChat->Text += message_Text + "\r\n";
						}


						///////////////////////Private Chat///////////////////////
						else if (command[0] == ':' && command[1] == 'p' && command[2] == ':')
					{
						int startPoint = 0;
						String^ message_Text = "";

						for each (auto i in command)
						{
							startPoint++;
							if (startPoint >= 3) message_Text += i;
						}

						textBoxPrivateChat->Text += message_Text + "\r\n";
					}
					}
				}
			}
			catch (SocketError^ )
			{
				serverClosed = true;
				MessageBox::Show("Server closed unexpectedly, please exit program!");
				client->Close();
			}
			catch (SocketException^) {
				serverClosed = true;
				MessageBox::Show("Server closed unexpectedly, please exit program!");
				client->Close();
			}
		}


		private: System::Void buttonSend_Click(System::Object^ sender, System::EventArgs^ e) {

			String^ text = textBoxMessage->Text;

			if (text != "")
			{
				text = ":m:" + RoomNo->Text + ":" + textBoxRename->Text + " :" + text;
				send(text);
			};

			textBoxMessage->Clear();
		}


		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {	

			System::Threading::Thread^ new_user = gcnew System::Threading::Thread(gcnew System::Threading::ParameterizedThreadStart(this, &MyForm::send));
			new_user->IsBackground = true;
			new_user->Start(":c:new_user:");
			new_user->Join();

			System::Threading::Thread^ list_user = gcnew System::Threading::Thread(gcnew System::Threading::ParameterizedThreadStart(this, &MyForm::send));
			list_user->IsBackground = true;
			list_user->Start(":c:list_user:");
			list_user->Join();

			buttonSend->Enabled = false;
			btnDisconnect->Enabled = false;
			listRoom->Items->Add("1");
			listRoom->Items->Add("2");
		}
		

		private: System::Void buttonDisconnect_Click(System::Object^ sender, System::EventArgs^ e) {
			isDisconnected = true;
			buttonSend->Enabled = false;
			textBoxRoomChat->Text = "";
			textBoxMessage->Enabled = false;
			btnConnect->Enabled = true;
			btnDisconnect->Enabled = false;
			send(":c:dis_connect_room:" + RoomNo->Text);
			listUser->Items->Clear();
			RoomNo->Text = "No Room";
		}


		bool isWhitespace(String^ s) {
			for (int index = 0; index < s->Length; index++) {
				if (!isspace(s[index]))
					return false;
			}
			return true;
		}


		private: System::Void buttonRename_Click(System::Object^ sender, System::EventArgs^ e) {

			String^ text = textBoxRename->Text;

			if (btnConnect->Enabled == false) 
			{
				MessageBox::Show("You need disconnected your room!");
			}

			else
			{
				if (isWhitespace(textBoxRename->Text) == true)
					MessageBox::Show("Please enter a non empty name!");

				else if (listUserForPrivateChat->Items->Contains(textBoxRename->Text)) 
				{
					MessageBox::Show("Name already exists!");
				} 
				
				else 
				{
					if (textBoxRename->Text != "") 
					{
						send(":c:rename:" + text);
						MessageBox::Show("Rename success!");
					}
					else
					{
						MessageBox::Show("Please enter a non empty name!");
					}
				}
			}
		}
		

		private: System::Void buttonConnect_Click(System::Object^ sender, System::EventArgs^ e) {

			if (System::Convert::ToString(listRoom->SelectedItem) != "") {
				isDisconnected = false;
				buttonSend->Enabled = true;
				textBoxMessage->Enabled = true;
				String^ connect_room = System::Convert::ToString(listRoom->SelectedItem);
				send(":c:connect_room:" + connect_room);
				RoomNo->Text = connect_room;
				btnConnect->Enabled = false;
				btnDisconnect->Enabled = true;
			}
			else {
				MessageBox::Show("Please select a user to start a conversation!");
			}
		}


		private: System::Void listUserForPrivateChat_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

			if (System::Convert::ToString(listUserForPrivateChat->SelectedItem) != "") {
				String^ private_name = System::Convert::ToString(listUserForPrivateChat->SelectedItem);

				if (private_name != textBoxRename->Text)
					buttonSendPrivate->Enabled = true;
			
				else 
					buttonSendPrivate->Enabled = false;
			}
			else {
				MessageBox::Show("Please select a user to start a conversation!");
			}
		}


		private: System::Void buttonSendPrivate_Click(System::Object^ sender, System::EventArgs^ e) {

			String^ private_name = listUserForPrivateChat->SelectedItem->ToString();

			if (textBoxSendPrivateChat->Text != "") 
			{
				send(":p:" + private_name + ":" + textBoxSendPrivateChat->Text);
				textBoxSendPrivateChat->Text = "";
			}
		}


		private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
			
			if (serverClosed == true) {
				client->Close();
			}

			else if (isDisconnected == true)
			{
				send(":Disconnect:");
			}
			else 
			{
				switch (MessageBox::Show("Please disconnect to your room before you leave!", "", MessageBoxButtons::RetryCancel))
				{
				case System::Windows::Forms::DialogResult::Retry:
					e->Cancel = true;
					break;
				case System::Windows::Forms::DialogResult::Cancel:
					e->Cancel = true;
					break;
				default:
					break;
				}
			}
		}


		private: System::Void textBoxRoomChat_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			textBoxRoomChat->SelectionStart = textBoxRoomChat->Text->Length;
			textBoxRoomChat->ScrollToCaret();
		}
		

		private: System::Void textBoxPrivateChat_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			textBoxPrivateChat->SelectionStart = textBoxPrivateChat->Text->Length;
			textBoxPrivateChat->ScrollToCaret();
		}


		private: System::Void listRoom_MouseHover(System::Object^ sender, System::EventArgs^ e) {
			System::Windows::Forms::ToolTip^ ToolTip1 = gcnew System::Windows::Forms::ToolTip();
			ToolTip1->SetToolTip(this->listRoom, "This text box shows available rooms to join.");
		}

		
		private: System::Void listUser_MouseHover(System::Object^ sender, System::EventArgs^ e) {
			System::Windows::Forms::ToolTip^ ToolTip1 = gcnew System::Windows::Forms::ToolTip();
			ToolTip1->SetToolTip(this->listUser, "This text box shows candidates in each room.");
		}


		private: System::Void btnConnectMouseHover(System::Object^ sender, System::EventArgs^ e) {
			System::Windows::Forms::ToolTip^ ToolTip1 = gcnew System::Windows::Forms::ToolTip();
			ToolTip1->SetToolTip(this->btnConnect, "Connect button.");
		}


		private: System::Void btnDisconnectMouseHover(System::Object^ sender, System::EventArgs^ e) {
			System::Windows::Forms::ToolTip^ ToolTip1 = gcnew System::Windows::Forms::ToolTip();
			ToolTip1->SetToolTip(this->btnDisconnect, "Disconnect button.");
		}


		private: System::Void textBoxRoomChat_MouseHover(System::Object^ sender, System::EventArgs^ e) {
			System::Windows::Forms::ToolTip^ ToolTip1 = gcnew System::Windows::Forms::ToolTip();
			ToolTip1->SetToolTip(this->textBoxRoomChat, "This text box shows conversation in each room.");
		}

		
		private: System::Void buttonSend_MouseHover(System::Object^ sender, System::EventArgs^ e) {
			System::Windows::Forms::ToolTip^ ToolTip1 = gcnew System::Windows::Forms::ToolTip();
			ToolTip1->SetToolTip(this->buttonSend, "Click this button to send message.");
		}


		private: System::Void textBoxMessage_MouseHover(System::Object^ sender, System::EventArgs^ e) {
			System::Windows::Forms::ToolTip^ ToolTip1 = gcnew System::Windows::Forms::ToolTip();
			ToolTip1->SetToolTip(this->textBoxMessage, "Enter message here and click 'Send' button to send it.");
		}


		private: System::Void listUserForPrivateChat_MouseHover(System::Object^ sender, System::EventArgs^ e) {
			System::Windows::Forms::ToolTip^ ToolTip1 = gcnew System::Windows::Forms::ToolTip();
			ToolTip1->SetToolTip(this->listUserForPrivateChat, "This text box shows available users for private chatting.");
		}


		private: System::Void textBoxPrivateChat_MouseHover(System::Object^ sender, System::EventArgs^ e) {
			System::Windows::Forms::ToolTip^ ToolTip1 = gcnew System::Windows::Forms::ToolTip();
			ToolTip1->SetToolTip(this->textBoxPrivateChat, "This text box shows conversations of private chatting.");
		}


		private: System::Void textBoxSendPrivateChat_MouseHover(System::Object^ sender, System::EventArgs^ e) {
			System::Windows::Forms::ToolTip^ ToolTip1 = gcnew System::Windows::Forms::ToolTip();
			ToolTip1->SetToolTip(this->textBoxSendPrivateChat, "Enter text here and click 'Send' button to send message.");
		}


		private: System::Void buttonSendPrivate_MouseHover(System::Object^ sender, System::EventArgs^ e) {
			System::Windows::Forms::ToolTip^ ToolTip1 = gcnew System::Windows::Forms::ToolTip();
			ToolTip1->SetToolTip(this->buttonSendPrivate, "Click this button to send message in private chat.");
		}


		private: System::Void buttonRename_MouseHover(System::Object^ sender, System::EventArgs^ e) {
			System::Windows::Forms::ToolTip^ ToolTip1 = gcnew System::Windows::Forms::ToolTip();
			ToolTip1->SetToolTip(this->buttonRename, "Click this button to change name.");
		}


		private: System::Void textBoxRename_MouseHover(System::Object^ sender, System::EventArgs^ e) {
			System::Windows::Forms::ToolTip^ ToolTip1 = gcnew System::Windows::Forms::ToolTip();
			ToolTip1->SetToolTip(this->textBoxRename, "Enter new name here and click 'Rename' button to rename.");
		}
			   
	};
}
