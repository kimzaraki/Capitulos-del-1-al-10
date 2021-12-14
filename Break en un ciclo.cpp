#include<iostream>

int main(){ int suma{0}; for(int count {0}; count<10; ++count){ std::cout<<"ingrese un numero o 0 para salir"; int num{}; std::cin>>num; if(num==0){ break; suma +=num; } } std::cout<<"la suma es: "<<suma<<'\n'; return 0; }
