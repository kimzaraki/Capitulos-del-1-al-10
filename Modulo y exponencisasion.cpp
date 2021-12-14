#include <iostream>
int main() {

using namespace std;
cout<<"ingrese un divisor: ";
int x{};
cin>>x;

cout<<"ingrese un divisor: ";
int y{};
cin>>y;

cout<<"el residuo es: "<<x%y<<'\n';
if((x%y)==0){
	cout<<x<<"es uniformemente divisible por"<<y<<'\n';
	
}else{
	cout<<x<<"no es uniformemnete por"<<y<<'\n';
}
}
// cout <<"12/ "<<x<<"="<<12/x<<'\n'; return 0; }
