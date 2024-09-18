#include <iostream>
#include <string>


struct Point{
	double x = 0.0;
	double y = 0.0;
	double z = 0.0;
	
};

int main (){
	
	Point p = {3.0 , 4.0 , 5.0};
	Point* ptr = &p;
	std::cout<<(*ptr).x<<"\n";
	std::cout<<ptr->x<<"\n";
	
	return 0;

}
