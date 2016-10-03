#include "Product.h"
#include "Candies.h" 
#include <iostream> 
using namespace std;

	Candies::Candies()
	{
	}

	Candies::~Candies()
	{
	}

		void Candies::ToConsole()
	{
		cout << typeid(this).name() <<" "<<  color_ << " "<< filling_ <<  endl;
	}

	void Candies::SetColor(char *color)
	{
		this->color_ = color;
	}

		void Candies::SetFilling(char *filling)
	{
		this->filling_ = filling;
	}

	char* Candies::GetColor()
	{
		cout<<"Цвет: "<<this->color_<<endl; 
		return this->color_;
	}

	char* Candies::GetFilling()
	{
		cout<<"Начинка: "<<this->filling_<<endl; 
		return this->filling_;
	}

		void Candies :: What()
	{
		cout << "Конфета" << endl;
	}