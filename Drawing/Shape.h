#pragma once
#include <SFML/Graphics.hpp>
#include <string>
#include <vector>
using namespace std;
using namespace sf;

struct toFile
{
	Vector2f pos;
	ShapeEnum shape;
	Color color;
};

// DrawingShape should be an abstract base class 
// for Circle and Square
class DrawingShape 
{
public:
	virtual void draw(RenderWindow&) = 0;
	virtual toFile getFileRecord() = 0;
};

class Circle : public DrawingShape
{
private:
	CircleShape shp;
public:
	Circle(Vector2f pos, Color color)
	{
		shp.setPosition(pos);
		shp.setFillColor(color);
		shp.setRadius(10);
	}
	void draw(RenderWindow& win)
	{
		win.draw(shp);
	}
	//returns an easy to access version of a circle
	toFile getFileRecord() 
	{
		toFile temp;
		temp.pos = shp.getPosition();
		temp.color = shp.getFillColor();
		temp.shape = CIRCLE;
		return temp;
	}
};

class Square : public DrawingShape
{
private:
	RectangleShape shp;
public:
	Square(Vector2f pos, Color color)
	{
		shp.setPosition(pos);
		shp.setFillColor(color);
		shp.setSize(Vector2f(20, 20));
	}
	void draw(RenderWindow& win)
	{
		win.draw(shp);
	}
	//returns an easy to access version of a square
	toFile getFileRecord()
	{
		toFile temp;
		temp.pos = shp.getPosition();
		temp.color = shp.getFillColor();
		temp.shape = SQUARE;
		return temp;
	}
};


