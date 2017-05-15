#include <iostream>


void funFunctionReference(int& arg){
	std::cout	<< "In funFunctionReference's world, "
			<< "the address of arg is:" << &arg
			<< " and its value is:" << arg << std::endl;
}

void funFunctionValue(int arg){
	std::cout	<< "In funFunctionValue's world, "
			<<"the address of arg is:" << &arg 
			<< " and its value is:" << arg << std::endl;
}

int main(){
	int arg = 5;
	std::cout	<< "In main's world, the address of arg is:"
			<<&arg<<" and its value is:"
			<<arg<<std::endl;
	
	/*calling funFunctionValue*/
	funFunctionValue(arg);
	funFunctionReference(arg);
	return 1; 
}
