#include "Cookies.h" 
#include <iostream> 
using namespace std;

	int Cookies::counter = 0;

	Cookies::Cookies()
	{
		counter++;
	}

	Cookies::~Cookies()
	{
		counter--;
	}



	void Cookies::SetColor(char *color)
	{
		this->color_ = color;
	}

		void Cookies::SetStruct(char *Struct)
	{
		this->structure_ = Struct;
	}

		void Cookies::SetFilling(char *filling)
	{
		this->filling_ = filling;
	}

	char* Cookies::GetColor()
	{
		cout<<"����: "<<this->color_<<endl; 
		return this->color_;
	}

	char* Cookies::GetStruct()
	{
		cout<<"��������� �������: "<<this->structure_<<endl; 
		return this->structure_;
	}

	char* Cookies::GetFilling()
	{
		cout<<"�������: "<<this->filling_<<endl; 
		return this->filling_;
	}

	void Cookies :: Print :: ShowText()
	{
		cout << "Nested Class : ��� �������� �������������!" << endl;
	};

	void Cookies :: Print :: GetAny(Cookies &obj)
	{
		obj.SetColor("NESTED COLOR");
	}

	void Cookies :: GetNested(Print &obj)
	{
		obj.ShowText();
	}

	void Cookies :: What()
	{
		cout << "�������" << endl;
	}

	int Cookies :: GetCounter()
	{
		return counter;
	}

		void Cookies::ToConsole()
	{
		cout << typeid(this).name() <<" "<<  this->color_ << " "<< this->structure_  <<" "<< this->filling_ <<  endl;
	}