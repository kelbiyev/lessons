#include <iostream>
#include <string>

int main(){

	
	/*
	std::string s1 = "Elementary, Watson";
	std::string s2 = s1;
	
	s1.clear();
	
	std::cout<<s1<<"\n";
	std::cout<<s2<<"\n";
	*/
	
	
	/* АМПЕРСАНТ
	int x = 42;
	int& ref = x;
	++x;
	
	std::cout<<ref<<"\n";
	*/
	
	
	/*
	std::string s1 = "Elementary";
	std::string& s2 = s1;
	
	s1.clear();
	
	std::cout<< s2.size()<<"\n";
	*/
	
	
	/*как делать нельзя
	int x = 42;
	int& ref;
	ref = x;
	*/
	
	
	/*как делать нельзя
	int x = 42;
	int& ref = x;
	int y = 20;
	ref = y;	
	*/
	
	
	/* УКАЗАТЕЛИ 
	int x  = 42;
	int* ptr = &x;
	
	++x;
	
	std::cout<<*ptr<<"\n";
	*/
	
	
	return 0;
	
}
