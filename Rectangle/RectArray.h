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
};

class Bad_area{};

