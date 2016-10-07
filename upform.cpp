#include "upform.h"

void up_form(const int start_x, const int start_y, const int height, const float& red, const float& green, const float& blue)
{
	for (int a = 0; a < height; a++)
	{
		drawPixel(start_x, start_y + a - height / 2, 255, 0, 0);
	}
	drawLine(start_x - 50, start_y + height / 2 - 50, start_x, start_y + height / 2, red, green, blue);
	drawLine(start_x, start_y + height / 2, start_x + 50, start_y + height / 2 - 50, red, green, blue);
}

void upform::draw()
{
	up_form(x, y, height, red, green, blue);
}

