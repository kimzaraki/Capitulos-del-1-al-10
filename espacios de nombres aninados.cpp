#include<iostream>
using namespace std;
namespace foo
{
	namespace goo
	{
		int add(int x, int y)
		{
			return x+y;
		}
	}
}
int main(){
namespace boo=foo::goo;
cout<<boo::add(1,2)<<'\n';	
//	cout<<foo::goo::add(1,2)<<'\n';
	return 0;
}
