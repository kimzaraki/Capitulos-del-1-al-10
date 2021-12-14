#include<iostream>
 int main(){ std::cout<<"ingrese un numero"; int x{}; std::cin>>x;

if(x>10){
	std::cout<<"ingresaste "<<x<<'\n';
	std::cout<<x<<" es mayor que 10\n";
}
else if(x<10){

	std::cout<<"ingresaste"<<x<<'\n';
	std::cout<<x<<"no es myaor que 10\n";
	
}
else{
	std::cout<<"es exactamente 10\n";
		}

return 0;
}
