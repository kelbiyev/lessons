#include <iostream>
#include <utility>

int main() {
	
	std::pair<std::string , int> p = {"Hello" , 42};
	auto[word,freq] = p;
	std::cout<<word<<" "<<freq<<"\n";
	return 0;
	
}
