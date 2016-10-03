#include "Chocolate_Candy.h" 
#include <iostream> 
using namespace std;


	Chocolate_Candy::Chocolate_Candy()
	{
	}

	Chocolate_Candy::~Chocolate_Candy()
	{
	}

	void Chocolate_Candy::ToConsole()
	{
		cout << typeid(this).name() <<" "<<  choko_type << " "<< cacao_percent  <<  endl;
	}

	void Chocolate_Candy::SetType(char *type)
	{
		this->choko_type = type;
	}

		void Chocolate_Candy::SetPercent(char *percent)
	{
		this->cacao_percent = percent;
	}

	char* Chocolate_Candy::GetType()
	{
		cout<<"Цвет: "<<this->choko_type<<endl; 
		return this->choko_type;
	}

	char* Chocolate_Candy::GetPercent()
	{
		cout<<"Процент какао: "<<this->cacao_percent<<endl; 
		return this->cacao_percent;
	}
