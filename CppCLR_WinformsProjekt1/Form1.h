#pragma once
#include<string>
#include<random>
#include<fstream>
#include<sstream>
#include<string>
#include<direct.h>
#pragma warning(disable : 4996)
int counting;
namespace CppCLRWinformsProjekt {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    public ref class Form1 : public System::Windows::Forms::Form {
    public:
        Form1(void){InitializeComponent();}
    protected:
        ~Form1(){if (components){delete components;}}
    private: System::Windows::Forms::RadioButton^ rB_c;
    protected:

    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::RadioButton^ rB_v;
    private: System::Windows::Forms::RadioButton^ rB_c_v;
    private: System::Windows::Forms::RadioButton^ rB_unif_dist;



    private: System::Windows::Forms::RadioButton^ rB_norm_dist;

    private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
    private: System::Windows::Forms::GroupBox^ groupBox1;
    private: System::Windows::Forms::GroupBox^ groupBox2;
    private: System::Windows::Forms::ProgressBar^ progressBar3;
    private: System::Windows::Forms::GroupBox^ groupBox3;
    private: System::Windows::Forms::TextBox^ tB_c_5;
    private: System::Windows::Forms::TextBox^ tB_c_4;
    private: System::Windows::Forms::TextBox^ tB_c_3;
    private: System::Windows::Forms::TextBox^ tB_c_2;
    private: System::Windows::Forms::TextBox^ tB_c_1;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::GroupBox^ groupBox4;
    private: System::Windows::Forms::TextBox^ tB_v_1;
    private: System::Windows::Forms::TextBox^ tB_v_2;
    private: System::Windows::Forms::TextBox^ tB_v_3;
    private: System::Windows::Forms::TextBox^ tB_v_4;
    private: System::Windows::Forms::TextBox^ tB_v_5;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::Label^ label20;
    private: System::Windows::Forms::Label^ label19;
    private: System::Windows::Forms::Label^ label18;
    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::TextBox^ tB_count_res_file;


    private: System::Windows::Forms::Label^ label21;
    private: System::Windows::Forms::GroupBox^ groupBox5;
    private: System::Windows::Forms::Label^ label26;
    private: System::Windows::Forms::Label^ label25;
    private: System::Windows::Forms::Label^ label24;
    private: System::Windows::Forms::Label^ label23;
    private: System::Windows::Forms::Label^ label22;
    private: System::Windows::Forms::TextBox^ tB_pu_c_5;

    private: System::Windows::Forms::TextBox^ tB_pu_c_4;


    private: System::Windows::Forms::TextBox^ tB_pu_c_3;


    private: System::Windows::Forms::TextBox^ tB_pu_c_2;


    private: System::Windows::Forms::TextBox^ tB_pu_c_1;



    private: System::Windows::Forms::GroupBox^ groupBox6;
    private: System::Windows::Forms::TextBox^ tB_v_backpack;

    private: System::Windows::Forms::Label^ label27;
    private: System::Windows::Forms::TextBox^ tB_pu_v_4;

    private: System::Windows::Forms::TextBox^ tB_pu_v_3;

    private: System::Windows::Forms::TextBox^ tB_pu_v_2;

    private: System::Windows::Forms::TextBox^ tB_pu_v_1;
    private: System::Windows::Forms::TextBox^ tB_pu_v_5;




