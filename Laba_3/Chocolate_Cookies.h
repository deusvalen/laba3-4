#pragma once
#include "Cookies.h"

class Chocolate_Cookies : protected Cookies
	{ 

	protected : 
	char *choko_type; // ��� �������� ��� ����������� ������������ � s_chocolate_cookies
	int sweetpercent; // public ������� ��������
	
	public :
	void ToConsole();
	char *cacao_percent;
	};