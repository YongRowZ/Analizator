#pragma once

#include <string>
#include <fstream>

#include <cliext/vector>
#include <map>

namespace IMEI_IMSI_Analizator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace std;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::BindingSource^  bindingSource1;
	protected:
	private: System::Data::DataSet^  dataSet1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  файлToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  очиститьДанныеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  удалитьСтрокуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  очиститьToolStripMenuItem;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ToolStripMenuItem^  анализToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Data::DataSet^  dataSet2;
	private: System::Windows::Forms::BindingSource^  bindingSource2;
	private: System::Windows::Forms::ToolStripMenuItem^  поIMSIToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  поIMEIToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^  очиститьToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  сохранитьToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  удалитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  выходToolStripMenuItem;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::ToolStripMenuItem^  всеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  таблицуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  данныхToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  анализаToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::ToolStripMenuItem^  поискИностранныхToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  пометитьСтрокуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  пометитьСтрокуToolStripMenuItem1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьToolStripMenuItem1;



	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->dataSet1 = (gcnew System::Data::DataSet());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->анализToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->поIMSIToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->поIMEIToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->поискИностранныхToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->очиститьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->всеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->таблицуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->данныхToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->анализаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->сохранитьToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->пометитьСтрокуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьСтрокуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->очиститьДанныеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataSet2 = (gcnew System::Data::DataSet());
			this->bindingSource2 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->пометитьСтрокуToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->очиститьToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			this->contextMenuStrip2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataSet1
			// 
			this->dataSet1->DataSetName = L"NewDataSet";
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(3, 6);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(828, 575);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellMouseDown += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &Form1::dataGridView1_CellMouseDown);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->файлToolStripMenuItem,
					this->анализToolStripMenuItem, this->поискИностранныхToolStripMenuItem, this->очиститьToolStripMenuItem, this->выходToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(863, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"файлToolStripMenuItem.Image")));
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(167, 24);
			this->файлToolStripMenuItem->Text = L"Добавить данные";
			this->файлToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::файлToolStripMenuItem_Click);
			// 
			// анализToolStripMenuItem
			// 
			this->анализToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->поIMSIToolStripMenuItem,
					this->поIMEIToolStripMenuItem
			});
			this->анализToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"анализToolStripMenuItem.Image")));
			this->анализToolStripMenuItem->Name = L"анализToolStripMenuItem";
			this->анализToolStripMenuItem->Size = System::Drawing::Size(119, 24);
			this->анализToolStripMenuItem->Text = L"Анализ по:";
			// 
			// поIMSIToolStripMenuItem
			// 
			this->поIMSIToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"поIMSIToolStripMenuItem.Image")));
			this->поIMSIToolStripMenuItem->Name = L"поIMSIToolStripMenuItem";
			this->поIMSIToolStripMenuItem->Size = System::Drawing::Size(121, 26);
			this->поIMSIToolStripMenuItem->Text = L"IMSI";
			this->поIMSIToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::поIMSIToolStripMenuItem_Click);
			// 
			// поIMEIToolStripMenuItem
			// 
			this->поIMEIToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"поIMEIToolStripMenuItem.Image")));
			this->поIMEIToolStripMenuItem->Name = L"поIMEIToolStripMenuItem";
			this->поIMEIToolStripMenuItem->Size = System::Drawing::Size(121, 26);
			this->поIMEIToolStripMenuItem->Text = L"IMEI";
			this->поIMEIToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::поIMEIToolStripMenuItem_Click);
			// 
			// поискИностранныхToolStripMenuItem
			// 
			this->поискИностранныхToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"поискИностранныхToolStripMenuItem.Image")));
			this->поискИностранныхToolStripMenuItem->Name = L"поискИностранныхToolStripMenuItem";
			this->поискИностранныхToolStripMenuItem->Size = System::Drawing::Size(311, 24);
			this->поискИностранныхToolStripMenuItem->Text = L"Поиск иностранных идентификаторов";
			this->поискИностранныхToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::поискИностранныхToolStripMenuItem_Click);
			// 
			// очиститьToolStripMenuItem
			// 
			this->очиститьToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->всеToolStripMenuItem,
					this->таблицуToolStripMenuItem
			});
			this->очиститьToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"очиститьToolStripMenuItem.Image")));
			this->очиститьToolStripMenuItem->Name = L"очиститьToolStripMenuItem";
			this->очиститьToolStripMenuItem->Size = System::Drawing::Size(110, 24);
			this->очиститьToolStripMenuItem->Text = L"Очистить:";
			// 
			// всеToolStripMenuItem
			// 
			this->всеToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"всеToolStripMenuItem.Image")));
			this->всеToolStripMenuItem->Name = L"всеToolStripMenuItem";
			this->всеToolStripMenuItem->Size = System::Drawing::Size(153, 26);
			this->всеToolStripMenuItem->Text = L"Все";
			this->всеToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::всеToolStripMenuItem_Click);
			// 
			// таблицуToolStripMenuItem
			// 
			this->таблицуToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->данныхToolStripMenuItem,
					this->анализаToolStripMenuItem
			});
			this->таблицуToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"таблицуToolStripMenuItem.Image")));
			this->таблицуToolStripMenuItem->Name = L"таблицуToolStripMenuItem";
			this->таблицуToolStripMenuItem->Size = System::Drawing::Size(153, 26);
			this->таблицуToolStripMenuItem->Text = L"Таблицу:";
			// 
			// данныхToolStripMenuItem
			// 
			this->данныхToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"данныхToolStripMenuItem.Image")));
			this->данныхToolStripMenuItem->Name = L"данныхToolStripMenuItem";
			this->данныхToolStripMenuItem->Size = System::Drawing::Size(151, 26);
			this->данныхToolStripMenuItem->Text = L"Данных";
			this->данныхToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::данныхToolStripMenuItem_Click);
			// 
			// анализаToolStripMenuItem
			// 
			this->анализаToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"анализаToolStripMenuItem.Image")));
			this->анализаToolStripMenuItem->Name = L"анализаToolStripMenuItem";
			this->анализаToolStripMenuItem->Size = System::Drawing::Size(151, 26);
			this->анализаToolStripMenuItem->Text = L"Анализа";
			this->анализаToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::анализаToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"выходToolStripMenuItem.Image")));
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(87, 24);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::выходToolStripMenuItem_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(6, 21);
			this->textBox1->MaxLength = 15;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(222, 22);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
			this->textBox1->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::textBox1_KeyUp);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->сохранитьToolStripMenuItem1,
					this->пометитьСтрокуToolStripMenuItem, this->удалитьСтрокуToolStripMenuItem, this->очиститьДанныеToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(204, 108);
			// 
			// сохранитьToolStripMenuItem1
			// 
			this->сохранитьToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"сохранитьToolStripMenuItem1.Image")));
			this->сохранитьToolStripMenuItem1->Name = L"сохранитьToolStripMenuItem1";
			this->сохранитьToolStripMenuItem1->Size = System::Drawing::Size(203, 26);
			this->сохранитьToolStripMenuItem1->Text = L"Сохранить";
			this->сохранитьToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::сохранитьToolStripMenuItem1_Click);
			// 
			// пометитьСтрокуToolStripMenuItem
			// 
			this->пометитьСтрокуToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"пометитьСтрокуToolStripMenuItem.Image")));
			this->пометитьСтрокуToolStripMenuItem->Name = L"пометитьСтрокуToolStripMenuItem";
			this->пометитьСтрокуToolStripMenuItem->Size = System::Drawing::Size(203, 26);
			this->пометитьСтрокуToolStripMenuItem->Text = L"Пометить строку";
			this->пометитьСтрокуToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::пометитьСтрокуToolStripMenuItem_Click);
			// 
			// удалитьСтрокуToolStripMenuItem
			// 
			this->удалитьСтрокуToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"удалитьСтрокуToolStripMenuItem.Image")));
			this->удалитьСтрокуToolStripMenuItem->Name = L"удалитьСтрокуToolStripMenuItem";
			this->удалитьСтрокуToolStripMenuItem->Size = System::Drawing::Size(203, 26);
			this->удалитьСтрокуToolStripMenuItem->Text = L"Удалить строку";
			this->удалитьСтрокуToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::удалитьСтрокуToolStripMenuItem_Click);
			// 
			// очиститьДанныеToolStripMenuItem
			// 
			this->очиститьДанныеToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"очиститьДанныеToolStripMenuItem.Image")));
			this->очиститьДанныеToolStripMenuItem->Name = L"очиститьДанныеToolStripMenuItem";
			this->очиститьДанныеToolStripMenuItem->Size = System::Drawing::Size(203, 26);
			this->очиститьДанныеToolStripMenuItem->Text = L"Очистить данные";
			this->очиститьДанныеToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::очиститьДанныеToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(220, 15);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 34);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Сбросить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(6, 3);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(825, 452);
			this->dataGridView2->TabIndex = 4;
			this->dataGridView2->CellMouseDown += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &Form1::dataGridView2_CellMouseDown);
			// 
			// dataSet2
			// 
			this->dataSet2->DataSetName = L"NewDataSet";
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->сохранитьToolStripMenuItem,
					this->пометитьСтрокуToolStripMenuItem1, this->удалитьToolStripMenuItem, this->очиститьToolStripMenuItem1
			});
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(204, 108);
			// 
			// сохранитьToolStripMenuItem
			// 
			this->сохранитьToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"сохранитьToolStripMenuItem.Image")));
			this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(203, 26);
			this->сохранитьToolStripMenuItem->Text = L"Сохранить";
			this->сохранитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::сохранитьToolStripMenuItem_Click);
			// 
			// пометитьСтрокуToolStripMenuItem1
			// 
			this->пометитьСтрокуToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"пометитьСтрокуToolStripMenuItem1.Image")));
			this->пометитьСтрокуToolStripMenuItem1->Name = L"пометитьСтрокуToolStripMenuItem1";
			this->пометитьСтрокуToolStripMenuItem1->Size = System::Drawing::Size(203, 26);
			this->пометитьСтрокуToolStripMenuItem1->Text = L"Пометить строку";
			this->пометитьСтрокуToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::пометитьСтрокуToolStripMenuItem1_Click);
			// 
			// удалитьToolStripMenuItem
			// 
			this->удалитьToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"удалитьToolStripMenuItem.Image")));
			this->удалитьToolStripMenuItem->Name = L"удалитьToolStripMenuItem";
			this->удалитьToolStripMenuItem->Size = System::Drawing::Size(203, 26);
			this->удалитьToolStripMenuItem->Text = L"Удалить строку";
			this->удалитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::удалитьToolStripMenuItem_Click);
			// 
			// очиститьToolStripMenuItem1
			// 
			this->очиститьToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"очиститьToolStripMenuItem1.Image")));
			this->очиститьToolStripMenuItem1->Name = L"очиститьToolStripMenuItem1";
			this->очиститьToolStripMenuItem1->Size = System::Drawing::Size(203, 26);
			this->очиститьToolStripMenuItem1->Text = L"Очистить данные";
			this->очиститьToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::очиститьToolStripMenuItem1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(6, 21);
			this->textBox2->MaxLength = 15;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(222, 22);
			this->textBox2->TabIndex = 5;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox2_KeyPress);
			this->textBox2->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::textBox2_KeyUp);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(222, 14);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 34);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Сбросить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Location = System::Drawing::Point(6, 461);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(333, 55);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Фильтр:";
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Location = System::Drawing::Point(6, 587);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(333, 55);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Фильтр:";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(6, 21);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(469, 151);
			this->richTextBox1->TabIndex = 9;
			this->richTextBox1->Text = L"";
			this->richTextBox1->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::richTextBox1_KeyUp);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(370, 134);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(105, 38);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Сбросить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->richTextBox1);
			this->groupBox3->Location = System::Drawing::Point(345, 461);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(481, 178);
			this->groupBox3->TabIndex = 12;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Приоритетные идентификаторы:";
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 547);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(291, 16);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Количество уникальных идентификаторов:";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(323, 547);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 16);
			this->label2->TabIndex = 14;
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button4->Location = System::Drawing::Point(363, 602);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(182, 34);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Открыть Конвектор";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 31);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(845, 677);
			this->tabControl1->TabIndex = 16;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(837, 648);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Загруженные данные";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Controls->Add(this->groupBox1);
			this->tabPage2->Controls->Add(this->groupBox3);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(837, 648);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Анализированные данные";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(863, 711);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MinimumSize = System::Drawing::Size(881, 758);
			this->Name = L"Form1";
			this->Text = L"Экспрес Анализ";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Form1::Form1_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->EndInit();
			this->contextMenuStrip2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//	Переменные таблиц	//
		/////////////////////////

	public: DataTable ^dataTable = gcnew DataTable();
	public:	DataRow ^Row;

	public: DataTable ^dataTable2 = gcnew DataTable();
	public:	DataRow ^Row2;
		/////////////////////////

		//	Дополнительные переменные
		/////////////////////////////

		/////////////////////////////


