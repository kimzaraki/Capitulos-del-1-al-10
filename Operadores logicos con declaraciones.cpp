#include<iostream>

int main(){ std::cout<<"ingresa un numero: "; int x{}; std::cin>>x;

std::cout<<"ingresa un numero: ";
int y{};
std::cin>>y;

if(x>0 && y>0){
				std::cout<<"son numeros positivos";

	}else if(x>0 || y>0){
		std::cout<<"solo uno es positivo";
	}else{
		std::cout<<x<<"ninguno es positivo";
	}

return 0;
}
