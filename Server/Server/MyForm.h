#pragma once

#include <iostream>
#include <msclr\marshal_cppstd.h>
#include <string.h>
#include <string>



namespace Server {
	using namespace std;
	using namespace System;
	using namespace System::Text;
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
			Control::CheckForIllegalCrossThreadCalls = false;
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

		
	private: System::Windows::Forms::Label^ labelStatus;
	private: System::Windows::Forms::TextBox^ textBoxMain;
	private: System::Windows::Forms::Label^ labelRoom;
	private: System::Windows::Forms::TextBox^ Room1;
	private: System::Windows::Forms::TextBox^ Room2;
	private: System::Windows::Forms::Label^ labelRename;
	private: System::Windows::Forms::TextBox^ textBoxRename;
	private: System::Windows::Forms::Label^ labelPrivate;
	private: System::Windows::Forms::TextBox^ textBoxPrivate;
	private: System::Windows::Forms::Label^ labelRoomStatus;
	private: System::Windows::Forms::TextBox^ textBoxRoomStatus;
	private: System::Windows::Forms::Label^ label1;
	private: System::ComponentModel::Container^ components;



#pragma region Windows Form Designer generated code
		
	void InitializeComponent(void)
		{
		this->textBoxMain = (gcnew System::Windows::Forms::TextBox());
		this->labelRoom = (gcnew System::Windows::Forms::Label());
		this->labelStatus = (gcnew System::Windows::Forms::Label());
		this->Room1 = (gcnew System::Windows::Forms::TextBox());
		this->Room2 = (gcnew System::Windows::Forms::TextBox());
		this->labelRename = (gcnew System::Windows::Forms::Label());
		this->textBoxRename = (gcnew System::Windows::Forms::TextBox());
		this->labelPrivate = (gcnew System::Windows::Forms::Label());
		this->textBoxPrivate = (gcnew System::Windows::Forms::TextBox());
		this->labelRoomStatus = (gcnew System::Windows::Forms::Label());
		this->textBoxRoomStatus = (gcnew System::Windows::Forms::TextBox());
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->SuspendLayout();
		// 
		// textBoxMain
		// 
		this->textBoxMain->BackColor = System::Drawing::SystemColors::ActiveBorder;
		this->textBoxMain->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->textBoxMain->Location = System::Drawing::Point(12, 52);
		this->textBoxMain->Multiline = true;
		this->textBoxMain->Name = L"textBoxMain";
		this->textBoxMain->ReadOnly = true;
		this->textBoxMain->ScrollBars = System::Windows::Forms::ScrollBars::Both;
		this->textBoxMain->Size = System::Drawing::Size(465, 195);
		this->textBoxMain->TabIndex = 0;
		this->textBoxMain->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxMain_TextChanged);
		this->textBoxMain->MouseHover += gcnew System::EventHandler(this, &MyForm::textBoxMain_MouseHover);
		// 
		// labelRoom
		// 
		this->labelRoom->AutoSize = true;
		this->labelRoom->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->labelRoom->Location = System::Drawing::Point(507, 9);
		this->labelRoom->Name = L"labelRoom";
		this->labelRoom->Size = System::Drawing::Size(103, 30);
		this->labelRoom->TabIndex = 8;
		this->labelRoom->Text = L"Room 1";
		// 
		// labelStatus
		// 
		this->labelStatus->AutoSize = true;
		this->labelStatus->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->labelStatus->Location = System::Drawing::Point(12, 9);
		this->labelStatus->Name = L"labelStatus";
		this->labelStatus->Size = System::Drawing::Size(218, 30);
		this->labelStatus->TabIndex = 9;
		this->labelStatus->Text = L"Connection Status";
		// 
		// Room1
		// 
		this->Room1->BackColor = System::Drawing::SystemColors::ActiveBorder;
		this->Room1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->Room1->Location = System::Drawing::Point(501, 52);
		this->Room1->Multiline = true;
		this->Room1->Name = L"Room1";
		this->Room1->ReadOnly = true;
		this->Room1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
		this->Room1->Size = System::Drawing::Size(805, 195);
		this->Room1->TabIndex = 10;
		this->Room1->TextChanged += gcnew System::EventHandler(this, &MyForm::Room1_TextChanged);
		this->Room1->MouseHover += gcnew System::EventHandler(this, &MyForm::Room1_MouseHover);
		// 
		// Room2
		// 
		this->Room2->BackColor = System::Drawing::SystemColors::ActiveBorder;
		this->Room2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->Room2->Location = System::Drawing::Point(501, 307);
		this->Room2->Multiline = true;
		this->Room2->Name = L"Room2";
		this->Room2->ReadOnly = true;
		this->Room2->ScrollBars = System::Windows::Forms::ScrollBars::Both;
		this->Room2->Size = System::Drawing::Size(805, 176);
		this->Room2->TabIndex = 16;
		this->Room2->TextChanged += gcnew System::EventHandler(this, &MyForm::Room2_TextChanged);
		this->Room2->MouseHover += gcnew System::EventHandler(this, &MyForm::Room2_MouseHover);
		// 
		// labelRename
		// 
		this->labelRename->AutoSize = true;
		this->labelRename->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->labelRename->Location = System::Drawing::Point(12, 496);
		this->labelRename->Name = L"labelRename";
		this->labelRename->Size = System::Drawing::Size(180, 30);
		this->labelRename->TabIndex = 17;
		this->labelRename->Text = L"Rename Status";
		// 
		// textBoxRename
		// 
		this->textBoxRename->BackColor = System::Drawing::SystemColors::ActiveBorder;
		this->textBoxRename->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->textBoxRename->Location = System::Drawing::Point(12, 537);
		this->textBoxRename->Multiline = true;
		this->textBoxRename->Name = L"textBoxRename";
		this->textBoxRename->ReadOnly = true;
		this->textBoxRename->ScrollBars = System::Windows::Forms::ScrollBars::Both;
		this->textBoxRename->Size = System::Drawing::Size(465, 187);
		this->textBoxRename->TabIndex = 18;
		this->textBoxRename->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxRename_TextChanged);
		this->textBoxRename->MouseHover += gcnew System::EventHandler(this, &MyForm::textBoxRename_MouseHover);
		// 
		// labelPrivate
		// 
		this->labelPrivate->AutoSize = true;
		this->labelPrivate->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->labelPrivate->Location = System::Drawing::Point(507, 496);
		this->labelPrivate->Name = L"labelPrivate";
		this->labelPrivate->Size = System::Drawing::Size(152, 30);
		this->labelPrivate->TabIndex = 19;
		this->labelPrivate->Text = L"Private Chat";
		// 
		// textBoxPrivate
		// 
		this->textBoxPrivate->BackColor = System::Drawing::SystemColors::ActiveBorder;
		this->textBoxPrivate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->textBoxPrivate->Location = System::Drawing::Point(501, 537);
		this->textBoxPrivate->Multiline = true;
		this->textBoxPrivate->Name = L"textBoxPrivate";
		this->textBoxPrivate->ReadOnly = true;
		this->textBoxPrivate->ScrollBars = System::Windows::Forms::ScrollBars::Both;
		this->textBoxPrivate->Size = System::Drawing::Size(805, 187);
		this->textBoxPrivate->TabIndex = 20;
		this->textBoxPrivate->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxPrivate_TextChanged);
		this->textBoxPrivate->MouseHover += gcnew System::EventHandler(this, &MyForm::textBoxPrivate_MouseHover);
		// 
		// labelRoomStatus
		// 
		this->labelRoomStatus->AutoSize = true;
		this->labelRoomStatus->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->labelRoomStatus->Location = System::Drawing::Point(12, 262);
		this->labelRoomStatus->Name = L"labelRoomStatus";
		this->labelRoomStatus->Size = System::Drawing::Size(158, 30);
		this->labelRoomStatus->TabIndex = 21;
		this->labelRoomStatus->Text = L"Room Status";
		// 
		// textBoxRoomStatus
		// 
		this->textBoxRoomStatus->BackColor = System::Drawing::SystemColors::ActiveBorder;
		this->textBoxRoomStatus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->textBoxRoomStatus->Location = System::Drawing::Point(12, 307);
		this->textBoxRoomStatus->Multiline = true;
		this->textBoxRoomStatus->Name = L"textBoxRoomStatus";
		this->textBoxRoomStatus->ReadOnly = true;
		this->textBoxRoomStatus->ScrollBars = System::Windows::Forms::ScrollBars::Both;
		this->textBoxRoomStatus->Size = System::Drawing::Size(465, 176);
		this->textBoxRoomStatus->TabIndex = 22;
		this->textBoxRoomStatus->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxRoomStatus_TextChanged);
		this->textBoxRoomStatus->MouseHover += gcnew System::EventHandler(this, &MyForm::textBoxRoomStatus_MouseHover);
		// 
		// label1
		// 
		this->label1->AutoSize = true;
		this->label1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label1->Location = System::Drawing::Point(507, 262);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(103, 30);
		this->label1->TabIndex = 23;
		this->label1->Text = L"Room 2";
		// 
		// MyForm
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->BackColor = System::Drawing::SystemColors::ActiveBorder;
		this->ClientSize = System::Drawing::Size(1318, 736);
		this->Controls->Add(this->label1);
		this->Controls->Add(this->textBoxRoomStatus);
		this->Controls->Add(this->labelRoomStatus);
		this->Controls->Add(this->textBoxPrivate);
		this->Controls->Add(this->labelPrivate);
		this->Controls->Add(this->textBoxRename);
		this->Controls->Add(this->labelRename);
		this->Controls->Add(this->Room2);
		this->Controls->Add(this->Room1);
		this->Controls->Add(this->labelStatus);
		this->Controls->Add(this->labelRoom);
		this->Controls->Add(this->textBoxMain);
		this->MaximizeBox = false;
		this->MaximumSize = System::Drawing::Size(1336, 783);
		this->MinimumSize = System::Drawing::Size(1336, 783);
		this->Name = L"MyForm";
		this->Text = L"Server";
		this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
		this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
		this->ResumeLayout(false);
		this->PerformLayout();

	}


