#include <algorithm>
#include <stdbool.h>
#include <math.h>
#include <iostream>
#include "mother_draw.h"
#include "circle.h"
#include "downform.h"
#include "emtylect.h"
#include "fulllect.h"
#include "leftform.h"
#include "Lform.h"
#include "thickline.h"
#include "upform.h"
#include "xform.h"
#include "Aform.h"

int width = 2500;
int height1 = 1000;
float* pixels = new float[width*height1 * 3];
double xPos, yPos;

const int num_dot = 20;
mother_draw **my_drawing = new mother_draw*[num_dot];
mother_draw **my_circle = new mother_draw*[num_dot];

int main(void)
{
	int start_x = 165;
	int start_y = 250;
	int num = 0;
	int count = 0;

	//circle 
	for (int i = 0; i < 2; i++)
	{
		my_drawing[i] = new circle;
		my_drawing[i]->x = start_x + (start_x * num);
		my_drawing[i]->y = start_y + (500 * i);
		my_drawing[i]->r = 50;
		my_drawing[i]->red = 255;
		my_drawing[i]->green = 0;
		my_drawing[i]->blue = 0;
		
	}
	num++;
	//emptylect
	for (int i = 2; i < 4; i++)
	{
		my_drawing[i] = new emtylect;
		my_drawing[i]->x = start_x + (start_x * num);
		my_drawing[i]->y = start_y + 500 * (i - 2);
		my_drawing[i]->width = 50;
		my_drawing[i]->height = 50;
		my_drawing[i]->red = 255;
		my_drawing[i]->green = 0;
		my_drawing[i]->blue = 0;
	}
	num++;
	//fulllect
	for (int i = 4; i < 6; i++)
	{
		my_drawing[i] = new fulllect;
		my_drawing[i]->x = start_x + (start_x * num);
		my_drawing[i]->y = start_y + 500 * (i-4);
		my_drawing[i]->width = 50;
		my_drawing[i]->height = 50;
		my_drawing[i]->red = 255;
		my_drawing[i]->green = 0;
		my_drawing[i]->blue = 0;
	}
	num++;
	//upform
	for (int i = 6; i < 8; i++)
	{
		my_drawing[i] = new upform;
		my_drawing[i]->x = start_x + (start_x * num);
		my_drawing[i]->y = start_y + 500 * (i-6);
		my_drawing[i]->height = 100;
		my_drawing[i]->red = 255;
		my_drawing[i]->green = 0;
		my_drawing[i]->blue = 0;
	}
	num++;
	//leftform
	for (int i = 8; i < 10; i++)
	{
		my_drawing[i] = new leftform;
		my_drawing[i]->x = start_x + (start_x * num);
		my_drawing[i]->y = start_y + 500 * (i - 8);
		my_drawing[i]->height = 100;
		my_drawing[i]->red = 255;
		my_drawing[i]->green = 0;
		my_drawing[i]->blue = 0;
	}
	num++;
	//Lform
	for (int i = 10; i < 12; i++)
	{
		my_drawing[i] = new Lform;
		my_drawing[i]->x = start_x + (start_x * num);
		my_drawing[i]->y = start_y + 500 * (i - 10);
		my_drawing[i]->height = 100;
		my_drawing[i]->red = 255;
		my_drawing[i]->green = 0;
		my_drawing[i]->blue = 0;
	}
	num++;
	//xform
	for (int i = 12; i < 14; i++)
	{
		my_drawing[i] = new xform;
		my_drawing[i]->x = start_x + (start_x * num);
		my_drawing[i]->y = start_y + 500 * (i - 12);
		my_drawing[i]->red = 255;
		my_drawing[i]->green = 0;
		my_drawing[i]->blue = 0;
	}
	num++;
	//thickline
	for (int i = 14; i < 16; i++)
	{
		my_drawing[i] = new thickline;
		my_drawing[i]->x = start_x + (start_x * num);
		my_drawing[i]->y = start_y + 500 * (i - 14);
		my_drawing[i]->t = 3;
		my_drawing[i]->red = 255;
		my_drawing[i]->green = 0;
		my_drawing[i]->blue = 0;
	}
	num++;
	// Aform
	for (int i = 16; i < 18; i++)
	{
		my_drawing[i] = new Aform;
		my_drawing[i]->x = start_x + (start_x * num);
		my_drawing[i]->y = start_y + 500 * (i - 16);
		my_drawing[i]->red = 255;
		my_drawing[i]->green = 0;
		my_drawing[i]->blue = 0;
	}
	num++;
	// downform
	for (int i = 18; i < 20; i++)
	{
		my_drawing[i] = new downform;
		my_drawing[i]->x = start_x + (start_x * num);
		my_drawing[i]->y = start_y + 500 * (i - 18);
		my_drawing[i]->height = 100;
		my_drawing[i]->red = 255;
		my_drawing[i]->green = 0;
		my_drawing[i]->blue = 0;
	}
	//around_circle
	for (int i = 0; i < 10; i++)
	{
		my_circle[i] = new mother_draw;
		my_circle[i]->x = start_x + 165 * i;
		my_circle[i]->y = start_y;
		my_circle[i]->r = 70;
		my_circle[i]->red = 0;
		my_circle[i]->green = 0;
		my_circle[i]->blue = 255;
	}
	for (int i = 10; i < 20; i++)
	{
		my_circle[i] = new mother_draw;
		my_circle[i]->x = start_x + 165 * (i-10);
		my_circle[i]->y = start_y + 500;
		my_circle[i]->r = 70;
		my_circle[i]->red = 0;
		my_circle[i]->green = 0;
		my_circle[i]->blue = 255;
	}
	GLFWwindow* window;
	/* Initialize the library */
	if (!glfwInit())
		return -1;

	/* Create a windowed mode window and its OpenGL context */
	window = glfwCreateWindow(width, height1, "2016112129 Taegun", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		return -1;
	}

	/* Make the window's context current */
	glfwMakeContextCurrent(window);
	
	
	/* Loop until the user closes the window */
	while (!glfwWindowShouldClose(window))
	{
		glfwGetCursorPos(window, &xPos, &yPos);		
	
		
		/* Render here */
		glClear(GL_COLOR_BUFFER_BIT);

		std::fill_n(pixels, width*height1 * 3, 1.0f);

		for (int a = 0; a < 20; a++)
		{
			my_drawing[a]->draw();
			my_circle[a]->draw();
		}

		glDrawPixels(width, height1, GL_RGB, GL_FLOAT, pixels);

		/* Swap front and back buffers */
		glfwSwapBuffers(window);

		/* Poll for and process events */
		glfwPollEvents();
	}

	delete[] pixels;
	delete[] * my_drawing;
	delete[] * my_circle;
	glfwTerminate();
	return 0;
}