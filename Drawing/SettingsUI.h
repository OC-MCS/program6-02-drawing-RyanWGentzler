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

public:
	SettingsUI(SettingsMgr *mgr)
	{

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

		CircleShape blueBtn;	//CircleShape is a Graphics lib class
		Vector2f bbpos(60, 70);
		blueBtn.setPosition(bbpos);
		blueBtn.setRadius(10);
		blueBtn.setOutlineThickness(2);
		blueBtn.setOutlineColor(Color::Blue);
		// for just an outlined button
		blueBtn.setFillColor(Color::Transparent);

		win.draw(blueBtn);

		CircleShape redBtn;	//CircleShape is a Graphics lib class
		Vector2f rbpos(60, 100);
		redBtn.setPosition(rbpos);
		redBtn.setRadius(10);
		redBtn.setOutlineThickness(2);
		redBtn.setOutlineColor(Color::Red);
		// for just an outlined button
		redBtn.setFillColor(Color::Transparent);

		win.draw(redBtn);

		CircleShape greenBtn;	//CircleShape is a Graphics lib class
		Vector2f gbpos(60, 130);
		greenBtn.setPosition(gbpos);
		greenBtn.setRadius(10);
		greenBtn.setOutlineThickness(2);
		greenBtn.setOutlineColor(Color::Green);
		// for just an outlined button
		greenBtn.setFillColor(Color::Transparent);

		win.draw(greenBtn);



	}

};