#pragma endregion

		int id_user = 0;

		IPEndPoint^ IP_main;
		Socket^ main_server;

		List<Socket^>^ clients;

		List<Object^>^ userData = gcnew List<Object^>();

		List<Socket^>^ room1 = gcnew List<Socket^>();
		List<Socket^>^ room2 = gcnew List<Socket^>();


		//--------------------------------------byteStream--------------------------------------
		// send an object as a stream of bytes
		cli::array<Byte>^ byteStream(Object^ e) {
			MemoryStream^ stream = gcnew MemoryStream();
			BinaryFormatter^ format = gcnew BinaryFormatter();
			format->Serialize(stream, e);
			return stream->ToArray();
		}


		//--------------------------------------listen for client--------------------------------------
		void listen(Object^ server_) {

			Socket^ server = dynamic_cast<Socket^>(server_);

			try
			{
				while (true)
				{
					server->Listen(100);
					Socket^ client = server->Accept();	
				
					if(client) 
					{
						clients->Add(client);
						textBoxMain->Text += client->RemoteEndPoint +  " Connected.\r\n";
					}

					System::Threading::Thread^ receiver = 
					gcnew System::Threading::Thread(
						gcnew System::Threading::ParameterizedThreadStart(this, &MyForm::receive));

					receiver->Start(client);
					receiver->IsBackground = true;
				}
			}
			catch (const std::exception&)
			{
				IP_main = gcnew IPEndPoint(IPAddress::Any, 8989);
				server = gcnew Socket(AddressFamily::InterNetwork, SocketType::Stream, ProtocolType::IP);
			}
		}


		//--------------------------------------connect--------------------------------------
		void connect(Object^ server_) {

			Socket^ server = dynamic_cast<Socket^>(server_);
			clients = gcnew List<Socket^>();

			server = gcnew Socket(AddressFamily::InterNetwork, SocketType::Stream, ProtocolType::IP);
			server->Bind(IP_main);

			System::Threading::Thread^ listener =
				gcnew System::Threading::Thread(
					gcnew System::Threading::ParameterizedThreadStart(this, &MyForm::listen));

			listener->Start(server);
			listener->IsBackground = true;
		}


		//--------------------------------------receive command, message from clients--------------------------------------
		void receive(Object^ client_) {

			Socket^ receiver = dynamic_cast<Socket^>(client_);

			try
			{
				while (true)
				{
					cli::array<System::Byte>^ data = gcnew cli::array<System::Byte>(100000);
					receiver->Receive(data);

					MemoryStream^ stream = gcnew MemoryStream(data);
					BinaryFormatter^ format = gcnew BinaryFormatter();
					Object^ message = format->Deserialize(stream);

					System::String^ command = cli::safe_cast<System::String^>(message);

					///////////////////////////// disconnect /////////////////////////////
					if (command == ":Disconnect:") 
					{
						int threshold = 0,count = 0;

						for each (Socket ^ client in clients)
						{
							threshold++;

							if (client == receiver) 
							{
								for each (String^ username in userData)
								{
									count++;
									if (threshold == count)
									{
										userData->Remove(username);
										break;
									}
								}
								break;
							}
						}

						textBoxMain->Text += receiver->RemoteEndPoint + " Disconnected." + "\r\n";
						receiver->Close();
						clients->Remove(receiver);

						String^ list = ":c:list:";

						for each (String ^ username in userData) 
						{
							list += username + "#";
						}


						Object^ mess = list;

						for each (Socket ^ client in clients) 
						{
							client->Send(byteStream(mess));
						}
						

						break;
					}



					///////////////////////////// connected /////////////////////////////
					else {

						msclr::interop::marshal_context context;
						std::string flag = context.marshal_as<std::string>(command);


						//********************Command********************
						if (flag[0] == ':' && flag[1] == 'c' && flag[2] == ':') 
						{


							//------------------Rename------------------

							if (flag.find(":rename:") != string::npos) 
							{
								int startPoint = 0;
								String^ newName = "";

								for each (auto it in command)
								{
									startPoint++;

									if (startPoint >= 11) newName += it;
								}

								String^ res = (String^)userData[clients->IndexOf(receiver)];
								userData[clients->IndexOf(receiver)] = newName;
								Object^ mess = ":c:end_rename:" + newName;
								receiver->Send(byteStream(mess));

								res += " rename to: " + newName;
								
								String^ list = ":c:list:";
								for each (String ^ username in userData) {
									list += username + "#";
								}

								Object^ mess_list = list;
								for each (Socket ^ client in clients) {
									client->Send(byteStream(mess_list));
								}

								textBoxRename->Text += res + "\r\n";
							}



							//------------------Connect to a room------------------

							if (flag.find(":connect_room:") != string::npos)
							{
								// room 1
								if (flag[flag.size() - 1] == '1')
								{
									room1->Add(receiver);
									textBoxRoomStatus->Text += receiver->RemoteEndPoint + " Connect to Room 1" + "\r\n";
									String^ list = ":c:list_room:";
									int index = 0;

									for each (Socket^ client in room1) {
										index = clients->IndexOf(client);
										list += userData[index] + "#";
									}


									Object^ mess = list;

									for each (Socket ^ client in room1) {
										client->Send(byteStream(mess));
									}


									Object^ user_connect = ":m:1:" + userData[clients->IndexOf(receiver)] + " connected";
									
									for each (Socket ^ client in room1) {
										client->Send(byteStream(user_connect));
									}
								}

								// room 2
								else if (flag[flag.size() - 1] == '2') 
								{
									room2->Add(receiver);
									textBoxRoomStatus->Text += receiver->RemoteEndPoint + " Connect to Room 2" + "\r\n";

									String^ list = ":c:list_room:";
									int index = 0;

									for each (Socket ^ client in room2) {
										index = clients->IndexOf(client);
										list += userData[index] + "#";
									}


									Object^ mess = list;

									for each (Socket ^ client in room2) {
										client->Send(byteStream(mess));
									}


									Object^ user_connect = ":m:2:" + userData[clients->IndexOf(receiver)] + " connected";
									
									for each (Socket ^ client in room2) {
										client->Send(byteStream(user_connect));
									}
								}
							}



							//------------------disconnect to a room------------------

							if (flag.find(":dis_connect_room:") != string::npos) 
							{
								// room 1
								if (flag[flag.size() - 1] == '1') 
								{
									room1->Remove(receiver);
									textBoxRoomStatus->Text += receiver->RemoteEndPoint + " Disconnect to Room 1" + "\r\n";

									String^ list = ":c:list_room:";
									int index = 0;

									for each (Socket ^ client in room1) {
										index = clients->IndexOf(client);
										list += userData[index] + "#";
									}


									Object^ mess = list;

									for each (Socket ^ client in room1) {
										client->Send(byteStream(mess));
									}


									Object^ user_connect = ":m:1:" + userData[clients->IndexOf(receiver)] + " disconnected";
									
									for each (Socket ^ client in room1) {
										client->Send(byteStream(user_connect));
									}
								}
								// room 2
								else if (flag[flag.size() - 1] == '2') 
								{
									room2->Remove(receiver);
									textBoxRoomStatus->Text += receiver->RemoteEndPoint + " Disconnect to Room 2" + "\r\n";

									String^ list = ":c:list_room:";
									int index = 0;

									for each (Socket ^ client in room2) {
										index = clients->IndexOf(client);
										list += userData[index] + "#";
									}

									
									Object^ mess = list;
									
									for each (Socket ^ client in room2) {
										client->Send(byteStream(mess));
									}


									Object^ user_connect = ":m:2:" + userData[clients->IndexOf(receiver)] + " disconnected";
									
									for each (Socket ^ client in room2) {
										client->Send(byteStream(user_connect));
									}
								}
							}



							//------------------list_user------------------

							if (flag.find(":list_user:") != string::npos) 
							{
								String^ list = ":c:list:";

								for each (String ^ username in userData) {
									list += username + "#";
								}


								Object^ mess = list;

								for each (Socket ^ client in clients) {
									client->Send(byteStream(mess));
								}

							}



							//------------------new_user------------------

							if (flag.find(":new_user:") != string::npos) 
							{
								id_user++;

								String^ check_name = "Client" + id_user;
							
								for each (String ^ username in userData) {
									while (check_name == username)
									{
										id_user++;
										break;
									}
								}


								userData->Add("Client" + id_user);

								Object^ mess = ":c:end_rename:" + "Client" + id_user;
								receiver->Send(byteStream(mess));

								String^ list = ":c:list:";

								for each (String ^ username in userData) {
									list += username + "#";
								}


								Object^ mess_list = list;

								for each (Socket ^ client in clients) {
									client->Send(byteStream(mess_list));
								}
							}
						}



						//********************group chat********************
						else if (flag[0] == ':' && flag[1] == 'm' && flag[2] == ':')
						{
							// room 1
							if (flag[3] == '1' && flag[4] == ':') 
							{
								String^ mess_ = "";
								int startPoint = 0;

								for each (auto textMessage in command)
								{
									startPoint++;
									if (startPoint >= 6) 
									{
										mess_ += textMessage;
									}
								}

								Room1->Text += mess_ + "\r\n";

								for each (Socket ^ client in room1) {
									client->Send(data);
								}
							}

							// room 2
							else if (flag[3] == '2' && flag[4] == ':') 
							{
								String^ mess_ = "";
								int startPoint = 0;

								for each (auto textMessage in command)
								{
									startPoint++;
									if (startPoint >= 6) 
									{
										mess_ += textMessage;
									}
								}

								Room2->Text += mess_ + "\r\n";

								for each (Socket ^ client in room2) {
									client->Send(data);
								}
							}
						}



						//********************Private chat********************
						else if (flag[0] == ':' && flag[1] == 'p' && flag[2] == ':') 
						{
							String^ private_name = "";
							String^ mess_ = "";
							int threshold = 0, count = 0;


							for each (auto partnerName in command)
							{
								if (threshold >= 3) 
								{
									if (partnerName == ':') break;
									private_name += partnerName;
								}
								threshold++;
							}


							for each (auto textMessage in command)
							{
								if (count > threshold) 
									mess_ += textMessage;
								
								count++;
							}


							Socket^ user_recieve = clients[userData->IndexOf(private_name)];
							Object^ user_send = userData[clients->IndexOf(receiver)];
							user_recieve->Send(byteStream(":p:" + user_send + ": " + mess_));
							receiver->Send(byteStream(":p:" + user_send + ": " + mess_));
							textBoxPrivate->Text += user_send + " : " + mess_ + "\r\n";
						}
					}
				}
			}
			catch (const std::exception&)
			{
				clients->Remove(receiver);
				receiver->Close();
			}
		}


		
		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
			IP_main = gcnew IPEndPoint(IPAddress::Any, 8989);
			main_server = gcnew Socket(AddressFamily::InterNetwork, SocketType::Stream, ProtocolType::IP);

			System::Threading::Thread^ startConnection =
				gcnew System::Threading::Thread(
					gcnew System::Threading::ParameterizedThreadStart(this, &MyForm::connect));

			startConnection->Start(main_server);
			startConnection->IsBackground = true;
		}


		private: System::Void textBoxMain_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			textBoxMain->SelectionStart = textBoxMain->Text->Length;
			textBoxMain->ScrollToCaret();
		}


		private: System::Void textBoxRoomStatus_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			textBoxRoomStatus->SelectionStart = textBoxRoomStatus->Text->Length;
			textBoxRoomStatus->ScrollToCaret();
		}


		private: System::Void textBoxRename_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			textBoxRename->SelectionStart = textBoxRename->Text->Length;
			textBoxRename->ScrollToCaret();
		}


		private: System::Void Room1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			Room1->SelectionStart = Room1->Text->Length;
			Room1->ScrollToCaret();
		}


		private: System::Void Room2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			Room2->SelectionStart = Room2->Text->Length;
			Room2->ScrollToCaret();
		}


		private: System::Void textBoxPrivate_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			textBoxPrivate->SelectionStart = textBoxPrivate->Text->Length;
			textBoxPrivate->ScrollToCaret();
		}


		private: System::Void textBoxMain_MouseHover(System::Object^ sender, System::EventArgs^ e) {
			System::Windows::Forms::ToolTip^ ToolTip1 = gcnew System::Windows::Forms::ToolTip();
			ToolTip1->SetToolTip(this->textBoxMain, "This text box displays connections of each client to server.");
		}


		private: System::Void textBoxRoomStatus_MouseHover(System::Object^ sender, System::EventArgs^ e) {
			System::Windows::Forms::ToolTip^ ToolTip1 = gcnew System::Windows::Forms::ToolTip();
			ToolTip1->SetToolTip(this->textBoxRoomStatus, "This text box displays connections of each client to each room.");
		}


		private: System::Void Room1_MouseHover(System::Object^ sender, System::EventArgs^ e) {
			System::Windows::Forms::ToolTip^ ToolTip1 = gcnew System::Windows::Forms::ToolTip();
			ToolTip1->SetToolTip(this->Room1, "This text box shows conversations of Room 1.");
		}


		private: System::Void Room2_MouseHover(System::Object^ sender, System::EventArgs^ e) {
			System::Windows::Forms::ToolTip^ ToolTip1 = gcnew System::Windows::Forms::ToolTip();
			ToolTip1->SetToolTip(this->Room2, "This text box shows conversations of Room 2.");
		}


		private: System::Void textBoxRename_MouseHover(System::Object^ sender, System::EventArgs^ e) {
			System::Windows::Forms::ToolTip^ ToolTip1 = gcnew System::Windows::Forms::ToolTip();
			ToolTip1->SetToolTip(this->textBoxRename, "This text box displays rename status of each client.");
		}


		private: System::Void textBoxPrivate_MouseHover(System::Object^ sender, System::EventArgs^ e) {
			System::Windows::Forms::ToolTip^ ToolTip1 = gcnew System::Windows::Forms::ToolTip();
			ToolTip1->SetToolTip(this->textBoxPrivate, "This text box shows conversation of private chat.");
		}
		

		private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
			try {
				main_server->Send(byteStream(":exit:"));
			}
			catch (SocketException^ e) {
				MessageBox::Show("There are clients connected to this server!");
			}
		}

	};
}