    private: System::Windows::Forms::Label^ label32;
    private: System::Windows::Forms::Label^ label31;
    private: System::Windows::Forms::Label^ label30;
    private: System::Windows::Forms::Label^ label29;
    private: System::Windows::Forms::Label^ label28;
    protected:
    protected:
    private:
        System::ComponentModel::Container^ components;
#pragma region Windows Form Designer generated code
        void InitializeComponent(void){
            this->rB_c = (gcnew System::Windows::Forms::RadioButton());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->rB_v = (gcnew System::Windows::Forms::RadioButton());
            this->rB_c_v = (gcnew System::Windows::Forms::RadioButton());
            this->rB_unif_dist = (gcnew System::Windows::Forms::RadioButton());
            this->rB_norm_dist = (gcnew System::Windows::Forms::RadioButton());
            this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
            this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
            this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
            this->progressBar3 = (gcnew System::Windows::Forms::ProgressBar());
            this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->tB_c_5 = (gcnew System::Windows::Forms::TextBox());
            this->tB_c_4 = (gcnew System::Windows::Forms::TextBox());
            this->tB_c_3 = (gcnew System::Windows::Forms::TextBox());
            this->tB_c_2 = (gcnew System::Windows::Forms::TextBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->tB_c_1 = (gcnew System::Windows::Forms::TextBox());
            this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->tB_v_1 = (gcnew System::Windows::Forms::TextBox());
            this->tB_v_2 = (gcnew System::Windows::Forms::TextBox());
            this->tB_v_3 = (gcnew System::Windows::Forms::TextBox());
            this->tB_v_4 = (gcnew System::Windows::Forms::TextBox());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->tB_v_5 = (gcnew System::Windows::Forms::TextBox());
            this->tB_count_res_file = (gcnew System::Windows::Forms::TextBox());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->tB_pu_c_5 = (gcnew System::Windows::Forms::TextBox());
            this->tB_pu_c_4 = (gcnew System::Windows::Forms::TextBox());
            this->tB_pu_c_3 = (gcnew System::Windows::Forms::TextBox());
            this->tB_pu_c_2 = (gcnew System::Windows::Forms::TextBox());
            this->tB_pu_c_1 = (gcnew System::Windows::Forms::TextBox());
            this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->tB_pu_v_5 = (gcnew System::Windows::Forms::TextBox());
            this->tB_pu_v_4 = (gcnew System::Windows::Forms::TextBox());
            this->tB_pu_v_3 = (gcnew System::Windows::Forms::TextBox());
            this->tB_pu_v_2 = (gcnew System::Windows::Forms::TextBox());
            this->tB_pu_v_1 = (gcnew System::Windows::Forms::TextBox());
            this->tB_v_backpack = (gcnew System::Windows::Forms::TextBox());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->groupBox1->SuspendLayout();
            this->groupBox2->SuspendLayout();
            this->groupBox3->SuspendLayout();
            this->groupBox4->SuspendLayout();
            this->groupBox5->SuspendLayout();
            this->groupBox6->SuspendLayout();
            this->SuspendLayout();
            // 
            // rB_c
            // 
            this->rB_c->AutoSize = true;
            this->rB_c->Checked = true;
            this->rB_c->Location = System::Drawing::Point(6, 9);
            this->rB_c->Name = L"rB_c";
            this->rB_c->Size = System::Drawing::Size(68, 17);
            this->rB_c->TabIndex = 0;
            this->rB_c->TabStop = true;
            this->rB_c->Text = L"Вартість";
            this->rB_c->UseVisualStyleBackColor = true;
            this->rB_c->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(795, 477);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(75, 23);
            this->button1->TabIndex = 1;
            this->button1->Text = L"Запустити";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(12, 12);
            this->textBox1->Name = L"textBox1";
            this->textBox1->ReadOnly = true;
            this->textBox1->Size = System::Drawing::Size(322, 20);
            this->textBox1->TabIndex = 2;
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(340, 12);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(75, 20);
            this->button2->TabIndex = 3;
            this->button2->Text = L"Зберегти";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
            // 
            // rB_v
            // 
            this->rB_v->AutoSize = true;
            this->rB_v->Location = System::Drawing::Point(6, 32);
            this->rB_v->Name = L"rB_v";
            this->rB_v->Size = System::Drawing::Size(55, 17);
            this->rB_v->TabIndex = 4;
            this->rB_v->TabStop = true;
            this->rB_v->Text = L"Об\'єм";
            this->rB_v->UseVisualStyleBackColor = true;
            this->rB_v->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
            // 
            // rB_c_v
            // 
            this->rB_c_v->AutoSize = true;
            this->rB_c_v->Location = System::Drawing::Point(6, 55);
            this->rB_c_v->Name = L"rB_c_v";
            this->rB_c_v->Size = System::Drawing::Size(113, 17);
            this->rB_c_v->TabIndex = 5;
            this->rB_c_v->TabStop = true;
            this->rB_c_v->Text = L"Вартість та об\'єм";
            this->rB_c_v->UseVisualStyleBackColor = true;
            this->rB_c_v->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton3_CheckedChanged);
            // 
            // rB_unif_dist
            // 
            this->rB_unif_dist->AutoSize = true;
            this->rB_unif_dist->Checked = true;
            this->rB_unif_dist->Location = System::Drawing::Point(6, 19);
            this->rB_unif_dist->Name = L"rB_unif_dist";
            this->rB_unif_dist->Size = System::Drawing::Size(133, 17);
            this->rB_unif_dist->TabIndex = 6;
            this->rB_unif_dist->TabStop = true;
            this->rB_unif_dist->Text = L"Рівномірний розподіл";
            this->rB_unif_dist->UseVisualStyleBackColor = true;
            // 
            // rB_norm_dist
            // 
            this->rB_norm_dist->AutoSize = true;
            this->rB_norm_dist->Location = System::Drawing::Point(6, 42);
            this->rB_norm_dist->Name = L"rB_norm_dist";
            this->rB_norm_dist->Size = System::Drawing::Size(136, 17);
            this->rB_norm_dist->TabIndex = 7;
            this->rB_norm_dist->TabStop = true;
            this->rB_norm_dist->Text = L"Нормальний розподіл";
            this->rB_norm_dist->UseVisualStyleBackColor = true;
            // 
            // groupBox1
            // 
            this->groupBox1->Controls->Add(this->rB_c);
            this->groupBox1->Controls->Add(this->rB_v);
            this->groupBox1->Controls->Add(this->rB_c_v);
            this->groupBox1->Location = System::Drawing::Point(12, 38);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Size = System::Drawing::Size(200, 100);
            this->groupBox1->TabIndex = 8;
            this->groupBox1->TabStop = false;
            // 
            // groupBox2
            // 
            this->groupBox2->Controls->Add(this->rB_unif_dist);
            this->groupBox2->Controls->Add(this->rB_norm_dist);
            this->groupBox2->Location = System::Drawing::Point(237, 38);
            this->groupBox2->Name = L"groupBox2";
            this->groupBox2->Size = System::Drawing::Size(200, 100);
            this->groupBox2->TabIndex = 9;
            this->groupBox2->TabStop = false;
            // 
            // progressBar3
            // 
            this->progressBar3->Location = System::Drawing::Point(770, 436);
            this->progressBar3->Name = L"progressBar3";
            this->progressBar3->Size = System::Drawing::Size(100, 23);
            this->progressBar3->TabIndex = 11;
            // 
            // groupBox3
            // 
            this->groupBox3->Controls->Add(this->label15);
            this->groupBox3->Controls->Add(this->label14);
            this->groupBox3->Controls->Add(this->label13);
            this->groupBox3->Controls->Add(this->label12);
            this->groupBox3->Controls->Add(this->label11);
            this->groupBox3->Controls->Add(this->tB_c_5);
            this->groupBox3->Controls->Add(this->tB_c_4);
            this->groupBox3->Controls->Add(this->tB_c_3);
            this->groupBox3->Controls->Add(this->tB_c_2);
            this->groupBox3->Controls->Add(this->label5);
            this->groupBox3->Controls->Add(this->label4);
            this->groupBox3->Controls->Add(this->label3);
            this->groupBox3->Controls->Add(this->label2);
            this->groupBox3->Controls->Add(this->label1);
            this->groupBox3->Controls->Add(this->tB_c_1);
            this->groupBox3->Location = System::Drawing::Point(12, 144);
            this->groupBox3->Name = L"groupBox3";
            this->groupBox3->Size = System::Drawing::Size(200, 259);
            this->groupBox3->TabIndex = 12;
            this->groupBox3->TabStop = false;
            this->groupBox3->Text = L"Варіювання вартості";
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->label15->Location = System::Drawing::Point(138, 129);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(20, 17);
            this->label15->TabIndex = 35;
            this->label15->Text = L"%";
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->label14->Location = System::Drawing::Point(138, 103);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(20, 17);
            this->label14->TabIndex = 34;
            this->label14->Text = L"%";
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->label13->Location = System::Drawing::Point(138, 77);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(20, 17);
            this->label13->TabIndex = 33;
            this->label13->Text = L"%";
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->label12->Location = System::Drawing::Point(138, 48);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(20, 17);
            this->label12->TabIndex = 32;
            this->label12->Text = L"%";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->label11->Location = System::Drawing::Point(138, 22);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(20, 17);
            this->label11->TabIndex = 6;
            this->label11->Text = L"%";
            // 
            // tB_c_5
            // 
            this->tB_c_5->Location = System::Drawing::Point(88, 126);
            this->tB_c_5->Name = L"tB_c_5";
            this->tB_c_5->Size = System::Drawing::Size(49, 20);
            this->tB_c_5->TabIndex = 31;
            this->tB_c_5->Text = L"30";
            // 
            // tB_c_4
            // 
            this->tB_c_4->Location = System::Drawing::Point(88, 100);
            this->tB_c_4->Name = L"tB_c_4";
            this->tB_c_4->Size = System::Drawing::Size(49, 20);
            this->tB_c_4->TabIndex = 30;
            this->tB_c_4->Text = L"50";
            // 
            // tB_c_3
            // 
            this->tB_c_3->Location = System::Drawing::Point(88, 74);
            this->tB_c_3->Name = L"tB_c_3";
            this->tB_c_3->Size = System::Drawing::Size(49, 20);
            this->tB_c_3->TabIndex = 29;
            this->tB_c_3->Text = L"15";
            // 
            // tB_c_2
            // 
            this->tB_c_2->Location = System::Drawing::Point(88, 45);
            this->tB_c_2->Name = L"tB_c_2";
            this->tB_c_2->Size = System::Drawing::Size(49, 20);
            this->tB_c_2->TabIndex = 28;
            this->tB_c_2->Text = L"20";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(54, 129);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(20, 13);
            this->label5->TabIndex = 27;
            this->label5->Text = L"#5";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(54, 103);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(20, 13);
            this->label4->TabIndex = 26;
            this->label4->Text = L"#4";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(54, 77);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(20, 13);
            this->label3->TabIndex = 25;
            this->label3->Text = L"#3";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(54, 48);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(20, 13);
            this->label2->TabIndex = 24;
            this->label2->Text = L"#2";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(54, 22);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(20, 13);
            this->label1->TabIndex = 23;
            this->label1->Text = L"#1";
            // 
            // tB_c_1
            // 
            this->tB_c_1->Location = System::Drawing::Point(88, 19);
            this->tB_c_1->Name = L"tB_c_1";
            this->tB_c_1->Size = System::Drawing::Size(49, 20);
            this->tB_c_1->TabIndex = 13;
            this->tB_c_1->Text = L"35";
            // 
            // groupBox4
            // 
            this->groupBox4->Controls->Add(this->label20);
            this->groupBox4->Controls->Add(this->label19);
            this->groupBox4->Controls->Add(this->label18);
            this->groupBox4->Controls->Add(this->label17);
            this->groupBox4->Controls->Add(this->label16);
            this->groupBox4->Controls->Add(this->tB_v_1);
            this->groupBox4->Controls->Add(this->tB_v_2);
            this->groupBox4->Controls->Add(this->tB_v_3);
            this->groupBox4->Controls->Add(this->tB_v_4);
            this->groupBox4->Controls->Add(this->label6);
            this->groupBox4->Controls->Add(this->label7);
            this->groupBox4->Controls->Add(this->label8);
            this->groupBox4->Controls->Add(this->label9);
            this->groupBox4->Controls->Add(this->label10);
            this->groupBox4->Controls->Add(this->tB_v_5);
            this->groupBox4->Location = System::Drawing::Point(237, 144);
            this->groupBox4->Name = L"groupBox4";
            this->groupBox4->Size = System::Drawing::Size(200, 259);
            this->groupBox4->TabIndex = 32;
            this->groupBox4->TabStop = false;
            this->groupBox4->Text = L"Варіювання об\'єму";
            this->groupBox4->Visible = false;
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->label20->Location = System::Drawing::Point(133, 129);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(20, 17);
            this->label20->TabIndex = 40;
            this->label20->Text = L"%";
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->label19->Location = System::Drawing::Point(133, 103);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(20, 17);
            this->label19->TabIndex = 39;
            this->label19->Text = L"%";
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->label18->Location = System::Drawing::Point(133, 77);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(20, 17);
            this->label18->TabIndex = 38;
            this->label18->Text = L"%";
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->label17->Location = System::Drawing::Point(133, 48);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(20, 17);
            this->label17->TabIndex = 37;
            this->label17->Text = L"%";
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->label16->Location = System::Drawing::Point(133, 22);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(20, 17);
            this->label16->TabIndex = 36;
            this->label16->Text = L"%";
            // 
            // tB_v_1
            // 
            this->tB_v_1->Location = System::Drawing::Point(83, 19);
            this->tB_v_1->Name = L"tB_v_1";
            this->tB_v_1->Size = System::Drawing::Size(49, 20);
            this->tB_v_1->TabIndex = 31;
            this->tB_v_1->Text = L"35";
            // 
            // tB_v_2
            // 
            this->tB_v_2->Location = System::Drawing::Point(83, 45);
            this->tB_v_2->Name = L"tB_v_2";
            this->tB_v_2->Size = System::Drawing::Size(49, 20);
            this->tB_v_2->TabIndex = 30;
            this->tB_v_2->Text = L"20";
            // 
            // tB_v_3
            // 
            this->tB_v_3->Location = System::Drawing::Point(83, 74);
            this->tB_v_3->Name = L"tB_v_3";
            this->tB_v_3->Size = System::Drawing::Size(49, 20);
            this->tB_v_3->TabIndex = 29;
            this->tB_v_3->Text = L"15";
            // 
            // tB_v_4
            // 
            this->tB_v_4->Location = System::Drawing::Point(83, 100);
            this->tB_v_4->Name = L"tB_v_4";
            this->tB_v_4->Size = System::Drawing::Size(49, 20);
            this->tB_v_4->TabIndex = 28;
            this->tB_v_4->Text = L"50";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(46, 129);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(20, 13);
            this->label6->TabIndex = 27;
            this->label6->Text = L"#5";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(46, 103);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(20, 13);
            this->label7->TabIndex = 26;
            this->label7->Text = L"#4";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Location = System::Drawing::Point(46, 77);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(20, 13);
            this->label8->TabIndex = 25;
            this->label8->Text = L"#3";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Location = System::Drawing::Point(46, 48);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(20, 13);
            this->label9->TabIndex = 24;
            this->label9->Text = L"#2";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Location = System::Drawing::Point(46, 22);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(20, 13);
            this->label10->TabIndex = 23;
            this->label10->Text = L"#1";
            // 
            // tB_v_5
            // 
            this->tB_v_5->Location = System::Drawing::Point(83, 126);
            this->tB_v_5->Name = L"tB_v_5";
            this->tB_v_5->Size = System::Drawing::Size(49, 20);
            this->tB_v_5->TabIndex = 13;
            this->tB_v_5->Text = L"30";
            // 
            // tB_count_res_file
            // 
            this->tB_count_res_file->Location = System::Drawing::Point(12, 436);
            this->tB_count_res_file->Name = L"tB_count_res_file";
            this->tB_count_res_file->Size = System::Drawing::Size(100, 20);
            this->tB_count_res_file->TabIndex = 34;
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->Location = System::Drawing::Point(9, 420);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(131, 13);
            this->label21->TabIndex = 35;
            this->label21->Text = L"Кількість експериментів";
            // 
            // groupBox5
            // 
            this->groupBox5->Controls->Add(this->label26);
            this->groupBox5->Controls->Add(this->label25);
            this->groupBox5->Controls->Add(this->label24);
            this->groupBox5->Controls->Add(this->label23);
            this->groupBox5->Controls->Add(this->label22);
            this->groupBox5->Controls->Add(this->tB_pu_c_5);
            this->groupBox5->Controls->Add(this->tB_pu_c_4);
            this->groupBox5->Controls->Add(this->tB_pu_c_3);
            this->groupBox5->Controls->Add(this->tB_pu_c_2);
            this->groupBox5->Controls->Add(this->tB_pu_c_1);
            this->groupBox5->Location = System::Drawing::Point(464, 38);
            this->groupBox5->Name = L"groupBox5";
            this->groupBox5->Size = System::Drawing::Size(200, 171);
            this->groupBox5->TabIndex = 36;
            this->groupBox5->TabStop = false;
            this->groupBox5->Text = L"Початкові умови вартості";
            // 
            // label26
            // 
            this->label26->AutoSize = true;
            this->label26->Location = System::Drawing::Point(41, 136);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(20, 13);
            this->label26->TabIndex = 41;
            this->label26->Text = L"#5";
            // 
            // label25
            // 
            this->label25->AutoSize = true;
            this->label25->Location = System::Drawing::Point(41, 110);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(20, 13);
            this->label25->TabIndex = 40;
            this->label25->Text = L"#4";
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->Location = System::Drawing::Point(41, 84);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(20, 13);
            this->label24->TabIndex = 39;
            this->label24->Text = L"#3";
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->Location = System::Drawing::Point(41, 58);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(20, 13);
            this->label23->TabIndex = 38;
            this->label23->Text = L"#2";
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->Location = System::Drawing::Point(41, 32);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(20, 13);
            this->label22->TabIndex = 37;
            this->label22->Text = L"#1";
            // 
            // tB_pu_c_5
            // 
            this->tB_pu_c_5->Location = System::Drawing::Point(67, 133);
            this->tB_pu_c_5->Name = L"tB_pu_c_5";
            this->tB_pu_c_5->Size = System::Drawing::Size(49, 20);
            this->tB_pu_c_5->TabIndex = 36;
            this->tB_pu_c_5->Text = L"2600";
            // 
            // tB_pu_c_4
            // 
            this->tB_pu_c_4->Location = System::Drawing::Point(67, 107);
            this->tB_pu_c_4->Name = L"tB_pu_c_4";
            this->tB_pu_c_4->Size = System::Drawing::Size(49, 20);
            this->tB_pu_c_4->TabIndex = 35;
            this->tB_pu_c_4->Text = L"3000";
            // 
            // tB_pu_c_3
            // 
            this->tB_pu_c_3->Location = System::Drawing::Point(67, 81);
            this->tB_pu_c_3->Name = L"tB_pu_c_3";
            this->tB_pu_c_3->Size = System::Drawing::Size(49, 20);
            this->tB_pu_c_3->TabIndex = 34;
            this->tB_pu_c_3->Text = L"3130";
            // 
            // tB_pu_c_2
            // 
            this->tB_pu_c_2->Location = System::Drawing::Point(67, 55);
            this->tB_pu_c_2->Name = L"tB_pu_c_2";
            this->tB_pu_c_2->Size = System::Drawing::Size(49, 20);
            this->tB_pu_c_2->TabIndex = 33;
            this->tB_pu_c_2->Text = L"4210";
            // 
            // tB_pu_c_1
            // 
            this->tB_pu_c_1->Location = System::Drawing::Point(67, 29);
            this->tB_pu_c_1->Name = L"tB_pu_c_1";
            this->tB_pu_c_1->Size = System::Drawing::Size(49, 20);
            this->tB_pu_c_1->TabIndex = 32;
            this->tB_pu_c_1->Text = L"10050";
            // 
            // groupBox6
            // 
            this->groupBox6->Controls->Add(this->label32);
            this->groupBox6->Controls->Add(this->label31);
            this->groupBox6->Controls->Add(this->label30);
            this->groupBox6->Controls->Add(this->label29);
            this->groupBox6->Controls->Add(this->label28);
            this->groupBox6->Controls->Add(this->tB_pu_v_5);
            this->groupBox6->Controls->Add(this->tB_pu_v_4);
            this->groupBox6->Controls->Add(this->tB_pu_v_3);
            this->groupBox6->Controls->Add(this->tB_pu_v_2);
            this->groupBox6->Controls->Add(this->tB_pu_v_1);
            this->groupBox6->Location = System::Drawing::Point(670, 39);
            this->groupBox6->Name = L"groupBox6";
            this->groupBox6->Size = System::Drawing::Size(200, 170);
            this->groupBox6->TabIndex = 37;
            this->groupBox6->TabStop = false;
            this->groupBox6->Text = L"Початкові умови об\'єму";
            // 
            // label32
            // 
            this->label32->AutoSize = true;
            this->label32->Location = System::Drawing::Point(58, 135);
            this->label32->Name = L"label32";
            this->label32->Size = System::Drawing::Size(20, 13);
            this->label32->TabIndex = 42;
            this->label32->Text = L"#5";
            // 
            // label31
            // 
            this->label31->AutoSize = true;
            this->label31->Location = System::Drawing::Point(58, 109);
            this->label31->Name = L"label31";
            this->label31->Size = System::Drawing::Size(20, 13);
            this->label31->TabIndex = 41;
            this->label31->Text = L"#4";
            // 
            // label30
            // 
            this->label30->AutoSize = true;
            this->label30->Location = System::Drawing::Point(58, 83);
            this->label30->Name = L"label30";
            this->label30->Size = System::Drawing::Size(20, 13);
            this->label30->TabIndex = 40;
            this->label30->Text = L"#3";
            // 
            // label29
            // 
            this->label29->AutoSize = true;
            this->label29->Location = System::Drawing::Point(58, 58);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(20, 13);
            this->label29->TabIndex = 39;
            this->label29->Text = L"#2";
            // 
            // label28
            // 
            this->label28->AutoSize = true;
            this->label28->Location = System::Drawing::Point(58, 33);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(20, 13);
            this->label28->TabIndex = 38;
            this->label28->Text = L"#1";
            // 
            // tB_pu_v_5
            // 
            this->tB_pu_v_5->Location = System::Drawing::Point(84, 132);
            this->tB_pu_v_5->Name = L"tB_pu_v_5";
            this->tB_pu_v_5->Size = System::Drawing::Size(49, 20);
            this->tB_pu_v_5->TabIndex = 37;
            this->tB_pu_v_5->Text = L"8";
            // 
            // tB_pu_v_4
            // 
            this->tB_pu_v_4->Location = System::Drawing::Point(84, 106);
            this->tB_pu_v_4->Name = L"tB_pu_v_4";
            this->tB_pu_v_4->Size = System::Drawing::Size(49, 20);
            this->tB_pu_v_4->TabIndex = 36;
            this->tB_pu_v_4->Text = L"9,5";
            // 
            // tB_pu_v_3
            // 
            this->tB_pu_v_3->Location = System::Drawing::Point(84, 80);
            this->tB_pu_v_3->Name = L"tB_pu_v_3";
            this->tB_pu_v_3->Size = System::Drawing::Size(49, 20);
            this->tB_pu_v_3->TabIndex = 35;
            this->tB_pu_v_3->Text = L"10";
            // 
            // tB_pu_v_2
            // 
            this->tB_pu_v_2->Location = System::Drawing::Point(84, 55);
            this->tB_pu_v_2->Name = L"tB_pu_v_2";
            this->tB_pu_v_2->Size = System::Drawing::Size(49, 20);
            this->tB_pu_v_2->TabIndex = 34;
            this->tB_pu_v_2->Text = L"13";
            // 
            // tB_pu_v_1
            // 
            this->tB_pu_v_1->Location = System::Drawing::Point(84, 30);
            this->tB_pu_v_1->Name = L"tB_pu_v_1";
            this->tB_pu_v_1->Size = System::Drawing::Size(49, 20);
            this->tB_pu_v_1->TabIndex = 33;
            this->tB_pu_v_1->Text = L"31";
            // 
            // tB_v_backpack
            // 
            this->tB_v_backpack->Location = System::Drawing::Point(464, 237);
            this->tB_v_backpack->Name = L"tB_v_backpack";
            this->tB_v_backpack->Size = System::Drawing::Size(100, 20);
            this->tB_v_backpack->TabIndex = 38;
            this->tB_v_backpack->Text = L"100";
            // 
            // label27
            // 
            this->label27->AutoSize = true;
            this->label27->Location = System::Drawing::Point(461, 221);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(83, 13);
            this->label27->TabIndex = 39;
            this->label27->Text = L"Об\'єм рюкзаку";
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(925, 546);
            this->Controls->Add(this->label27);
            this->Controls->Add(this->tB_v_backpack);
            this->Controls->Add(this->groupBox6);
            this->Controls->Add(this->groupBox5);
            this->Controls->Add(this->label21);
            this->Controls->Add(this->tB_count_res_file);
            this->Controls->Add(this->groupBox4);
            this->Controls->Add(this->groupBox3);
            this->Controls->Add(this->progressBar3);
            this->Controls->Add(this->groupBox2);
            this->Controls->Add(this->groupBox1);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->button1);
            this->Name = L"Form1";
            this->Text = L"Form1";
            this->groupBox1->ResumeLayout(false);
            this->groupBox1->PerformLayout();
            this->groupBox2->ResumeLayout(false);
            this->groupBox2->PerformLayout();
            this->groupBox3->ResumeLayout(false);
            this->groupBox3->PerformLayout();
            this->groupBox4->ResumeLayout(false);
            this->groupBox4->PerformLayout();
            this->groupBox5->ResumeLayout(false);
            this->groupBox5->PerformLayout();
            this->groupBox6->ResumeLayout(false);
            this->groupBox6->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        if (textBox1->Text != ""){
                this->progressBar3->Value = 0;
                std::string path;
                MarshalString(textBox1->Text, path);
                int path_amount = path.length();
                char* path_h = new char[path_amount + 1];
                strcpy(path_h, path.c_str());
                mkdir(path_h);
                if (this->rB_c->Checked == true){
                    if ((tB_c_1->Text == "0" || tB_c_2->Text == "0" || tB_c_3->Text == "0"
                        && tB_c_4->Text == "0" || tB_c_5->Text == "0") && this->rB_norm_dist->Checked == true) {
                        MessageBox::Show("Error! \nSigma > 0 in normal distribution");}
                    else {
                        double* interes = new double[5];
                        interes[0] = Convert::ToDouble(tB_c_1->Text) / 100;
                        interes[1] = Convert::ToDouble(tB_c_2->Text) / 100;
                        interes[2] = Convert::ToDouble(tB_c_3->Text) / 100;
                        interes[3] = Convert::ToDouble(tB_c_4->Text) / 100;
                        interes[4] = Convert::ToDouble(tB_c_5->Text) / 100;
                        int* amount = new int[1];
                        amount[0] = Convert::ToInt32(tB_count_res_file->Text);
                        int x_amount = 5;

                        double *x_volume = new double[5];
                        x_volume[0] = Convert::ToDouble(tB_pu_v_1->Text);
                        x_volume[1] = Convert::ToDouble(tB_pu_v_2->Text);
                        x_volume[2] = Convert::ToDouble(tB_pu_v_3->Text);
                        x_volume[3] = Convert::ToDouble(tB_pu_v_4->Text);
                        x_volume[4] = Convert::ToDouble(tB_pu_v_5->Text);
                        double* x_cost = new double[5];
                        x_cost[0] = Convert::ToDouble(tB_pu_c_1->Text);
                        x_cost[1] = Convert::ToDouble(tB_pu_c_2->Text);
                        x_cost[2] = Convert::ToDouble(tB_pu_c_3->Text);
                        x_cost[3] = Convert::ToDouble(tB_pu_c_4->Text);
                        x_cost[4] = Convert::ToDouble(tB_pu_c_5->Text);
                        double max_volume_x = Convert::ToDouble(tB_v_backpack->Text);

                        double* three_dimensional_mass = new double[x_amount];
                        int* x_max = new int[5];
                        x_max[0] = 3;
                        x_max[1] = 7;
                        x_max[2] = 10;
                        x_max[3] = 10;
                        x_max[4] = 12;
                        int* x_min = new int[5];
                        x_min[0] = 1;
                        x_min[1] = 1;
                        x_min[2] = 1;
                        x_min[3] = 0;
                        x_min[4] = 0;
                        int all_combination = Amount_Combo(x_max, x_min, x_volume, x_amount, max_volume_x);
                        int** amount_mass = new int* [all_combination];
                        for (int i = 0; i < all_combination; i++) {
                            amount_mass[i] = new int[x_amount];
                        }
                        All_Combo(x_max, x_min, x_volume, x_amount, max_volume_x, amount_mass);
                        int* x = new int[x_amount];
                        int* x_opt = new int[x_amount];
                        double f, f_opt;
                        int* mass_int_combi = new int[all_combination];
                        int counter_while, _j;
                        double _max_volume_x;
                        int count_while = 0;
                        int count_right = 0;
                        while (count_while < 1) {                       
                            double** mass = new double* [amount[count_while]];
                            for (int i = 0; i < amount[count_while]; i++) 
                                mass[i] = new double[all_combination];
                            for (int i = 0; i < all_combination; i++) 
                                mass_int_combi[i] = 0;
                            counter_while = 0;
                            while (counter_while < amount[count_while]) {
                                std::random_device rd;
                                std::mt19937 gen(rd());
                                if (this->rB_unif_dist->Checked == true) {
                                    std::uniform_real_distribution<> rndC1(x_cost[0] - x_cost[0] * interes[0], x_cost[0] + x_cost[0] * interes[0]);
                                    three_dimensional_mass[0] = rndC1(gen);
                                    std::uniform_real_distribution<> rndC2(x_cost[1] - x_cost[1] * interes[1], x_cost[1] + x_cost[1] * interes[1]);
                                    three_dimensional_mass[1] = rndC2(gen);
                                    std::uniform_real_distribution<> rndC3(x_cost[2] - x_cost[2] * interes[2], x_cost[3] + x_cost[3] * interes[2]);
                                    three_dimensional_mass[2] = rndC3(gen);
                                    std::uniform_real_distribution<> rndC4(x_cost[3] - x_cost[3] * interes[3], x_cost[3] + x_cost[3] * interes[3]);
                                    three_dimensional_mass[3] = rndC4(gen);
                                    std::uniform_real_distribution<> rndC5(x_cost[4] - x_cost[4] * interes[4], x_cost[4] + x_cost[4] * interes[4]);
                                    three_dimensional_mass[4] = rndC5(gen);
                                }
                                else {
                                    std::normal_distribution<> rndC11(x_cost[0], (x_cost[0] * 0.1 * 2) * interes[0]);//* 0.1 * 2
                                    three_dimensional_mass[0] = rndC11(gen);
                                    std::normal_distribution<> rndC22(x_cost[1], (x_cost[1] * 0.1 * 2) * interes[1]);
                                    three_dimensional_mass[1] = rndC22(gen);
                                    std::normal_distribution<> rndC33(x_cost[2], (x_cost[2] * 0.1 * 2) * interes[2]);
                                    three_dimensional_mass[2] = rndC33(gen);
                                    std::normal_distribution<> rndC44(x_cost[3], (x_cost[3] * 0.1 * 2) * interes[3]);
                                    three_dimensional_mass[3] = rndC44(gen);
                                    std::normal_distribution<> rndC55(x_cost[4], (x_cost[4] * 0.1 * 2) * interes[4]);
                                    three_dimensional_mass[4] = rndC55(gen);
                                }
                                for (int i = 0; i < x_amount; i++)
                                    x_opt[i] = x_min[i];
                                for (int i = 0; i < x_amount; i++)
                                    x[i] = x_min[i];
                                f = 0;
                                f_opt = -9999;
                                _j = x_amount - 1;
                                _max_volume_x = 0;
                                while (true) {
                                    if (x[_j] <= x_max[_j]) {
                                        for (int i = 0; i < x_amount; i++)
                                            _max_volume_x += x_volume[i] * x[i];
                                        if (_max_volume_x <= max_volume_x) {
                                            for (int i = 0; i < x_amount; i++)
                                                f += three_dimensional_mass[i] * x[i];
                                            if (f_opt <= f) {
                                                f_opt = f;
                                                for (int i = 0; i < x_amount; i++)
                                                    x_opt[i] = x[i];
                                            }
                                        }
                                        _j = x_amount - 1;
                                    }
                                    else {
                                        x[_j] = x_min[_j];
                                        _j = _j - 1;
                                        if (_j < 0)
                                            break;
                                    }
                                    x[_j] += 1;
                                    _max_volume_x = 0;
                                    f = 0;
                                }
                                count_right = 0;
                                for (int i = 0; i < all_combination; i++) {
                                    for (int k = 0; k < x_amount; k++)
                                        if (amount_mass[i][k] == x_opt[k])
                                            count_right++;
                                    if (count_right == x_amount) {
                                        mass[mass_int_combi[i]][i] = f_opt;
                                        mass_int_combi[i]++;
                                        count_right = 0;
                                    }
                                    else count_right = 0;
                                }
                                counter_while++;
                            }
                            int max = 0;
                            for (int i = 0; i < all_combination; i++)
                                if (max < mass_int_combi[i])
                                    max = mass_int_combi[i];
                            std::string* gyper = new std::string[1];
                            if (this->rB_unif_dist->Checked == true){gyper[0] = path + "/" + std::to_string(amount[0]) + " uniform cost.csv";}
                            else{gyper[0] = path + "/" + std::to_string(amount[0]) + " normal cost.csv";}
                            std::ofstream csvFileResult(gyper[count_while]);
                            for (int i = 0; i < all_combination; i++) {
                                if (mass_int_combi[i] != 0) {
                                    csvFileResult << "_";
                                    for (int k = 0; k < x_amount; k++)
                                        csvFileResult << amount_mass[i][k];
                                    if (i != all_combination - 1)
                                        csvFileResult << "_,";
                                }
                                if (i == all_combination - 1)
                                    csvFileResult << "_";
                            }
                            csvFileResult << "\n";
                            double* s_arif_sum = new double[all_combination];
                            for (int i = 0; i < all_combination; i++)
                                s_arif_sum[i] = 0;
                            for (int i = 0; i < max; i++) {
                                for (int mk = 0; mk < all_combination; mk++) {
                                    if (mass_int_combi[mk] != 0) {
                                        if (mass_int_combi[mk] > i) {
                                            s_arif_sum[mk] += mass[i][mk];
                                            csvFileResult << mass[i][mk];
                                        }
                                        if (mk != all_combination - 1)
                                            csvFileResult << ",";
                                    }
                                    if (mk == all_combination - 1)
                                        csvFileResult << "\n";
                                }
                            }
                            for (int i = 0; i < all_combination; i++) {
                                if (mass_int_combi[i] != 0) {
                                    csvFileResult << "_";
                                    for (int k = 0; k < x_amount; k++)
                                        csvFileResult << amount_mass[i][k];
                                    if (i != all_combination - 1)
                                        csvFileResult << "_,";
                                }
                                if (i == all_combination - 1)
                                    csvFileResult << "_";
                            }
                            csvFileResult << "\n";

                            for (int mk = 0; mk < all_combination; mk++) {
                                if (mass_int_combi[mk] != 0) {
                                    csvFileResult << Convert::ToDouble(mass_int_combi[mk]) / Convert::ToDouble(amount[0]) * 100;
                                    if (mk != all_combination - 1)
                                        csvFileResult << ",";
                                }
                                if (mk == all_combination - 1)
                                    csvFileResult << ",Кількість з'явлень\n";
                            }

                            for (int mk = 0; mk < all_combination; mk++) {
                                if (mass_int_combi[mk] != 0) {
                                    csvFileResult << (s_arif_sum[mk] / Convert::ToDouble(mass_int_combi[mk]));
                                    if (mk != all_combination - 1)
                                        csvFileResult << ",";
                                }
                                if (mk == all_combination - 1)
                                    csvFileResult << ",Середнєариф\n";
                            }

                            double counters_;
                            for (int mk = 0; mk < all_combination; mk++) {
                                if (mass_int_combi[mk] != 0) {
                                    counters_ = 0;
                                    for (int i = 0; i < max; i++)
                                        if (mass_int_combi[mk] > i)
                                            if (mass[i][mk] > 30000)
                                                counters_ += 1;
                                    csvFileResult << (counters_ / Convert::ToDouble(mass_int_combi[mk])) * 100;
                                    if (mk != all_combination - 1)
                                        csvFileResult << ",";
                                }
                                if (mk == all_combination - 1)
                                    csvFileResult << ",Імовірність >30000\n";
                            }
                            
                            for (int mk = 0; mk < all_combination; mk++) {
                                if (mass_int_combi[mk] != 0) {
                                    counters_ = 0;
                                    for (int i = 0; i < max; i++)
                                        if (mass_int_combi[mk] > i)
                                            if (mass[i][mk] > 35000)
                                                counters_ += 1;
                                    csvFileResult << (counters_ / Convert::ToDouble(mass_int_combi[mk])) * 100;
                                    if (mk != all_combination - 1)
                                        csvFileResult << ",";
                                }
                                if (mk == all_combination - 1)
                                    csvFileResult << ",Імовірність >35000\n";
                            }
                            csvFileResult.close();
                            count_while++;
                        }
                    }
                }
                if (this->rB_v->Checked == true) {
                    if ((tB_v_1->Text == "0" || tB_v_2->Text == "0" || tB_v_3->Text == "0"
                        && tB_v_4->Text == "0" || tB_v_5->Text == "0") && this->rB_norm_dist->Checked == true){
                        MessageBox::Show("Error! \nSigma > 0 in normal distribution");}
                    else{
                        double* interes = new double[5];
                        interes[0] = Convert::ToDouble(tB_v_1->Text) / 100;
                        interes[1] = Convert::ToDouble(tB_v_2->Text) / 100;
                        interes[2] = Convert::ToDouble(tB_v_3->Text) / 100;
                        interes[3] = Convert::ToDouble(tB_v_4->Text) / 100;
                        interes[4] = Convert::ToDouble(tB_v_5->Text) / 100;
                        int *amount = new int[1];
                        amount[0] = Convert::ToInt32(tB_count_res_file->Text);
                        int x_amount = 5;
                        double* x_volume = new double[5];
                        x_volume[0] = Convert::ToDouble(tB_pu_v_1->Text);
                        x_volume[1] = Convert::ToDouble(tB_pu_v_2->Text);
                        x_volume[2] = Convert::ToDouble(tB_pu_v_3->Text);
                        x_volume[3] = Convert::ToDouble(tB_pu_v_4->Text);
                        x_volume[4] = Convert::ToDouble(tB_pu_v_5->Text);
                        double* x_cost = new double[5];
                        x_cost[0] = Convert::ToDouble(tB_pu_c_1->Text);
                        x_cost[1] = Convert::ToDouble(tB_pu_c_2->Text);
                        x_cost[2] = Convert::ToDouble(tB_pu_c_3->Text);
                        x_cost[3] = Convert::ToDouble(tB_pu_c_4->Text);
                        x_cost[4] = Convert::ToDouble(tB_pu_c_5->Text);
                        double max_volume_x = Convert::ToDouble(tB_v_backpack->Text);
                        double* three_dimensional_mass = new double[x_amount];
                        int* x_max = new int[x_amount];
                        x_max[0] = max_volume_x / (x_volume[0] - x_volume[0] * interes[0]);
                        x_max[1] = max_volume_x / (x_volume[1] - x_volume[1] * interes[1]);
                        x_max[2] = max_volume_x / (x_volume[2] - x_volume[2] * interes[2]);
                        x_max[3] = max_volume_x / (x_volume[3] - x_volume[3] * interes[3]);
                        x_max[4] = max_volume_x / (x_volume[4] - x_volume[4] * interes[4]);
                        int x_min[5] = { 1,1,1,0,0 };
                        double _x_volume[5];
                        _x_volume[0] = x_volume[0] - x_volume[0] * interes[0];
                        _x_volume[1] = x_volume[1] - x_volume[1] * interes[1];
                        _x_volume[2] = x_volume[2] - x_volume[2] * interes[2];
                        _x_volume[3] = x_volume[3] - x_volume[3] * interes[3];
                        _x_volume[4] = x_volume[4] - x_volume[4] * interes[4];
                        int all_combination = Amount_Combo(x_max, x_min, _x_volume, x_amount, max_volume_x);
                        int** count_sample = new int* [all_combination];
                        for (int i = 0; i < all_combination; i++) {
                            count_sample[i] = new int[x_amount];
                        }
                        All_Combo(x_max, x_min, _x_volume, x_amount, max_volume_x, count_sample);
                        int* x = new int[x_amount];
                        int* x_opt = new int[x_amount];
                        double f, f_opt;
                        int* mass_int_combi = new int[all_combination];
                        int counter_while, _j;
                        double _max_volume_x;
                        int count_while = 0;
                        int count_right = 0;                 
                        while (count_while < 1) { 
                            double** mass = new double* [amount[count_while]];
                            for (int i = 0; i < amount[count_while]; i++) 
                                mass[i] = new double[all_combination]; 
                            for (int i = 0; i < all_combination; i++)
                                mass_int_combi[i] = 0;
                            counter_while = 0;
                            while (counter_while < amount[count_while]) {
                                std::random_device rd;
                                std::mt19937 gen(rd());
                                if (this->rB_unif_dist->Checked == true){
                                    std::uniform_real_distribution<> rndC1(x_volume[0] - x_volume[0] * interes[0], x_volume[0] + x_volume[0] * interes[0]);
                                    three_dimensional_mass[0] = rndC1(gen);
                                    std::uniform_real_distribution<> rndC2(x_volume[1] - x_volume[1] * interes[1], x_volume[1] + x_volume[1] * interes[1]);
                                    three_dimensional_mass[1] = rndC2(gen);
                                    std::uniform_real_distribution<> rndC3(x_volume[2] - x_volume[2] * interes[2], x_volume[2] + x_volume[2] * interes[2]);
                                    three_dimensional_mass[2] = rndC3(gen);
                                    std::uniform_real_distribution<> rndC4(x_volume[3] - x_volume[3] * interes[3], x_volume[3] + x_volume[3] * interes[3]);
                                    three_dimensional_mass[3] = rndC4(gen);
                                    std::uniform_real_distribution<> rndC5(x_volume[4] - x_volume[4] * interes[4], x_volume[4] + x_volume[4] * interes[4]);
                                    three_dimensional_mass[4] = rndC5(gen);}
                                else{
                                    std::normal_distribution<> rndC1(x_volume[0], (x_volume[0] * 0.1 * 2)* interes[0]); // sigma = sqrt(D), D = ((a-b)^2)/12
                                    three_dimensional_mass[0] = rndC1(gen);
                                    std::normal_distribution<> rndC2(x_volume[1], (x_volume[1] * 0.1 * 2)* interes[1]);
                                    three_dimensional_mass[1] = rndC2(gen);
                                    std::normal_distribution<> rndC3(x_volume[2], (x_volume[2] * 0.1 * 2)* interes[2]);
                                    three_dimensional_mass[2] = rndC3(gen);
                                    std::normal_distribution<> rndC4(x_volume[3], (x_volume[3] * 0.1 * 2)* interes[3]);
                                    three_dimensional_mass[3] = rndC4(gen);
                                    std::normal_distribution<> rndC5(x_volume[4], (x_volume[4] * 0.1 * 2) * interes[4]);
                                    three_dimensional_mass[4] = rndC5(gen);
                                }
                                for (int i = 0; i < x_amount; i++)
                                    x_opt[i] = x_min[i];
                                for (int i = 0; i < x_amount; i++)
                                    x[i] = x_min[i];
                                f = 0;
                                f_opt = -9999;
                                _j = x_amount - 1;
                                _max_volume_x = 0;
                                while (true) {
                                    if (x[_j] <= x_max[_j]) {
                                        for (int i = 0; i < x_amount; i++)
                                            _max_volume_x += three_dimensional_mass[i] * x[i];
                                        if (_max_volume_x <= max_volume_x) {
                                            for (int i = 0; i < x_amount; i++)
                                                f += x_cost[i] * x[i];
                                            if (f_opt <= f) {
                                                f_opt = f;
                                                for (int i = 0; i < x_amount; i++)
                                                    x_opt[i] = x[i];
                                            }
                                        }
                                        _j = x_amount - 1;
                                    }
                                    else {
                                        x[_j] = x_min[_j];
                                        _j = _j - 1;
                                        if (_j < 0)
                                            break;
                                    }
                                    x[_j] += 1;
                                    _max_volume_x = 0;
                                    f = 0;
                                } 
                                count_right = 0;
                                for (int i = 0; i < all_combination; i++) {
                                    for (int k = 0; k < x_amount; k++)
                                        if (count_sample[i][k] == x_opt[k])
                                            count_right++;
                                    if (count_right == x_amount) {
                                        mass[mass_int_combi[i]][i] = f_opt;
                                        mass_int_combi[i]++;
                                        count_right = 0;
                                    }
                                    else count_right = 0;
                                }
                                counter_while++;
                            }
                            int max = 0;
                            int prokol = 0;
                            for (int i = 0; i < all_combination; i++) {
                                if (max < mass_int_combi[i])
                                    max = mass_int_combi[i];
                                prokol += mass_int_combi[i];
                            }
                            std::string* gyper = new std::string[1];
                            if (this->rB_unif_dist->Checked == true)
                                gyper[0] = path + "/" + std::to_string(amount[0]) + " uniform volume.csv";
                            else
                                gyper[0] = path + "/" + std::to_string(amount[0]) + " normal volume.csv";
                            int count_plan = 0;
                            std::ofstream csvFileResult(gyper[count_while]);
                            for (int i = 0; i < all_combination; i++) {
                                if (mass_int_combi[i] != 0) {
                                    count_plan++;
                                    csvFileResult << "_";
                                    for (int k = 0; k < x_amount; k++)
                                        csvFileResult << count_sample[i][k];
                                    if (i != all_combination - 1)
                                        csvFileResult << "_,";
                                }
                                if (i == all_combination - 1)
                                    csvFileResult << "_";
                            }
                            csvFileResult << "\n";
                            double* s_arif_sum = new double[all_combination];
                            for (int i = 0; i < all_combination; i++)
                                s_arif_sum[i] = 0;
                            for (int i = 0; i < max; i++) {
                                for (int mk = 0; mk < all_combination; mk++) {
                                    if (mass_int_combi[mk] != 0) {
                                        if (mass_int_combi[mk] > i) {
                                            s_arif_sum[mk] += mass[i][mk];
                                            csvFileResult << mass[i][mk];
                                        }
                                        if (mk != all_combination - 1)
                                            csvFileResult << ",";
                                    }
                                    if (mk == all_combination - 1)
                                        csvFileResult << "\n";
                                }
                            }

                            for (int i = 0; i < all_combination; i++) {
                                if (mass_int_combi[i] != 0) {
                                    csvFileResult << "_";
                                    for (int k = 0; k < x_amount; k++)
                                        csvFileResult << count_sample[i][k];
                                    if (i != all_combination - 1)
                                        csvFileResult << "_,";
                                }
                                if (i == all_combination - 1)
                                    csvFileResult << "_";
                            }
                            csvFileResult << "\n";
                            for (int mk = 0; mk < all_combination; mk++) {
                                if (mass_int_combi[mk] != 0) {
                                    csvFileResult << Convert::ToDouble(mass_int_combi[mk]) / Convert::ToDouble(amount[0]) * 100;
                                    if (mk != all_combination - 1)
                                        csvFileResult << ",";
                                }
                                if (mk == all_combination - 1)
                                    csvFileResult << ",Кількість з'явлень\n";
                            }
                            for (int mk = 0; mk < all_combination; mk++) {
                                if (mass_int_combi[mk] != 0) {
                                    csvFileResult << (s_arif_sum[mk] / Convert::ToDouble(mass_int_combi[mk]));
                                    if (mk != all_combination - 1)
                                        csvFileResult << ",";
                                }
                                if (mk == all_combination - 1)
                                    csvFileResult << ",Середнєариф\n";
                            }
                            double counters_;
                            for (int mk = 0; mk < all_combination; mk++) {
                                if (mass_int_combi[mk] != 0) {
                                    counters_ = 0;
                                    for (int i = 0; i < max; i++)
                                        if (mass_int_combi[mk] > i)
                                            if (mass[i][mk] > 30000)
                                                counters_ += 1; 
                                    csvFileResult << (counters_ / Convert::ToDouble(mass_int_combi[mk])) * 100;
                                    if (mk != all_combination - 1)
                                        csvFileResult << ",";
                                }
                                if (mk == all_combination - 1)
                                    csvFileResult << ",Імовірність >30000\n";
                            }
                            for (int mk = 0; mk < all_combination; mk++) {
                                if (mass_int_combi[mk] != 0) {
                                    counters_ = 0;
                                    for (int i = 0; i < max; i++)
                                        if (mass_int_combi[mk] > i)
                                            if (mass[i][mk] > 35000)
                                                counters_ += 1;
                                    csvFileResult << (counters_ / Convert::ToDouble(mass_int_combi[mk])) * 100;
                                    if (mk != all_combination - 1)
                                        csvFileResult << ",";
                                }
                                if (mk == all_combination - 1)
                                    csvFileResult << ",Імовірність >35000\n";
                            }
                            csvFileResult.close();
                            count_while++;
                        }
                    }
                }
                if (this->rB_c_v->Checked == true)
                {
                    if ((tB_c_1->Text == "0" || tB_c_2->Text == "0" || tB_c_3->Text == "0"
                        || tB_c_4->Text == "0" || tB_c_5->Text == "0" || tB_v_1->Text == "0"
                        || tB_v_2->Text == "0" || tB_v_3->Text == "0"|| tB_v_4->Text == "0"
                        || tB_v_5->Text == "0") && this->rB_norm_dist->Checked == true){
                        MessageBox::Show("Error! \nSigma > 0 in normal distribution");}
                    else{
                        double* interes = new double[10];
                        interes[0] = Convert::ToDouble(tB_c_1->Text) / 100;
                        interes[1] = Convert::ToDouble(tB_c_2->Text) / 100;
                        interes[2] = Convert::ToDouble(tB_c_3->Text) / 100;
                        interes[3] = Convert::ToDouble(tB_c_4->Text) / 100;
                        interes[4] = Convert::ToDouble(tB_c_5->Text) / 100;
                        interes[5] = Convert::ToDouble(tB_v_1->Text) / 100;
                        interes[6] = Convert::ToDouble(tB_v_2->Text) / 100;
                        interes[7] = Convert::ToDouble(tB_v_3->Text) / 100;
                        interes[8] = Convert::ToDouble(tB_v_4->Text) / 100;
                        interes[9] = Convert::ToDouble(tB_v_5->Text) / 100;
                        //int amount[3] = { 1000,5000,10000 };
                        int* amount = new int[1];
                        amount[0] = Convert::ToInt32(tB_count_res_file->Text);
                        int amount_x = 5;
                        double* volume_x = new double[5];
                        volume_x[0] = Convert::ToDouble(tB_pu_v_1->Text);
                        volume_x[1] = Convert::ToDouble(tB_pu_v_2->Text);
                        volume_x[2] = Convert::ToDouble(tB_pu_v_3->Text);
                        volume_x[3] = Convert::ToDouble(tB_pu_v_4->Text);
                        volume_x[4] = Convert::ToDouble(tB_pu_v_5->Text);
                        double* x_cost = new double[5];
                        x_cost[0] = Convert::ToDouble(tB_pu_c_1->Text);
                        x_cost[1] = Convert::ToDouble(tB_pu_c_2->Text);
                        x_cost[2] = Convert::ToDouble(tB_pu_c_3->Text);
                        x_cost[3] = Convert::ToDouble(tB_pu_c_4->Text);
                        x_cost[4] = Convert::ToDouble(tB_pu_c_5->Text);
                        double max_volume_x = Convert::ToDouble(tB_v_backpack->Text);
                        double* three_dimensional_mass = new double[amount_x];
                        double* three_dimensional_mass_1 = new double[amount_x];
                        int* x_max = new int[amount_x];
                        x_max[0] = max_volume_x / (volume_x[0] - volume_x[0] * interes[5]);
                        x_max[1] = max_volume_x / (volume_x[1] - volume_x[1] * interes[6]);
                        x_max[2] = max_volume_x / (volume_x[2] - volume_x[2] * interes[7]);
                        x_max[3] = max_volume_x / (volume_x[3] - volume_x[3] * interes[8]);
                        x_max[4] = max_volume_x / (volume_x[4] - volume_x[4] * interes[9]);
                        int x_min[5] = { 1,1,1,0,0 };
                        double _x_volume[5];
                        _x_volume[0] = volume_x[0] - volume_x[0] * interes[5];
                        _x_volume[1] = volume_x[1] - volume_x[1] * interes[6];
                        _x_volume[2] = volume_x[2] - volume_x[2] * interes[7];
                        _x_volume[3] = volume_x[3] - volume_x[3] * interes[8];
                        _x_volume[4] = volume_x[4] - volume_x[4] * interes[9];
                        int all_combination = Amount_Combo(x_max, x_min, _x_volume, amount_x, max_volume_x);
                        int** count_sample = new int* [all_combination];
                        for (int i = 0; i < all_combination; i++)
                            count_sample[i] = new int[amount_x];
                        All_Combo(x_max, x_min, _x_volume, amount_x, max_volume_x, count_sample);
                        int* x = new int[amount_x];
                        int* x_opt = new int[amount_x];
                        double f, f_opt;
                        int* mass_int_combi = new int[all_combination];
                        int counter_while, _j;
                        double _max_volume_x;
                        int count_while = 0;
                        int count_right = 0;
                        while (count_while < 1) { //количество файлов //3
                            double** mass = new double* [amount[count_while]]; //1000 //count_base
                            for (int i = 0; i < amount[count_while]; i++) //count_base
                                mass[i] = new double[all_combination]; //general
                            for (int i = 0; i < all_combination; i++) //general
                                mass_int_combi[i] = 0;
                            counter_while = 0;
                            while (counter_while < amount[count_while]) { //1000 //count_base
                                std::random_device rd;
                                std::mt19937 gen(rd());
                                if (this->rB_unif_dist->Checked == true){
                                    std::uniform_real_distribution<> rndC1(volume_x[0] - volume_x[0] * interes[5], volume_x[0] + volume_x[0] * interes[5]);
                                    three_dimensional_mass[0] = rndC1(gen);
                                    std::uniform_real_distribution<> rndC2(volume_x[1] - volume_x[1] * interes[6], volume_x[1] + volume_x[1] * interes[6]);
                                    three_dimensional_mass[1] = rndC2(gen);
                                    std::uniform_real_distribution<> rndC3(volume_x[2] - volume_x[2] * interes[7], volume_x[2] + volume_x[2] * interes[7]);
                                    three_dimensional_mass[2] = rndC3(gen);
                                    std::uniform_real_distribution<> rndC4(volume_x[3] - volume_x[3] * interes[8], volume_x[3] + volume_x[3] * interes[8]);
                                    three_dimensional_mass[3] = rndC4(gen);
                                    std::uniform_real_distribution<> rndC5(volume_x[4] - volume_x[4] * interes[9], volume_x[4] + volume_x[4] * interes[9]);
                                    three_dimensional_mass[4] = rndC5(gen);


                                    std::uniform_real_distribution<> rndC11(x_cost[0] - x_cost[0] * interes[0], x_cost[0] + x_cost[0] * interes[0]);
                                    three_dimensional_mass_1[0] = rndC11(gen);
                                    std::uniform_real_distribution<> rndC22(x_cost[1] - x_cost[1] * interes[1], x_cost[1] + x_cost[1] * interes[1]);
                                    three_dimensional_mass_1[1] = rndC22(gen);
                                    std::uniform_real_distribution<> rndC33(x_cost[2] - x_cost[2] * interes[2], x_cost[2] + x_cost[2] * interes[2]);
                                    three_dimensional_mass_1[2] = rndC33(gen);
                                    std::uniform_real_distribution<> rndC44(x_cost[3] - x_cost[3] * interes[3], x_cost[3] + x_cost[3] * interes[3]);
                                    three_dimensional_mass_1[3] = rndC44(gen);
                                    std::uniform_real_distribution<> rndC55(x_cost[4] - x_cost[4] * interes[4], x_cost[4] + x_cost[4] * interes[4]);
                                    three_dimensional_mass_1[4] = rndC55(gen);}
                                else{
                                    std::normal_distribution<> rndC1(volume_x[0], (volume_x[0] * 0.1 * 2)* interes[5]);//0.2
                                    three_dimensional_mass[0] = rndC1(gen);
                                    std::normal_distribution<> rndC2(volume_x[1], (volume_x[1] * 0.1 * 2)* interes[6]);
                                    three_dimensional_mass[1] = rndC2(gen);
                                    std::normal_distribution<> rndC3(volume_x[2], (volume_x[2] * 0.1 * 2)* interes[7]);
                                    three_dimensional_mass[2] = rndC3(gen);
                                    std::normal_distribution<> rndC4(volume_x[3], (volume_x[3] * 0.1 * 2)* interes[8]);
                                    three_dimensional_mass[3] = rndC4(gen);
                                    std::normal_distribution<> rndC5(volume_x[4], (volume_x[4] * 0.1 * 2)* interes[9]);
                                    three_dimensional_mass[4] = rndC5(gen);
                                    std::normal_distribution<> rndC11(x_cost[0], (x_cost[0] * 0.1 * 2) * interes[0]);
                                    three_dimensional_mass_1[0] = rndC11(gen);
                                    std::normal_distribution<> rndC22(x_cost[1], (x_cost[1] * 0.1 * 2) * interes[1]);
                                    three_dimensional_mass_1[1] = rndC22(gen);
                                    std::normal_distribution<> rndC33(x_cost[2], (x_cost[2] * 0.1 * 2) * interes[2]);
                                    three_dimensional_mass_1[2] = rndC33(gen);
                                    std::normal_distribution<> rndC44(x_cost[3], (x_cost[3] * 0.1 * 2) * interes[3]);
                                    three_dimensional_mass_1[3] = rndC44(gen);
                                    std::normal_distribution<> rndC55(x_cost[4], (x_cost[4] * 0.1 * 2) * interes[4]);
                                    three_dimensional_mass_1[4] = rndC55(gen);}
                                for (int i = 0; i < amount_x; i++)
                                    x_opt[i] = x_min[i]; //0
                                for (int i = 0; i < amount_x; i++)
                                    x[i] = x_min[i]; //0
                                f = 0;
                                f_opt = -1000;
                                _j = amount_x - 1;
                                _max_volume_x = 0;
                                while (true) {
                                    if (x[_j] <= x_max[_j]) {
                                        for (int i = 0; i < amount_x; i++)
                                            _max_volume_x += three_dimensional_mass[i] * x[i];
                                        if (_max_volume_x <= max_volume_x) {
                                            for (int i = 0; i < amount_x; i++)
                                                f += three_dimensional_mass_1[i] * x[i];
                                            if (f_opt <= f) {
                                                f_opt = f;
                                                for (int i = 0; i < amount_x; i++)
                                                    x_opt[i] = x[i];
                                            }
                                        }
                                        _j = amount_x - 1;
                                    }
                                    else {
                                        x[_j] = x_min[_j]; //0
                                        _j = _j - 1;
                                        if (_j < 0)
                                            break;
                                    }
                                    x[_j] += 1;
                                    _max_volume_x = 0;
                                    f = 0;
                                }
                                count_right = 0;
                                for (int i = 0; i < all_combination; i++) {
                                    for (int k = 0; k < amount_x; k++)
                                        if (count_sample[i][k] == x_opt[k])
                                            count_right++;
                                    if (count_right == amount_x) {
                                        mass[mass_int_combi[i]][i] = f_opt;
                                        mass_int_combi[i]++;
                                        count_right = 0;
                                    }
                                    else count_right = 0;
                                }
                                counter_while++;
                            }
                            int max = 0;
                            for (int i = 0; i < all_combination; i++)
                                if (max < mass_int_combi[i])
                                    max = mass_int_combi[i];
                            std::string* gyper = new std::string[1];
                            if (this->rB_unif_dist->Checked == true)
                                gyper[0] = path + "/" + std::to_string(amount[0]) + " uniform cost and volume.csv";
                            else gyper[0] = path + "/" + std::to_string(amount[0]) + " normal cost and volume.csv";
                            int count_plan = 0;
                            std::ofstream csvFileResult(gyper[count_while]);
                            for (int i = 0; i < all_combination; i++) {
                                if (mass_int_combi[i] != 0) {
                                    count_plan++;
                                    csvFileResult << "_";
                                    for (int k = 0; k < amount_x; k++)
                                        csvFileResult << count_sample[i][k];
                                    if (i != all_combination - 1)
                                        csvFileResult << "_,";
                                }
                                if (i == all_combination - 1)
                                    csvFileResult << "_";
                            }
                            csvFileResult << "\n";
                            double* s_arif_sum = new double[all_combination];
                            for (int i = 0; i < all_combination; i++)
                                s_arif_sum[i] = 0;
                            for (int i = 0; i < max; i++) {
                                for (int mk = 0; mk < all_combination; mk++) {
                                    if (mass_int_combi[mk] != 0) {
                                        if (mass_int_combi[mk] > i) {
                                            s_arif_sum[mk] += mass[i][mk];
                                            csvFileResult << mass[i][mk];
                                        }
                                        if (mk != all_combination - 1)
                                            csvFileResult << ",";
                                    }
                                    if (mk == all_combination - 1)
                                        csvFileResult << "\n";
                                }
                            }
                            for (int i = 0; i < all_combination; i++) {
                                if (mass_int_combi[i] != 0) {
                                    csvFileResult << "_";
                                    for (int k = 0; k < amount_x; k++)
                                        csvFileResult << count_sample[i][k];
                                    if (i != all_combination - 1)
                                        csvFileResult << "_,";
                                }
                                if (i == all_combination - 1)
                                    csvFileResult << "_";
                            }
                            csvFileResult << "\n";
                            for (int mk = 0; mk < all_combination; mk++) {
                                if (mass_int_combi[mk] != 0) {
                                    csvFileResult << Convert::ToDouble(mass_int_combi[mk]) / Convert::ToDouble(amount[0]) * 100;
                                    if (mk != all_combination - 1)
                                        csvFileResult << ",";
                                }
                                if (mk == all_combination - 1)
                                    csvFileResult << ",Кількість з'явлень\n";
                            }
                            for (int mk = 0; mk < all_combination; mk++) {
                                if (mass_int_combi[mk] != 0) {
                                    csvFileResult << (s_arif_sum[mk] / Convert::ToDouble(mass_int_combi[mk]));
                                    if (mk != all_combination - 1)
                                        csvFileResult << ",";
                                }
                                if (mk == all_combination - 1)
                                    csvFileResult << ",Середнєариф\n";
                            }
                            double counters_;
                            for (int mk = 0; mk < all_combination; mk++) {
                                if (mass_int_combi[mk] != 0) {
                                    counters_ = 0;
                                    for (int i = 0; i < max; i++)
                                        if (mass_int_combi[mk] > i)
                                            if (mass[i][mk] > 30000)
                                                counters_ += 1;
                                    csvFileResult << (counters_ / Convert::ToDouble(mass_int_combi[mk])) * 100;
                                    if (mk != all_combination - 1)
                                        csvFileResult << ",";
                                }
                                if (mk == all_combination - 1)
                                    csvFileResult << ",Імовірність >30000\n";
                            }
                            for (int mk = 0; mk < all_combination; mk++) {
                                if (mass_int_combi[mk] != 0) {
                                    counters_ = 0;
                                    for (int i = 0; i < max; i++)
                                        if (mass_int_combi[mk] > i)
                                            if (mass[i][mk] > 35000)
                                                counters_ += 1;
                                    csvFileResult << (counters_ / Convert::ToDouble(mass_int_combi[mk])) * 100;
                                    if (mk != all_combination - 1)
                                        csvFileResult << ",";
                                }
                                if (mk == all_combination - 1)
                                    csvFileResult << ",Імовірність >35000\n";
                            }
                            csvFileResult.close();
                            count_while++;
                        }
                    }
                }
        }
        else
            MessageBox::Show("Error! \nSelect file path");
        this->progressBar3->Value = 100;};

