#include "fulllect.h"

void lect(const int x, const int y, const int width, const int height, const float& red, const float& green, const float& blue)
{
	for (int a = 0; a <= height; a++)
	{
		for (int b = 0; b <= width; b++)
		{
			drawPixel(x + b, y + a - height / 2, red, green, blue);
		}
	}
}

void fulllect::draw()
{
	lect(x, y, width, height, red, green, blue);
}