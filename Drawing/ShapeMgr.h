#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include "Shape.h"

using namespace std;
using namespace sf;

// finish the ShapeMgr class.

class ShapeMgr
{
private:
	vector<DrawingShape*> shapes;
public:
	ShapeMgr()
	{
		
	}

	//will add a new "DrawingShape" to the end of the vector
	void addShape(Vector2f pos, ShapeEnum whichShape, Color color)
	{
		DrawingShape* temp;
		if (whichShape == CIRCLE)
		{
			temp = new Circle(pos, color);
			shapes.push_back(temp);
			
		}
		else if (whichShape == SQUARE)
		{
			temp = new Square(pos, color);
			shapes.push_back(temp);
		}
	}

	vector<DrawingShape*> getLoc()
	{
		return shapes;
	}

	//reads the data from the file
	void readData(fstream& file)
	{
		toFile temp;
		while (file.read(reinterpret_cast<char*>(&temp), sizeof(temp)))
		{
			addShape(temp.pos, temp.shape, temp.color);
		}
	}

	//writes the data to the file
	void writeData(fstream& file)
	{
		toFile temp;
		for (int i = 0; i < shapes.size(); i++)
		{
			temp = shapes[i]->getFileRecord();
			file.write(reinterpret_cast<char*>(&temp), sizeof(temp));
		}
	}
};