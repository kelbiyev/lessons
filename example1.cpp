#include <iostream>

enum class Color {
	White,
	Red,
	Orange,
	Blue
};

struct Point{
	double x = 0.0;
	double y = 0.0;
	double z = 0.0;
	Color color;
};

int main(){

	Point point1;
	point1.color = Color::Blue;
	Point point2 = {1.4 , -2.2 , -3.98 , Color::Red};
	point2.z = 32;
	point2.x += 2;
	double a = sizeof(point1);
	double b = sizeof(double);
	double c = sizeof(Color);
	std::cout<<a<<"\n";
	std::cout<<b<<"\n";
	std::cout<<c<<"\n";
	
	
	return 0;
	
}
	
	
