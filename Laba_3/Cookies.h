#pragma once
#include "Product.h"

	class Cookies : public Product
	{ 

	public: 
	void ToConsole();
	static int GetCounter(); // Счетчик объектов
	void What();
	void SetColor(char *color);
	char* GetColor();
	void SetStruct(char *Struct);
	char* GetStruct();
	void SetFilling(char *filling);
	char* GetFilling();
	Cookies(); 
	~Cookies();

	 class Print // Nested Class
	{
		public:
		void ShowText();
		void GetAny(Cookies &obj);
	};

	void GetNested(Print &obj);

	private:
	static int counter ; // Переменная счетчика объектов
	char *color_;
	char *structure_;
	char *filling_;
	};