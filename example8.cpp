/*
#include <iostream>
int main() {
	const int c1 = 42;
	int x ;
	std::cin>>x;
	const int c2 = 2*x;
	//c2 = 0;  Ошибка компиляции
	std::cout<<c1<<"\n";
	std::cout<<c2<<"\n";

	return 0;
	
}
*/



#include <iostream>
#include <vector>

int main (){
	
	
	/*
	const std::vector<int> v = {1 , 3 , 5};
	std::cout<<v.size()<<"\n";
	//v.clear(); Ошибка компиляции
	//v[0] = 0; Тоже ошибка
	*/
	
	
	/*
	int x = 42;
	int& ref = x;
	const int& cref = x;
	
	++x;
	++ref;
	//++cref; Ошибка
	
	std::cout<<x<<"\n";
	std::cout<<ref<<"\n";
	std::cout<<cref<<"\n";	
	
	int* ptr = &x;
	const int* cptr = &x;
	;
	
	++ptr;
	//++cptr; Ошибка
	std::cout<<cptr<<"\n";
	std::cout<<ptr<<"\n";
	
	int y = 20;
	cptr = &y;
	std::cout<<cptr<<"\n";
	*/
	
	/*
	const int cx = 42;
	//int& ref = cx; Fail
	const int& cref = cx;
	//int* ptr = &cx; Fail
	const int* cptr = &cx;
	*/
	
	
	
	return 0;
	
}




