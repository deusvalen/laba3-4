#pragma once

class Caramel
	{ 
	public:
	void ToConsole();
	void SetCARMass(char *mass);
	char* GetCARMass();
	void SetMilk(int milk);
	int GetMilk();
	Caramel();
	~Caramel();

	private: 
	char *caram_mass_;
	int milk_;

	};