#include "emtylect.h"	

void emptylect(const int x, const int y, const int width, const int height, const float& red, const float& green, const float& blue)
{
	for (int a = 0; a <= width; a++)
	{
		drawPixel(x + a, y + height / 2, 255, 0, 0);
		drawPixel(x + a, y - height / 2, 255, 0, 0);

	}
	for (int a = 0; a <= height; a++)
	{
		drawPixel(x, y + a - height / 2, 255, 0, 0);
		drawPixel(x + width, y - a + height / 2, 255, 0, 0);
	}
}


void emtylect::draw()
{
	emptylect(x, y, width, height, red, green, blue);
}