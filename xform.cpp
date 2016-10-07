#include "xform.h"

void x_form(const int x, const int y, const float& red, const float& green, const float& blue)
{
	drawLine(x - 50, y + 50, x + 50, y - 50, red, green, blue);   //x figure
	drawLine(x - 50, y - 50, x + 50, y + 50, red, green, blue);
}

void xform::draw()
{
	x_form(x, y, red, green, blue);
}