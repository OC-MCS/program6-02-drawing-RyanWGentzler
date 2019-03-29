#pragma once
#include <SFML/Graphics.hpp>
#include <string>
#include <vector>
using namespace std;
using namespace sf;

struct toFile
{

};

// DrawingShape should be an abstract base class 
// for Circle and Square
class DrawingShape 
{
private:
	Vector2f pos;
	Color color;
public:
	virtual void draw();
	virtual toFile getFileRecord();
};

class Circle : public DrawingShape
{
private:
	CircleShape shp;
public:
	Circle(int);
	void draw();
	toFile getFileRecord();
};
// add Circle, Square classes below. These are derived from DrawingShape
class Square : public DrawingShape
{
private:
	RectangleShape shp;
public:
	Square(Vector2f);
	void draw();
	toFile getFileRecord();
};


