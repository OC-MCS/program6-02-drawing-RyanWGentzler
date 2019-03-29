#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;
using namespace sf;
#include "ShapeMgr.h"

// finish this code; add functions, data as needed

class DrawingUI
{
private:
	RectangleShape canvas;
public:
	DrawingUI(Vector2f p)
	{
		Vector2f sqPos(p);
		canvas.setPosition(sqPos);
		canvas.setOutlineColor(Color::White);
		canvas.setOutlineThickness(2);
		canvas.setSize(Vector2f(550, 500));
		canvas.setFillColor(Color::White);

	}

	void draw(RenderWindow& win, ShapeMgr *mgr)
	{
		win.draw(canvas);
	}
	
	bool isMouseInCanvas(Vector2f mousePos)
	{
		bool temp;
		if (canvas.getGlobalBounds().contains(mousePos))
			temp = true;
		return temp; // just to make it compile
	}

};