    private: int Amount_Combo(int* a_maksimalno, int* a_minimalno, double* prototip_a, int kilkist_a, double summa_prototip_a) {
        int* massiv_a = new int[kilkist_a];
        for (int i = 0; i < kilkist_a; i++)
            massiv_a[i] = a_minimalno[i];
        int zagalna = 0, vihid_z_tsiklu = 0;
        double zagalna_summa_combi;
        bool true_if = false;
        while (true) {
            zagalna_summa_combi = 0;
            if (true_if == true) 
                massiv_a[kilkist_a - 1] += 1;
            else true_if = true;
            for (int i = 0; i < kilkist_a; i++)
                zagalna_summa_combi += massiv_a[i] * prototip_a[i];
            if (zagalna_summa_combi <= summa_prototip_a)
                zagalna++;

            for (int i = 1; i < kilkist_a; i++)
                if (massiv_a[i] > a_maksimalno[i]) {
                    massiv_a[i - 1] += 1;
                    massiv_a[i] = a_minimalno[i]; //0
                    true_if = false;
                }
            for (int i = 0; i < kilkist_a; i++)
                if (massiv_a[i] == a_maksimalno[i])
                    vihid_z_tsiklu++;
            if (vihid_z_tsiklu == kilkist_a)
                break;
            else vihid_z_tsiklu = 0;}
        return zagalna;}

