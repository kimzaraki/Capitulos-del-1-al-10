#include<string>
#include<iostream>
int main()
{
	std::cout<<"Ingrese su nombre completo: ";
std::string name{};
std::getLine(std::cin, name);


std::cout<<"ingrese su edad: ";
std::string age{};
std::getLine(std::cin, age);

std::cout<<"Tu nombre es "<<name<<" y tu edad es "<<age<<'\n';
	return 0;
}
