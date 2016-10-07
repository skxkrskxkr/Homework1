#include "leftform.h"

void left_form(const int x, const int y, const int height, const float& red, const float& green, const float& blue)
{
	for (int a = 0; a < height; a++)  // left figure
	{
		drawPixel(x - height / 2 + a, y, red, green, blue);
	}
	drawLine(x - height / 2, y, x + 50 - height / 2, y + 50, red, green, blue);
	drawLine(x - height / 2, y, x + 50 - height / 2, y - 50, red, green, blue);
}

void leftform::draw()
{
		left_form(x, y, height, red, green, blue);
}