#include "circle.h"

void drawcircle(const int x, const int y, const int r, const float& red, const float& green, const float& blue, double xPos, double yPos)
{
	int x_c = x;
	int y_c = y;


	for (int a = 0; a <= 2 * r; a++)
	{
		for (int b = 0; b <= 2 * r; b++)
		{
			int f = (r - b)*(r - b) + (r - a)*(r - a) - r*r;
			if (f < 0)
			{
				drawPixel(x - r + b, y - r + a, red, green, blue);
			}


		}
	}
}

void circle::draw()
{
	drawcircle(x, y, r, red, green, blue, 0.0, 0.0);
}
