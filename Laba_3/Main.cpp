#include "Product.h" 
#include "Cookies.h" 
#include "Candies.h"
#include "Caramel.h" 
#include "Chocolate_Candy.h" 
#include "Printer.h"
#include "Thing.h"
#include <iostream> 
#include "windows.h" 
#include <stdio.h>
using namespace std;

	void main()
	{
		setlocale(LC_ALL,"rus");

		Cookies::Print g;
		Cookies z;
		z.GetNested(g);
		g.GetAny(z);
		z.GetColor();
		
		cout << z.GetCounter() << endl;

		Cookies *test = new Cookies;
		Candies *some = new Candies;
		Candies candy1;
		some = &candy1;
		some->SetColor("COLOLOLOR");
		some->SetFilling("FILILILING");
		Printer aluse;
		aluse.iAmPrinting(some);

		Caramel ggogo;
		ggogo.SetCARMass("123");
		ggogo.SetMilk(124);
		ggogo.ToConsole();

		// преобразование типов dynamic_cast
		Candies *candy = new Chocolate_Candy();
		Chocolate_Candy *choco;
		choco = dynamic_cast<Chocolate_Candy*>(candy);

		// static_cast
		Candies *ttt;
		Chocolate_Candy *mmm = new Chocolate_Candy();
		ttt = mmm;
		mmm = static_cast<Chocolate_Candy*>(ttt);

		//сonst_cast
		const int t = 777;
		int *ptr;
		ptr = const_cast<int*>(&t);



		delete test , some , ttt , mmm , candy;
		system("pause");
	}