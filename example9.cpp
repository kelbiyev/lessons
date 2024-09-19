#include <iostream>
#include <vector>

int main (){
	
	/*
	int x  = 42;
	const int cx = 13;
	int* ptr = &x;
	//ptr = &cx; Fail
	const int* cptr = &x;
	cptr = &cx;
	int* const ptrc = &x;
	//ptrc = nullptr; Fail
	++*ptrc;
	const int* const cptrc = &x;
	*/
	
	const size_t m = 1000000;
	const size_t n = 10000;
	std::vector<std::string> v(m);
	for(size_t i = 0; i != m; ++i){
		v[i].resize(n , '@');
	}
	size_t sum = 0;
	for(const auto& row: v){
		sum += row.size();
	}
	std::cout<<sum<<"\n";
	
	
	
	return 0;
}
