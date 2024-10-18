#include<iostream>
#include<time.h>
using namespace std;

class Point
{
	//private:
	int x;
	int y;
public:
	Point()  // construct by default
	{
		cout << "Construct\n";
		x = y = 0;
	}
	Point(int x1, int y1)   // Construct by 2 param
	{
		cout << "Construct by 2 param\n";
		x = x1;
		y = y1;
	}
	void Init()
	{
		x = rand() % 10;
		y = rand() % 10;
	}
	void Init(int x1, int y1)
	{
		x = x1;
		y = y1;
	}
	void Output()
	{
		cout << "X: " << x << "\tY: " << y << endl;
	}
	Point operator+(Point& b)
	{
		Point temp;
		temp.x = this->x + b.x;
		temp.y = this->y + b.y;
		return temp;
	}
	Point operator-(Point& b)
	{
		Point temp;
		temp.x = this->x - b.x;
		temp.y = this->y - b.y;
		return temp;
	}
	Point operator*(Point& b)
	{
		Point temp;
		temp.x = this->x * b.x;
		temp.y = this->y * b.y;
		return temp;
	}
	Point operator/(Point& b)
	{
		Point temp;
		temp.x = this->x / b.x;
		temp.y = this->y / b.y;
		return temp;
	}
	Point operator+(int b)
	{
		Point temp(x + b, y + b);
		return temp;
	}
	Point operator-(int b)
	{
		Point temp(x - b, y - b);
		return temp;
	}
	Point operator*(int b)
	{
		Point temp(x * b, y * b);
		return temp;
	}
	Point operator/(int b)
	{
		Point temp(x / b, y / b);
		return temp;
	}
};

int main()
{
	srand(unsigned(time(0)));
	Point a(1, 2);
	Point b(3, 4);

	Point c = a * 3;
	c.Output();
	c = a / b;
	c.Output();
	c = a * b;
	c.Output();
	c = a / 2;
	c.Output();
}