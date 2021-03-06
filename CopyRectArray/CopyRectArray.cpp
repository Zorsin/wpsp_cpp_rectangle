// CopyRectArray.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <iostream>
#include "../Rectangle/RectArray.h"

void PrintAll(const RectArray& arr1, const RectArray& arr2, const RectArray& arr3) {
	arr1.Print();
	std::cout << "----------" << std::endl;
	arr2.Print();
	std::cout << "----------" << std::endl;
	arr3.Print();
	std::cout << "----------" << std::endl;
}

int main()
{
	RectArray * pArr1 = new RectArray();
	const int nbrEntries = 10;
	for (int i = 0; i < nbrEntries; i++) {
		Rectangle* pRect = new Rectangle(0, 0, i, i);
		pArr1->Add(pRect);
	}

	//In zweites Array kopieren
	RectArray* pArr2 = new RectArray(*pArr1);
	
	//In drittes Array kopieren
	RectArray* pArr3 = new RectArray();
	*pArr3 = *pArr1;

	//Aenderugnen im ersten Array
	for (int i = 0; i < nbrEntries; i++) {
		(*pArr1)[i]->SetPos(i, i);
	}

	PrintAll(*pArr1, *pArr2, *pArr3);

	std::system("pause");
    return 0;
}

