#pragma once
#include <iostream>
#include "Rectangle.h"

class RectArray
{
private:
	static const int MAX_ITEMS = 10;
	int count{ 0 };
	Rectangle* pRectArray[MAX_ITEMS];

public:
	RectArray();
	virtual ~RectArray();

	void Add(Rectangle* pRect);
	void Print() const;

	Rectangle*& operator[](const int idx);

	//Fuer die tiefe Kopie
	RectArray(const RectArray& orig);
	RectArray& operator=(const RectArray& rhs);
};

class Bad_area{};

