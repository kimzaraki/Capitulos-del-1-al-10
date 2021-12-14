#include<iostream>

#define ENABLE_DEBUG

int getUserInput(){

#ifdef ENABLE_DEBUG
std::cerr<<"LLAMDA A detuserinput()\n";
#endif
std::cout<<"ingrese un numero";
int x{};
std::cin>>x;
return x;
} int main(){

#ifdef ENABLE_DEBUG
	std::cerr<<"LLAMDA A main()\n";
#endif
int x{getUserInput()}; std::cout<<"tu ingresaste "<<x; return 0; }
