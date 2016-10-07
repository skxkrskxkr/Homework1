#include "downform.h"

void down_form(const int x, const int y, const int height, const float& red, const float& green, const float& blue)
{
	for (int a = 0; a < height; a++)  // down figure 1600, 680
	{
		drawPixel(x, y + a - 50, 255, 0, 0);
	}
	drawLine(x - 50, y, x, y - 50, red, green, blue);
	drawLine(x, y - 50, x + 50, y, red, green, blue);
}

void downform::draw()
{
	down_form(x, y, height, red, green, blue);
}