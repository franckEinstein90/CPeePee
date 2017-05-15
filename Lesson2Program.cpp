#include <iostream>

void funFunctionAddress(int* argPtr){
	std::cout	<< "In funFunctionAddress's world, "
			<< "the address of arg is:" << argPtr
			<< " and its value is:" << *argPtr << std::endl;
}
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
	//By Value
	funFunctionValue(arg);
	//By Reference
	funFunctionReference(arg);
	//By Address
	funFunctionAddress(&arg);
	return 1; 
}