////////////	Функции								  ////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		//	Дополнительные функции /////////////////////
		////////////////////////////////////////////////

			//	Функция преобразования String^ в std::string
	private: string SystemToStl(String ^s)
	{
		using namespace Runtime::InteropServices;
		const char* ptr = (const char*)(Marshal::StringToHGlobalAnsi(s).ToPointer());
		return string(ptr);
	}

			//	Функция обновления таблицы
	private: void update_table(DataSet ^dataSet, DataTable ^table, BindingSource ^source, DataGridView ^dataGrid)
	{
		dataSet->Tables->Clear();
		dataSet->Tables->Add(table);
		source->DataSource = dataSet->Tables[0];
		dataGrid->DataSource = source;
	}

			//	Функция очистки таблицы
	private: void cleanDataGrid(DataGridView ^DataGrid, DataTable ^table)
	{
		try
		{
			DataGrid->AllowUserToAddRows = false;
			table->Clear();
			DataGrid->AllowUserToAddRows = true;
		}
		catch (...){}
	}

			//	Функция поиска в dataGridViev
	private: void search(TextBox ^textBox, BindingSource ^source, DataGridView ^dataGrid)
	{
		if (textBox->Text != "")
		{
			source->Filter = "[IMSI] LIKE '" + textBox->Text + "*' OR "
				"[IMEI] LIKE '" + textBox->Text + "*'";

			dataGrid->DataSource = source;
		}

		else
		{
			source->Filter = "";
			dataGrid->DataSource = source;
		}
	}

			//	Функция очистки поля поиска
	private: void search_clean(TextBox ^textBox, BindingSource ^source, DataGridView ^dataGrid)
	{
		textBox->Text = "";
		source->Filter = "";
		dataGrid->DataSource = source;
	}

		   //	Функция сохранения выгрузки CSV
	private: void saveDataGridToCSV (DataGridView ^dgv)
	{
		dgv->AllowUserToAddRows = false;

		saveFileDialog1->Filter = L"CSV выгрузка|*.csv";

		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			ofstream ofs;
			ofs.open(SystemToStl(saveFileDialog1->FileName), ios_base::app);

			ofs << "IMEI;IMSI;Дата/Время\n";

			for (int row = 0; row < dgv->RowCount; row++)
			{
				for (int col = 0; col < 3; col++)
				{
					ofs << SystemToStl(dgv->Rows[row]->Cells[col]->Value->ToString());

					if (col != 2)
					{
						ofs << ";";
					}
				}

				ofs << "\n";
			}

			ofs.close();
		}

		dgv->AllowUserToAddRows = true;
	}
		////////////////////////////////////////////////

		//	Основные функции	////////////////////////
		////////////////////////////////////////////////

			//	Функция анализа
	private: void analiz(int param, int param2)
	{
		cleanDataGrid(dataGridView2, dataTable2);

		this->dataGridView1->AllowUserToAddRows = false;
		this->dataGridView2->AllowUserToAddRows = false;

		map<string, int> myMap;
		map<string, string> mapData;

		for (int nbRow = 0; nbRow < dataGridView1->Rows->Count; nbRow++)
		{
			auto it = myMap.find(SystemToStl(dataGridView1[param, nbRow]->Value->ToString()));

			if ((it != myMap.end()) && (dataGridView1[param, nbRow]->Value != ""))
			{
				myMap.emplace(SystemToStl(dataGridView1[param, nbRow]->Value->ToString()), it->second++);

				auto it2 = mapData.find(SystemToStl(dataGridView1[param, nbRow]->Value->ToString()));

				if (it2 != mapData.end())
				{
					if (!strstr(it2->second.c_str(), SystemToStl(dataGridView1[param2, nbRow]->Value->ToString()).c_str()))
					{
						if (!strstr(it2->second.c_str(), ""))
						{
							it2->second += SystemToStl(dataGridView1[param2, nbRow]->Value->ToString());
						}

						else 
						{
							it2->second += "; " + SystemToStl(dataGridView1[param2, nbRow]->Value->ToString());
						}
					}
				}
			}

			else
			{
				myMap.emplace(SystemToStl(dataGridView1[param, nbRow]->Value->ToString()), 1);
				mapData.emplace(SystemToStl(dataGridView1[param, nbRow]->Value->ToString()), SystemToStl(dataGridView1[param2, nbRow]->Value->ToString()));
			}
		}


		for (auto it = myMap.begin(); it != myMap.end(); it++)
		{
			if (it->second > 1)
			{
				Row2 = dataTable2->NewRow();
				Row2[param] = gcnew String(it->first.c_str());
				Row2[param2] = gcnew String(mapData.find(it->first)->second.c_str());
				Row2[4] = it->second;

				for (int row = 0; row < dataGridView1->Rows->Count; row++)
				{
					for (int col = 0; col < 4; col++)
					{
						if (gcnew String(it->first.c_str()) != dataGridView1[param, row]->Value->ToString())
						{
							break;
						}

						else
						{
							if (col == 3 && !strstr(SystemToStl(Row2[col]->ToString()).c_str(), SystemToStl(dataGridView1[col, row]->Value->ToString()).c_str()))
							{
								Row2[col] = dataGridView1[col, row]->Value->ToString()
									+ ";"
									+ Row2[col]->ToString();
							}

							else
								if ((col != param) && (col != param2))
								{
									Row2[col] = dataGridView1[col, row]->Value->ToString();
								}
						}
					}
				}

				dataTable2->Rows->Add(Row2);
			}
		}

		this->dataGridView1->AllowUserToAddRows = true;
		this->dataGridView2->AllowUserToAddRows = true;
	}

			//	Функция добавления файла с СОКОЛ4
	private: void addSOKOL(String ^fileName)
	{
		ifstream file(SystemToStl(fileName));

		string s, date, data;

		getline(file, s);

		while (getline(file, s))
		{
			if (strstr(s.c_str(), "</profile>"))
			{
				break;
			}

			if (strstr(s.c_str(), "<date>"))
			{
				s.erase(0, s.find("<date>") + 6);
				date = s.substr(6, 2) + "." + s.substr(4, 2) + "." + s.substr(0, 4);
			}

			if (strstr(s.c_str(), "record"))
			{
				Row = dataTable->NewRow();

				s.erase(0, s.find("imsi=") + 6);
				data = s.substr(0, s.find('"'));
				Row[0] = gcnew String(data.c_str());

				s.erase(0, s.find("imei=") + 6);
				data = s.substr(0, s.find('"'));
				Row[1] = gcnew String(data.c_str());

				Row[2] = gcnew String(date.c_str());
				Row[3] = System::IO::Path::GetFileNameWithoutExtension(openFileDialog1->SafeFileName);

				dataTable->Rows->Add(Row);
			}
		}

		s.clear();
		date.clear();
		data.clear();

		// Закрытие соединения
		file.close();
	}

			//	Функция добавления файла с МОДУЛЯ
	private: void addMODUL(String ^fileName)
	{
		ifstream file(SystemToStl(fileName));

		map< string, string > mapMODULE;
		map< string, string > mapDate;

		string s, Date, IMEI, IMSI;

		int position_IMEI = 15,
			position_IMSI = 14,
			position_Date = 2;

		int position;

		while (getline(file, s))
		{
			position = 0;

			while (!s.empty())
			{
				if (position >= 16)	
				{	
					break;
					s.clear();
				}

				if (position == position_Date)
				{
					Date = s.substr(0, s.find(";"));
				}

				if (position == position_IMSI)
				{
					IMSI = s.substr(0, s.find(";"));
				}

				if (position == position_IMEI)
				{
					IMEI = s.substr(0, s.find(";"));
				}

				s.erase(0, s.find(";") + 1);
				position++;

			}

			auto it = mapMODULE.find(IMSI);

			if (it == mapMODULE.end())
			{
				if (!IMSI.empty())
				{
					mapMODULE.emplace(IMSI, IMEI);
					mapDate.emplace(IMSI, Date);
				}
			}

			else
			{
				if (!IMEI.empty())
				{
					it->second = IMEI;
				}
			}
		}

		for (auto it = mapMODULE.begin(); it != mapMODULE.end(); it++)
		{
			Row = dataTable->NewRow();

			Row[0] = gcnew String(it->first.c_str());
			Row[1] = gcnew String(it->second.c_str());

			auto it2 = mapDate.find(it->first);
			Row[2] = gcnew String(it2->second.c_str());

			Row[3] = System::IO::Path::GetFileNameWithoutExtension(openFileDialog1->SafeFileName);

			dataTable->Rows->Add(Row);
		}
		
		mapMODULE.clear();
		mapDate.clear();

		s.clear();
		Date.clear();
		IMEI.clear();
		IMSI.clear();

		// Закрытие соединения
		file.close();
	}

			//	Функция добавления файла с PostWorks
	private: void addPostWorks(String ^fileName)
	{
		ifstream file(SystemToStl(fileName));

		map< string, string > mapIMEI;
		map< string, string > mapDate;

		string s, data, IMSI, IMEI, date;

		int position_IMEI,
			position_IMSI,
			position_date,
			position_search = 0;

		getline(file, s);

		while (!s.empty())
		{
			data = s.substr(0, s.find(";"));

			if (strstr(data.c_str(), "/"))
			{
				position_date = position_search;
				data.clear();
			}


			if (strstr(data.c_str(), "IMSI"))
			{
				position_IMSI = position_search;
				data.clear();
			}

			if (strstr(data.c_str(), "IMEI"))
			{
				position_IMEI = position_search;
				data.clear();
			}

			else
			{
				data.clear();
			}

			s.erase(0, s.find(";") + 1);
			position_search++;

		}

		data.clear();
		s.clear();

		while (getline(file, s))
		{
			for (int i = 0; i <= position_search; i++)
			{
				try
				{
					data = s.substr(0, s.find(";"));

					if (i == position_IMSI)
					{
						data.erase(0, 1);
						data = data.substr(0, data.find('"'));
						IMSI = data;
						data.clear();
					}

					if (i == position_IMEI)
					{
						data.erase(0, 1);
						data = data.substr(0, data.find('"'));
						IMEI = data;
						data.clear();
					}

					if (i == position_date)
					{
						data.erase(0, 1);
						data = data.substr(0, data.find('"'));
						date = data;
						data.clear();
					}

					s.erase(0, s.find(";") + 1);
				}

				catch (...)
				{
					break;
				}
			}

			auto it = mapIMEI.find(IMSI);

			if (it == mapIMEI.end())
			{
				if (!IMSI.empty())
				{
					mapIMEI.emplace(IMSI, IMEI);
					mapDate.emplace(IMSI, date);
				}
			}

			else
			{
				if (!IMEI.empty())
				{
					it->second = IMEI;
				}
			}
		}

		for (auto it = mapIMEI.begin(); it != mapIMEI.end(); it++)
		{
			Row = dataTable->NewRow();

			Row[0] = gcnew String(it->first.c_str());
			Row[1] = gcnew String(it->second.c_str());

			auto it2 = mapDate.find(it->first);
			Row[2] = gcnew String(it2->second.c_str());

			Row[3] = System::IO::Path::GetFileNameWithoutExtension(openFileDialog1->SafeFileName);

			dataTable->Rows->Add(Row);
		}


		mapIMEI.clear();
		mapDate.clear();

		IMSI.clear();
		IMEI.clear();
		date.clear();
		s.clear();
		data.clear();

		// Закрытие соединения
		file.close();
	}

			//	Функция добавления выгрузки моей программы
	private: void addCSV_MyProgram(String ^fileName)
	{
		string s;

		ifstream file(SystemToStl(fileName));

		getline(file, s);

		if (strstr(s.c_str(), "IMEI;IMSI;Дата/Время"))
		{
			while (getline(file, s))
			{
				Row = dataTable->NewRow();

				string str;

				for (int i = 0; i < 3; i++)
				{
					str = s.substr(0, s.find(";"));
					s.erase(0, s.find(";") + 1);

					Row[i] = gcnew String(str.c_str());
				}

				Row[3] = System::IO::Path::GetFileNameWithoutExtension(openFileDialog1->SafeFileName);

				dataTable->Rows->Add(Row);
			}
		}

		else
		{
			MessageBox::Show("Неизвестный формат файла!");
		}
	}
		////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////	Основной фуннкционал				  ////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		//	Открытие конвектора
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
	{
		system("start Module\\Convertor.exe");
	}

		// menuStrip///////////////////////////////////
		//////////////////////////////////////////////

			//	Добавление выгрузки к Анализу
	private: System::Void файлToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		
		openFileDialog1->Filter = L"CSV выгрузка QtPostWorks.csv; CSV выгрузка Модуль.csv; Выгрузка Сокол4 (*.*)|*.*";

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			анализToolStripMenuItem->Visible = true;
			поискИностранныхToolStripMenuItem->Visible = true;
			очиститьToolStripMenuItem->Visible = true;

			string s;

			String^ fileName = openFileDialog1->FileName;

			ifstream file(SystemToStl(fileName));

			getline(file, s);

			//	Выгрузка с СОКОЛ4
			if (strstr(s.c_str(), "<profile>"))
			{
				file.close();
				s.clear();

				addSOKOL(fileName);
			}

			//	Выгрузка Модуль(Страя)
			else if (strstr(s.c_str(), "EDM"))
			{
				file.close();
				s.clear();

				addMODUL(fileName);
			}

			//	Выгрузка Модуль(Новая)
			else if (strstr(s.c_str(), "Modu"))
			{
				file.close();
				s.clear();

				addMODUL(fileName);
			}

			//	Выгрузка QtPostWorks
			else if ((strstr(s.c_str(), "IMSI") || strstr(s.c_str(), "IMEI")) && strstr(s.c_str(), "\""))
			{
				file.close();
				s.clear();

				addPostWorks(fileName);
			}

			else if (strstr(s.c_str(), "IMEI;IMSI;Дата/Время"))
			{
				file.close();
				s.clear();

				addCSV_MyProgram(fileName);
			}

			else
			{
				MessageBox::Show("Неизвестный формат файла");
			}

			//dataGridView1->ContextMenuStrip = contextMenuStrip1;

			if (tabControl1->SelectedIndex == 1)
			{
				tabControl1->SelectedIndex = 0;
			}
		}
	}

			//	Анализ	//////////////////
			/////////////////////////////

				//	Анализ по IMSI
	private: System::Void поIMSIToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (!tabControl1->TabPages->ContainsKey("tabPage2"))
		{
			tabControl1->TabPages->Insert(1, tabPage2);
		}

		analiz(0,1);
		dataGridView2->ContextMenuStrip = contextMenuStrip2;

		label2->Text = dataGridView2->Rows->Count.ToString();

		if (tabControl1->SelectedIndex == 0)
		{
			tabControl1->SelectedIndex = 1;
		}
	}

				//	Анализ по IMEI
	private: System::Void поIMEIToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (!tabControl1->TabPages->ContainsKey("tabPage2"))
		{
			tabControl1->TabPages->Insert(1, tabPage2);
		}

		analiz(1,0);
		dataGridView2->ContextMenuStrip = contextMenuStrip2;

		label2->Text = dataGridView2->Rows->Count.ToString();

		if (tabControl1->SelectedIndex == 0)
		{
			tabControl1->SelectedIndex = 1;
		}
	}
			 /////////////////////////////

			//	Очистка таблиц	//////////////
			//////////////////////////////////

	private: System::Void всеToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		cleanDataGrid(dataGridView1, dataTable);
		cleanDataGrid(dataGridView2, dataTable2);
		label2->Text = "";

		анализToolStripMenuItem->Visible = false;
		поискИностранныхToolStripMenuItem->Visible = false;
		очиститьToolStripMenuItem->Visible = false;

		tabControl1->TabPages->Remove(tabPage2);
	}

	private: System::Void данныхToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		cleanDataGrid(dataGridView1, dataTable);
	}

	private: System::Void анализаToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		cleanDataGrid(dataGridView2, dataTable2);
		label2->Text = "";
		tabControl1->TabPages->Remove(tabPage2);
	}
		//////////////////////////////////

		//	Поиск иностранных идентификаторов
	private: System::Void поискИностранныхToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		string str;

		int data = 0;

		if (tabControl1->SelectedIndex == 0)
		{
			dataGridView1->AllowUserToAddRows = false;

			for (int nbRow = 0; nbRow < dataGridView1->Rows->Count; nbRow++)
			{
				str = SystemToStl(dataGridView1[0, nbRow]->Value->ToString());

				if (str.substr(0, 3) != "250" && !str.empty())
				{
					dataGridView1->Rows[nbRow]->DefaultCellStyle->BackColor = Color::Gray;
					data++;
				}
			}

			dataGridView1->AllowUserToAddRows = true;
		}

		else
		{
			dataGridView2->AllowUserToAddRows = false;

			for (int nbRow = 0; nbRow < dataGridView2->Rows->Count; nbRow++)
			{
				str = SystemToStl(dataGridView2[0, nbRow]->Value->ToString());

				if (str.substr(0, 3) != "250" && !str.empty())
				{
					dataGridView2->Rows[nbRow]->DefaultCellStyle->BackColor = Color::Gray;
					data++;
				}
			}

			dataGridView2->AllowUserToAddRows = true;
		}

		if (data == NULL)
		{
			MessageBox::Show("Иностранные идентификаторы отсутствуют!");
		}

		else
		{
			MessageBox::Show("Кол-во иностранных идентификаторов: " + data.ToString());
		}

		str.clear();
	}

			 //	Выход из программы
	private: System::Void выходToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Close();
	}
		//////////////////////////////////////////////

		//	Обработка контексного меню dataGridViev1
		////////////////////////////////////////////

	private: System::Void dataGridView1_CellMouseDown(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e)
	{
		if (e->Button == System::Windows::Forms::MouseButtons::Right && dataGridView1->RowCount > 1)
		{
			contextMenuStrip1->Show(Cursor->Position.X, Cursor->Position.Y);
			dataGridView1->ClearSelection();
			dataGridView1->Rows[e->RowIndex]->Selected = true;

		}
	}

				//	Сохранить
	private: System::Void сохранитьToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			saveDataGridToCSV(dataGridView1);
		}

		catch (...) {}
	}

				// Пометить строку
	private: System::Void пометитьСтрокуToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		try
		{
			if (dataGridView1->Rows[dataGridView1->CurrentRow->Index]->DefaultCellStyle->BackColor != Color::Yellow)
			{
				dataGridView1->Rows[dataGridView1->CurrentRow->Index]->DefaultCellStyle->BackColor = Color::Yellow;
			}
			else
			{
				dataGridView1->Rows[dataGridView1->CurrentRow->Index]->DefaultCellStyle->BackColor = Color::White;
			}
		}

		catch (...) {}
	}

				//	Очистка таблицы
	private: System::Void очиститьДанныеToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		try
		{
			cleanDataGrid(dataGridView1, dataTable);
		}

		catch (...) {}
	}

				//	Удаление строки
	private: System::Void удалитьСтрокуToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		try
		{ 
			dataGridView1->Rows->RemoveAt(dataGridView1->SelectedRows[0]->Index);
		}

		catch (...) {}
	}
		////////////////////////////////////////////

		//	Обработка контексного меню dataGridViev2
		////////////////////////////////////////////

	private: System::Void dataGridView2_CellMouseDown(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e)
	{
		if (e->Button == System::Windows::Forms::MouseButtons::Right && dataGridView2->RowCount > 1)
		{
			contextMenuStrip2->Show(Cursor->Position.X, Cursor->Position.Y);
			dataGridView2->ClearSelection();
			dataGridView2->Rows[e->RowIndex]->Selected = true;

		}
	}

				//	Пометить строку
	private: System::Void пометитьСтрокуToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (dataGridView2->Rows[dataGridView2->SelectedRows[0]->Index]->DefaultCellStyle->BackColor != Color::Yellow)
		{
			dataGridView2->Rows[dataGridView2->SelectedRows[0]->Index]->DefaultCellStyle->BackColor = Color::Yellow;
		}
		else
		{
			dataGridView2->Rows[dataGridView2->SelectedRows[0]->Index]->DefaultCellStyle->BackColor = Color::White;
		}
	}

				//	Очистка таблицы
	private: System::Void очиститьToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		cleanDataGrid(dataGridView2, dataTable2);
		label2->Text = "";
	}

				//	Сохранение результата анализа
	private: System::Void сохранитьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		saveDataGridToCSV(dataGridView2);
	}

				//	Удаление строки анализа
	private: System::Void удалитьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		dataGridView2->Rows->RemoveAt(dataGridView2->SelectedRows[0]->Index);
	}
		////////////////////////////////////////////

		//	Сброс фильтра таблицы dataGridViev1
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		search_clean(textBox1, bindingSource1, dataGridView1);
	}

		//	Сброс фильтра таблицы dataGridViev2
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		search_clean(textBox2, bindingSource2, dataGridView2);
	}

		//	Сброс приоритетных идентификаторов
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
	{
		richTextBox1->Text = "";

		for (int nbRow = 0; nbRow < dataGridView2->Rows->Count; nbRow++)
		{
			dataGridView2->Rows[nbRow]->DefaultCellStyle->BackColor = Color::White;
		}
	}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////	Обработка событий					  ////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		//	Поиск в таблице загруженных данных
	private: System::Void textBox1_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
	{
		search(textBox1, bindingSource1, dataGridView1);
		
	}

		// Поиск в таблице анализированных данных
	private: System::Void textBox2_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
	{
		search(textBox2, bindingSource2, dataGridView2);
	}

		// Ограничение вовда в строку поиска загруженных данных
	private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
	{
		/*if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8)
			e->Handled = true;*/
	}

		// Ограничения ввода в строку поиска анализированных данных
	private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
	
	{
		/*if ((e->KeyChar <= 47 || e->KeyChar >= 58) && e->KeyChar != 8)
			e->Handled = true;*/
	}

		//	Подсветка приоритетных идентификаторов
	private: System::Void richTextBox1_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)
	{
		dataGridView2->AllowUserToAddRows = false;

		for (int i = 0; i < richTextBox1->Lines->Length; i++)
		{
			for (int nbRow = 0; nbRow < dataGridView2->Rows->Count; nbRow++)
			{
				if ((richTextBox1->Lines[i] == dataGridView2[0, nbRow]->Value->ToString())
					|| (richTextBox1->Lines[i] == dataGridView2[1, nbRow]->Value->ToString()))
				{
					dataGridView2->Rows[nbRow]->DefaultCellStyle->BackColor = Color::Red;
				}
			}
		}

		dataGridView2->AllowUserToAddRows = true;

	}

		//	Загрузка приложения
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e)
	{
		ifstream file;

		file.open("Module\\Convertor");

		if (!file.is_open())
		{
			button4->Enabled = false;
			button4->Text = "Модуль(Конвертации) не доступен";
		}
		else
		{
			file.close();
			rename("Module\\Convertor", "Module\\Convertor.exe");
		}

		dataTable->Columns->Add("IMSI");
		dataTable->Columns->Add("IMEI");
		dataTable->Columns->Add("Дата");
		dataTable->Columns->Add("Наименование");

		update_table(dataSet1, dataTable, bindingSource1, dataGridView1);

		dataTable2->Columns->Add("IMSI");
		dataTable2->Columns->Add("IMEI");
		dataTable2->Columns->Add("Дата");
		dataTable2->Columns->Add("Наименование");
		dataTable2->Columns->Add("Кол-во повторений");

		update_table(dataSet2, dataTable2, bindingSource2, dataGridView2);

		анализToolStripMenuItem->Visible = false;
		поискИностранныхToolStripMenuItem->Visible = false;
		очиститьToolStripMenuItem->Visible = false;

		tabControl1->TabPages->Remove(tabPage2);
	}

		//	Закрытие приложения
	private: System::Void Form1_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e)
	{
		rename("Module\\Convertor.exe", "Module\\Convertor");
	}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

};
}
