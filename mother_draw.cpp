#include "mother_draw.h"

void drawPixel(const int& i, const int& j, const float& red, const float& green, const float& blue)
{
	pixels[(i + width* j) * 3 + 0] = red;
	pixels[(i + width* j) * 3 + 1] = green;
	pixels[(i + width* j) * 3 + 2] = blue;
}
void drawLine(const int& i0, const int& j0, const int& i1, const int& j1, const float& red, const float& green, const float& blue)
{
	for (int i = i0; i <= i1; i++)
	{
		int lines = abs(i - i0);
		int lines2 = abs(j1 - j0);
		int lines3 = abs(i1 - i0);
		const int j = (j1 - j0)*lines / (i1 - i0) + j0;

		drawPixel(i, j, red, green, blue);
	}
}
void drawcolorchangecircle(const int x, const int y, const int r, const float& red, const float& green, const float& blue, double xPos, double yPos)
{
	int x_c = x;
	int y_c = y;
	for (int a = 0; a <= 2 * r; a++)
	{
		for (int b = 0; b <= 2 * r; b++)
		{
			int f = (r - b)*(r - b) + (r - a)*(r - a) - r*r;
			double f2 = (x_c - xPos)*(x_c - xPos) + (y_c - (height1 - yPos))*(y_c - (height1 - yPos)) - r*r;
			if (f < 0 && -1000 < f)
			{
				if (f2 < 0)
				{
					drawPixel(x - r + b, y - r + a, 0, 0, red);
				}
				else drawPixel(x - r + b, y - r + a, red, green, blue);
			}
		}
	}
}
void drawcolorchangesquare(const int x, const int y, const int r, const float& red, const float& green, const float& blue, double xPos, double yPos)
{
	
		int x_c = x;
		int y_c = y;
		for (int a = 0; a < 3; a++)
		{
			drawLine(x_c - r, y_c - r + a, x_c + r, y_c - r + a, red, green, blue);
			drawLine(x_c - r, y_c + r + a, x_c + r, y_c + r + a, red, green, blue);
			if (((xPos >= x_c - r) && (xPos <= x_c + r)) && ((height1 - yPos >= y_c - r && height1 - yPos <= y_c + r)))
			{
				for (int a = 0; a < 3; a++)
				{
					drawLine(x_c - r, y_c - r + a, x_c + r, y_c - r + a, red, blue, green);
					drawLine(x_c - r, y_c + r + a, x_c + r, y_c + r + a, red, blue, green);
				}
			}
		}
		for (int a = 0; a < 2 * r; a++)
		{
			drawPixel(x_c - r, y_c - r + a, red, green, blue);
			drawPixel(x_c - r+1, y_c - r + a, red, green, blue);
			drawPixel(x_c - r+2, y_c - r + a, red, green, blue);
			drawPixel(x_c + r , y_c - r + a, red, green, blue);
			drawPixel(x_c + r + 1, y_c - r + a, red, green, blue);
			drawPixel(x_c + r + 2, y_c - r + a, red, green, blue);
			if (((xPos >= x_c - r) && (xPos <= x_c + r)) && ((height1 - yPos >= y_c - r && height1 - yPos <= y_c + r)))
			{
				for (int a = 0; a < 2 * r; a++)
				{
					drawPixel(x_c - r, y_c - r + a, red, blue, green);
					drawPixel(x_c - r + 1, y_c - r + a, red, blue, green);
					drawPixel(x_c - r + 2, y_c - r + a, red, blue, green);
					drawPixel(x_c + r , y_c - r + a, red, blue, green);
					drawPixel(x_c + r + 1, y_c - r + a, red, blue, green);
					drawPixel(x_c + r + 2, y_c - r + a, red, blue, green);
				}
			}
		}
		
}