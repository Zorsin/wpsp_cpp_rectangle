#pragma once
#include <vector>
#include "Rectangle.h"

class RectVektor
{
private:
	std::vector<Rectangle*>* pRectVec = new std::vector<Rectangle*>();

public:
	RectVektor();
	virtual ~RectVektor();

	void Add(Rectangle* pRect);
	void Print() const;
};

