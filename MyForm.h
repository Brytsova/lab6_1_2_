#pragma once
#include <cstdlib>
#include <ctime>
#include <string>
#include <Windows.h> // Для MessageBox
namespace lab612 {

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
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;








	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(6, -2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(800, 666);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(792, 633);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Завдання 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(297, 565);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 50);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Обчислити";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column1 });
			this->dataGridView1->Location = System::Drawing::Point(240, 6);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(242, 537);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Column1";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 150;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(792, 633);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Завдання 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler(this, &MyForm::tabPage2_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(308, 344);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(169, 62);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Обчислити";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column2,
					this->Column3, this->Column4
			});
			this->dataGridView2->Location = System::Drawing::Point(0, 53);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 62;
			this->dataGridView2->RowTemplate->Height = 28;
			this->dataGridView2->Size = System::Drawing::Size(764, 197);
			this->dataGridView2->TabIndex = 0;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Column2";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Column3";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 150;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Column4";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 150;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(808, 664);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Створення масиву та заповнення його випадковими числами
		int size = 10;
		int* arr = new int[size];

		srand(static_cast<unsigned int>(time(0))); // Ініціалізація генератора випадкових чисел

		// Заповнення масиву випадковими числами від -10 до 10
		for (int i = 0; i < size; i++) {
			arr[i] = rand() % 21 - 10; // Випадкові числа між -10 та 10
			dataGridView1->Rows->Add(arr[i], ""); // Додавання числа до DataGridView
		}

		// Знаходження максимального та мінімального значень у масиві
		int maxElement = arr[0];
		int minElement = arr[0];

		for (int i = 1; i < size; i++) {
			if (arr[i] > maxElement) {
				maxElement = arr[i];
			}
			if (arr[i] < minElement) {
				minElement = arr[i];
			}
		}

		// Обчислення різниці між максимальним та мінімальним елементами
		int difference = maxElement - minElement;

		// Виведення результату за допомогою MessageBox
		String^ message = String::Format("Різниця між найбільшим і найменшим елементами: {0}", difference);
		MessageBox::Show(message);

		// Звільнення пам'яті масиву
		delete[] arr;
	}

	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->ColumnCount = 1;
		dataGridView1->Columns[0]->Name = "Value";
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->ColumnCount = 1;
		dataGridView1->Columns[0]->Name = "Value";
		dataGridView2->ColumnCount = 4; // Встановлення кількості стовпців
		dataGridView2->RowCount = 3; // Встановлення кількості рядків
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		const int rows = 3; // Кількість рядків
		const int cols = 3; // Кількість стовпців
		int** arr = new int* [rows];

		srand(static_cast<unsigned int>(time(0))); // Ініціалізація генератора випадкових чисел

		// Створення та заповнення двовимірного масиву випадковими числами
		for (int i = 0; i < rows; i++) {
			arr[i] = new int[cols];
			for (int j = 0; j < cols; j++) {
				arr[i][j] = rand() % 21 - 10; // Випадкові числа від -10 до 10
			}
		}

		// Виведення двовимірного масиву в dataGridView2
		dataGridView2->RowCount = rows;
		dataGridView2->ColumnCount = cols;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				dataGridView2->Rows[i]->Cells[j]->Value = arr[i][j];
			}
		}

		// Обчислення суми всіх від’ємних елементів
		int negativeSum = 0;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				if (arr[i][j] < 0) {
					negativeSum += arr[i][j]; // Додавання від’ємних елементів до суми
				}
			}
		}

		// Виведення суми від’ємних елементів в MessageBox
		String^ message = String::Format("Сума всіх від’ємних елементів матриці: {0}", negativeSum);
		MessageBox::Show(message);

		// Звільнення пам'яті масиву
		for (int i = 0; i < rows; i++) {
			delete[] arr[i]; // Звільнення пам'яті для рядка
		}
		delete[] arr; // Звільнення пам'яті для масиву вказівників
	}
	private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView2->ColumnCount = 3; // Встановлення кількості стовпців
		dataGridView2->RowCount = 3; // Встановлення кількості рядків
	}
};
}
