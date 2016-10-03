#pragma once
#include "Candies.h"

class Chocolate_Candy : public Candies
	{ 
	public: 
	void ToConsole();
	void SetType(char *type);
	char* GetType();
	void SetPercent(char *percent);
	char* GetPercent();
	
	Chocolate_Candy();
	~Chocolate_Candy();

	private:
	char *choko_type;
	char *cacao_percent;
	};