#pragma once
#include "Chocolate_Cookies.h"
#include <iostream>

class S_Chocolate_Cookies : public Chocolate_Cookies
	{ 

	public :
	void ToConsole();
	char *sweets; // ������������ �������� ��� �������(���������, ��������)
	
	private:
	const int percent = 25;
	const int Gost_Check()
	{
		if (this->sweetpercent != percent)
		{
		std::cout << "�������� �� �� �����!"<< std::endl;
		}
	}
	};