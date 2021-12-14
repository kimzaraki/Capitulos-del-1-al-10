#include<iostream>
using namespace std;
void print()
{
	cout<<"there\n";
}
namespace foo
{
	void print()
	{
		cout<<"hello\n";
	}
}
int main()
{
	foo::print();
	::print();
	
	return 0;
	}
