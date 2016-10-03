#include "Product.h" 
#include <iostream> 
using namespace std;

	 Product::Product()
	{
	}

	Product::~Product()
	{
	}

	void Product::ToConsole()
	{
		cout << typeid(this).name() <<" "<<  this->mass_ << " "<< this->cost_  <<" "<< this->name_ <<  endl;
	}

	void Product::SetName(char *name)
	{
		this->name_ = name;
	}

	void Product::SetMass(int mass)
	{
		this->mass_ = mass;
	}

	void Product::SetCost(int cost)
	{
		this->cost_ = cost;
	}

	char* Product::GetName()
	{
		cout<<"Имя: "<<this->name_<<endl; 
		return this->name_;
	}

	int Product::GetMass()
	{
		cout<<"Масса: "<<this->mass_<<endl; 
		return this->mass_;
	}

	int Product::GetCost()
	{
		cout<<"Стоимость: "<<this->cost_<<endl; 
		return this->cost_;
	}

	void Product::What()
	{
	cout << "Продукт" << endl;
	}



