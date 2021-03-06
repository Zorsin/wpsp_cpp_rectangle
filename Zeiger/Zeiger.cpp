// Zeiger.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//
#include <iostream>
#include "../Rectangle/Rectangle.h"


int main()
{
	Rectangle* pMyRect1 = new Rectangle(0, 0, 3, 4);
	Rectangle* pMyRect2 = new Rectangle(0, 0, 4, 5);

	(*pMyRect1).Print();//Klassische Referenz
	pMyRect2->Print();//Derefernzierungsoperator 

	Rectangle* pMyRect3 = nullptr;

	std::cout << "Adr(pMyRect3):" << pMyRect3 << std::endl;
	pMyRect3++;
	std::cout << "Adr(pMyRect3):" << pMyRect3 << std::endl;
	
	
	std::system("pause");
    return 0;
}

