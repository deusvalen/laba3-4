#pragma once
#include "Product.h"
#include "Caramel.h"

	class Candies : public Product
	{ 
	public:
	void What();
	void ToConsole();
	void SetColor(char *color);
	char* GetColor();
	void SetFilling(char * filling);
	char* GetFilling();
	Caramel caramel; // OBJECT
	Candies(); 
	~Candies();


	

	private:
	char *color_;
	char *filling_;
	};