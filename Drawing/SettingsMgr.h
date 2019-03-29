#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;
using namespace sf;

enum ShapeEnum { CIRCLE, SQUARE };

// finish this code; add functions, data as needed

class SettingsMgr
{
private:
	Color color;
	ShapeEnum shape;
public:
	SettingsMgr(Color startingColor, ShapeEnum startingShape )
	{
		color = startingColor;
		shape = startingShape;
	}

	void setColor(Color color)
	{
		this->color = color;
	}

	void setShape(ShapeEnum shape)
	{
		this->shape = shape;
	}

	Color getCurColor()
	{
		return color;
	}

	ShapeEnum getCurShape()
	{
		return shape;
	}

	//reads the data from the file
	void readData(fstream& file)
	{
		file.read(reinterpret_cast<char*>(&color), sizeof(color));
		file.read(reinterpret_cast<char*>(&shape), sizeof(shape));
	}

	//writes the data from the file
	void writeData(fstream& file)
	{
		file.write(reinterpret_cast<char*>(&color), sizeof(color));
		file.write(reinterpret_cast<char*>(&shape), sizeof(shape));
	}
};
