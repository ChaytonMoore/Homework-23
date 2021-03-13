#include <iostream>

class Shape
{
public:
	float area = 0;

	void PrintArea()
	{
		std::cout << area << std::endl;
	}

};

class Square : public Shape
{
public:
	float EdgeLength;
	Square(float length)
	{
		EdgeLength = length;
		area = length * length;
	}
	
};



int main()
{
    std::cout << "Hello World!\n";
}


