#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;
using namespace sf;
#include "SettingsMgr.h"

// finish this code; add functions, data as needed
void die(string msg)
{
	cout << msg << endl;
	exit(-1);
}


class SettingsUI
{
private:
	CircleShape blueBtn;	//CircleShape is a Graphics lib class
	CircleShape redBtn;	//CircleShape is a Graphics lib class
	CircleShape greenBtn;	//CircleShape is a Graphics lib class
	CircleShape circleBtn;	//CircleShape is a Graphics lib class
	RectangleShape squareBtn; // RectangleShape is Graphics lib class
public:
	SettingsUI(SettingsMgr *mgr)
	{
		Vector2f bbpos(60, 70);
		blueBtn.setPosition(bbpos);
		blueBtn.setRadius(10);
		blueBtn.setOutlineThickness(2);
		blueBtn.setOutlineColor(Color::Blue);

		Vector2f rbpos(60, 100);
		redBtn.setPosition(rbpos);
		redBtn.setRadius(10);
		redBtn.setOutlineThickness(2);
		redBtn.setOutlineColor(Color::Red);
		// for just an outlined button
		redBtn.setFillColor(Color::Transparent);

		Vector2f gbpos(60, 130);
		greenBtn.setPosition(gbpos);
		greenBtn.setRadius(10);
		greenBtn.setOutlineThickness(2);
		greenBtn.setOutlineColor(Color::Green);
		// for just an outlined button
		greenBtn.setFillColor(Color::Transparent);

		Vector2f cbpos(60, 240);
		circleBtn.setPosition(cbpos);
		circleBtn.setRadius(10);
		circleBtn.setOutlineThickness(2);
		circleBtn.setOutlineColor(Color::White);

		Vector2f sqPos(60, 270);
		squareBtn.setPosition(sqPos);
		squareBtn.setOutlineColor(Color::White);
		squareBtn.setOutlineThickness(2);
		squareBtn.setSize(Vector2f(20, 20));

		if (mgr->getCurColor == (Color::Blue))
		{
			blueBtn.setFillColor(Color::Blue);
			redBtn.setFillColor(Color::Transparent);
			greenBtn.setFillColor(Color::Transparent);
		}
		else if (mgr->getCurColor == Color::Red)
		{
			blueBtn.setFillColor(Color::Transparent);
			redBtn.setFillColor(Color::Red);
			greenBtn.setFillColor(Color::Transparent);
		}
		else if (mgr->getCurColor == Color::Green)
		{
			blueBtn.setFillColor(Color::Transparent);
			redBtn.setFillColor(Color::Transparent);
			greenBtn.setFillColor(Color::Green);
		}

		if (mgr->getCurShape == CIRCLE)
		{
			circleBtn.setFillColor(Color::White);
			squareBtn.setFillColor(Color::Transparent);
		}
		else if (mgr->getCurShape == SQUARE)
		{
			squareBtn.setFillColor(Color::White);
			circleBtn.setFillColor(Color::Transparent);
		}
	}
	void handleMouseUp(Vector2f mouse)
	{

	}

	void draw(RenderWindow& win)
	{

		Font font;
		if (!font.loadFromFile("C:\\Windows\\Fonts\\arial.ttf"))
			die("couldn't load font");

		// title
		Text title("Selected Color", font, 15);
		title.setPosition(20, 25);
		win.draw(title);

		Text subtitle("Selected Shape", font, 15);
		subtitle.setPosition(20, 200);
		win.draw(subtitle);

		win.draw(blueBtn);

		win.draw(redBtn);

		win.draw(greenBtn);

		win.draw(circleBtn);

		win.draw(squareBtn);


	}

};
