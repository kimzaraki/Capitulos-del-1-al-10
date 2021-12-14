#include<iostream>

int main(){ int count{0}; while(true){ std::cout<<"ingrese s salir o otro para continuar: "; char ch{}; std::cin>>ch;

	if(ch=='s'){
		break;
		
	}else{
		++count;
		std::cout<<"hemos iterado "<<count<<"veces\n";
	}
		}
		return 0;
}
