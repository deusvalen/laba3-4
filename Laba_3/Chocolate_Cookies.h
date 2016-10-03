#pragma once
#include "Cookies.h"

class Chocolate_Cookies : protected Cookies
	{ 

	protected : 
	char *choko_type; // тип шоколада для дальнейшего наследования в s_chocolate_cookies
	int sweetpercent; // public процент сладости
	
	public :
	void ToConsole();
	char *cacao_percent;
	};