    private: void All_Combo(int* a_maksimalno, int* a_minimalno, double* prototip_a, int kilkist_a, double summa_prototip_a, int** massiv_z_combi) {
        int* massiv_a = new int[kilkist_a];
        for (int i = 0; i < kilkist_a; i++) {
            massiv_a[i] = a_minimalno[i]; //0
        }
        int zagalna = 0, vihid_z_tsiklu = 0;
        double zagalna_summa_combi;
        bool true_if = false;
        while (true) {
            zagalna_summa_combi = 0;
            if (true_if == true) 
                massiv_a[kilkist_a - 1] += 1;
            else true_if = true;
            for (int i = 0; i < kilkist_a; i++)
                zagalna_summa_combi += massiv_a[i] * prototip_a[i];
            if (zagalna_summa_combi <= summa_prototip_a) {
                for (int i = 0; i < kilkist_a; i++)
                    massiv_z_combi[zagalna][i] = massiv_a[i];
                zagalna++;
            }
            for (int i = 1; i < kilkist_a; i++) 
                if (massiv_a[i] > a_maksimalno[i]) {
                    massiv_a[i - 1] += 1;
                    massiv_a[i] = a_minimalno[i]; //0
                    true_if = false;
                }
            for (int i = 0; i < kilkist_a; i++)
                if (massiv_a[i] == a_maksimalno[i])
                    vihid_z_tsiklu++;
            if (vihid_z_tsiklu == kilkist_a)
                break;
            else
                vihid_z_tsiklu = 0;}}

    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK){
            String^ fileName = folderBrowserDialog1->SelectedPath;
            textBox1->Text = fileName;}}
    private: void MarshalString(String^ s, std::string& os) {
        using namespace Runtime::InteropServices;
        const char* chars =
            (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
        os = chars;
        Marshal::FreeHGlobal(IntPtr((void*)chars));}
    private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
        groupBox3->Visible = true;
        groupBox4->Visible = false;}
    private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {       
        groupBox3->Visible = false;
        groupBox4->Visible = true;}
    private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {        
        groupBox3->Visible = true;
        groupBox4->Visible = true;
    }
}; }
