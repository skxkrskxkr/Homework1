#include "thickline.h"

void thick_line(const int x, const int y, const int t, const float& red, const float& green, const float& blue)
{
	for (int a = 0; a < t; a++)  // thick line
	{
		drawLine(x - 50, y - a - 50, x + 50, y + 50 - a, red, green, blue);
	}
}

void thickline::draw()
{
	thick_line(x, y, t, red, green, blue);
}