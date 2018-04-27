#pragma once

class Rectangle {
	float x{ 0 };//Initialisierungslisten, bevorzugen | auch  = 0 moeglich
	float y{ 0 };
	float width{ 0 };
	float height{ 0 };

public:
	Rectangle(float x, float y, float width, float height);

	void SetPos(float x, float y);
	void SetDim(float width, float height);

	double GetArea() const;

	void Print() const;
};
