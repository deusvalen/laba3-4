#pragma once
#include "Thing.h"
#include <iostream>

	class Printer 
	{
	public:
		void iAmPrinting(Thing *someobj)
		{
			std::cout << typeid(someobj).name() << std::endl;
			someobj->ToConsole();
		}

	};