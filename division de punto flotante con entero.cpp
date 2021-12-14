#include<iostream>
#include<cmath>
#include<cstdint>

std::int_fast64_t pow(int base, int exp)
{
	std::int_fast64_t result{1};
	while(exp)
	{
		if(Exp & 1){
			result *=base;
			exp>>=1;
			base *= base;
		}
	}
	return 0;
}
int main()
{
	using namespace std;
	cout<<powint(7,12);
	double x{pow(3.0,4.0)};
	
	return 0;
}
