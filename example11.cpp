#include <iostream>
#include <string>
#include <vector>

/*
void Swap (int &x , int& y){
	int z = x;
	x = y;
	y = z;
}

int main (){
	std::string line;
	std::getline(std::cin , line);
	
	return 0;
} 
*/


std::string Concatenate(const std::vector<std::string>&parts){
	std::string result;
	for (const auto& part: parts){
		result += part;
	}
	
	return result;
}

int main (){
	
	std::vector<std::string> parts = {"ab" , "ra" , "ca" , "da" , "bra"};
	std::cout<<Concatenate(parts)<<"\n";
	
	
	return 0;
}
