// Referenzen.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//
#include <iostream>
#include "../Rectangle/Rectangle.h"


int main()
{
	Rectangle& rect1 = *(new Rectangle(0, 0, 3, 4));//Derefernzierung -> Reales Heap-Element
	Rectangle rect2(0, 0, 4, 5);

	//Zeiger als Parallele
	Rectangle* pRect1 = new Rectangle(0, 0, 3, 4);
	Rectangle* pRect2 = new Rectangle(0, 0, 4, 5);
	Rectangle* pRect3;

	pRect1 = pRect2; //Kopiert den Zeiger in pRect1

	rect1 = rect2;//Kopiert das Objekt (Ueberschreibt) (wird assignt)

	Rectangle& rect3 = rect2; //Kopiert das Objekt rect2 in rect3 (wird initialisiert, copy constructor)

	//Garbage collection der Zeiger vom Heap
	//fuer zeiger
	delete pRect1; //achtung gibt pRect2 zurueck
	delete pRect2; //deshalb wird hier eine exception geworfen

	//bei Objecten
	delete &rect1; 


	

	std::system("pause");
    return 0;
}

