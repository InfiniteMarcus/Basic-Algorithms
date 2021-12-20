#include <iostream>

int main(){
	
	for(int i = 1; i < 101; i++){
		
		std::string output = "";
		
		if(!(i%3)) 
			output += "Fizz";
		
		if(!(i%5)) 
			output += "Buzz";
		
		if(output == "") 
			output = std::to_string(i);
		
		std::cout << output + "\n";
		
	}
	
	return 0;
}
