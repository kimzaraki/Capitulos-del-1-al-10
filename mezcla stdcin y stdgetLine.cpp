#include<string>
#include<iostream>

int main(){
	
	std::cout<< "selecciona 1 o 2";
	int choice{};
	std::cin, choice;
	
	
	std::cout<< "ingrese su nombre ";
	std::string name{};
	std::getLine(std::cin, name);
	
	
	
	
	std::cout<<"hola, " << name <<", seleccionaste "<<choice <<'\n';
	return 0;
}
