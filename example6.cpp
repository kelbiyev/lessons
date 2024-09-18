#include <iostream>
#include <string>

int main(){
	
	int x = 42;
	int y = 20;
	int* ptr;
	ptr = nullptr;//указывает что пока использовать не надо 
	ptr = &x;
	std::cout<<*ptr<<"\n";
	ptr = &y;
	std::cout<<*ptr<<"\n";
	
	
	return 0;

}
