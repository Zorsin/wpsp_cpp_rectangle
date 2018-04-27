#include "RectArray.h"



RectArray::RectArray()
{
	for (int i = 0; i < MAX_ITEMS; i++) {
		pRectArray[i] = nullptr;
	}
}


RectArray::~RectArray()
{
	for (int i = 0; i < MAX_ITEMS; i++) {
		if (!pRectArray[i]) delete pRectArray[i];
	}
}

void RectArray::Add(Rectangle* pRect) {
	if ((count < 0)||(count == MAX_ITEMS)) {
		throw Bad_area{};
	}
	pRectArray[count++] = pRect;
}

void RectArray::Print() const{
	for (int i = 0; i < count; i++) {
		pRectArray[i]->Print();
	}
}

Rectangle*& RectArray::operator[](const int idx) {

	return pRectArray[idx];
}

RectArray::RectArray(const RectArray& orig) {
	//(1) Alle ausser Refs und Zeiger kopieren
	count = orig.count;
	
	//(2) Fuer alle Refs ud Zeiger neue Objekte generieren
	for (int i = 0; i < count; i++) {
		pRectArray[i] = new Rectangle(*orig.pRectArray[i]);
	}
}

RectArray& RectArray::operator=(const RectArray& rhs) {
	//(1) Fuer lhs die Objekte zurueckgeben
	for (int i = 0; i < count; i++) {
		delete pRectArray[i];
	}

	//(2) Alles ausser Refs und Zeiger kopieren
	count = rhs.count;

	//(3) Fuer alle Refs ud Zeiger neue Objekte generieren
	for (int i = 0; i < count; i++) {
		pRectArray[i] = new Rectangle(*rhs.pRectArray[i]);
	}

	//(4) Erstelle Kopie nach lhs kopieren
	return *this;
}
