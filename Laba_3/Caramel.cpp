#include "Caramel.h" 
#include <iostream> 
using namespace std;

	Caramel::Caramel()
	{
	}

	Caramel::~Caramel()
	{
	}

	void Caramel::ToConsole()
	{
		cout << typeid(this).name() <<" "<<  caram_mass_ << " "<< milk_ <<  endl;
	}

	void Caramel::SetCARMass(char *mass)
	{
		this->caram_mass_ = mass;
	}

		void Caramel::SetMilk(int milk)
	{
	    milk_ = milk;
	}

	char* Caramel::GetCARMass()
	{			
			cout<<"���������� ��������: "<<this->caram_mass_<<endl; 
			return this->caram_mass_;
	}

	int Caramel::GetMilk()
	{
		cout<<"����� ����� ������: "<<this->milk_<<endl; 
		return this->milk_;
	}
