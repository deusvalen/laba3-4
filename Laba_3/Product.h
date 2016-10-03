#pragma once
#include "Thing.h"

	 class Product : public Thing
	{ 

	public: 
	void What();
	void ToConsole();
	void SetName(char *name);
	char* GetName();
	void SetMass(int mass);
	int GetMass();
	void SetCost(int cost);
	int GetCost();
	Product(); 
	~Product();

	private:
	char *name_;
	int mass_;
	int cost_;

	};