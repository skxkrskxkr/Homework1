#include "Aform.h"

void A_form(const int x, const int y, const float& red, const float& green, const float& blue)
{
	for (int a = 0; a < 5; a++)  // A figure //490 200
	{
		drawLine(x - 50, y + a - 50, x, y + 50 + a, red, green, blue);
	}

	for (int a = 0; a < 5; a++)
	{
		drawLine(x, y + 50 + a, x + 50, y + a - 50, red, green, blue);
	}
	for (int a = 0; a < 51; a++)
	{
		drawPixel(x - 25 + a, y, red, green, blue);
		drawPixel(x - 25 + a, y - 1, red, green, blue);
	}
}

void Aform::draw()
{
	A_form(x, y, red, green, blue);
}