#pragma once

#include "glfw3.h"
#include <math.h>

extern int width;
extern int height1;
extern double xPos, yPos;
extern float* pixels;

void drawPixel(const int& i, const int& j, const float& red, const float& green, const float& blue);
void drawcolorchangecircle(const int x, const int y, const int r, const float& red, const float& green, const float& blue, double xPos, double yPos);
void drawcolorchangesquare(const int x, const int y, const int r, const float& red, const float& green, const float& blue, double xPos, double yPos);
void drawLine(const int& i0, const int& j0, const int& i1, const int& j1, const float& red, const float& green, const float& blue);
class mother_draw
{
public:
	int x, y, r, t, height, width;
	float red, green, blue;

	virtual void draw()
	{
		//drawcolorchangecircle(x, y, r, red, green, blue, xPos, yPos);
		drawcolorchangesquare(x, y, r, red, green, blue, xPos, yPos);
	}
};


