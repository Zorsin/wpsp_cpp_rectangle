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
	if (count == MAX_ITEMS) {
		throw Bad_area{};
	}
	pRectArray[count++] = pRect;
}

void RectArray::Print() const{
	for (int i = 0; i < count; i++) {
		pRectArray[i]->Print();
	}
}
