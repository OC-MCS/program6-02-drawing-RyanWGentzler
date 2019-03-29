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

	//will draw the correct things in the right places (runs through the loop)
	void draw(RenderWindow& win, ShapeMgr *mgr)
	{
		win.draw(canvas);
		for (int i = 0; i < mgr->getLoc().size(); i++)
		{
			mgr->getLoc()[i]->draw(win);
		}
	}
	
	bool isMouseInCanvas(Vector2f mousePos)
	{
		bool temp = false;
		if (canvas.getGlobalBounds().contains(mousePos))
			temp = true;
		return temp;
	}

};

