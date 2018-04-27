#include "RectVektor.h"



RectVektor::RectVektor()
{
	pRectVec->clear();
}


RectVektor::~RectVektor()
{
	while (pRectVec->size() > 0) {
		//Rectangle* pRect = (*pRectVec)[pRectVec->size];
		
		//delete pRect;
	}
}

void RectVektor::Add(Rectangle* pRect) {
	pRectVec->push_back(pRect);
}

void RectVektor::Print() const {
	//for (std::vector<Rectangle*>::const_iterator it = pRectVec->begin(); it != pRectVec->end(); it++)
	for (auto it = pRectVec->begin(); it != pRectVec->end(); it++) {
		(*it)->Print();
		delete (*it);
	}
}