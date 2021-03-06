// RectArrayUse.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "../Rectangle/RectArray.h"
#include "iostream"

int main()
{
	RectArray * pRectArray = new RectArray();
	const int nbrEntriese = 100;

	for (int i = 0; i < nbrEntriese; i++) {
		Rectangle* pRect = new Rectangle(0, 0, i, i);

		try {
			pRectArray->Add(pRect);
		}
		catch (Bad_area) {
			std::cout << "Out of array boundaries:" << i << std::endl;
		}
		
	}
	pRectArray->Print();
	std::system("pause");
    return 0;
}

