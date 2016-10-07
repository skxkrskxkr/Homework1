#include "Lform.h"

void L_form(const int x, const int y, const int height, const float& red, const float& green, const float& blue)
{
	for (int a = 0; a < height; a++)  // l figure
	{
		drawPixel(x - height / 2, y + a - height / 2, red, green, blue);
		drawPixel(x - height / 2 + a, y - height / 2, red, green, blue);
	}
}

void Lform::draw()
{
	L_form(x, y, height, red, green, blue);
}