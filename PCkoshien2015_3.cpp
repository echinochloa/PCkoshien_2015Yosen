#include <iostream>

int main()
{
	int d,l, a,b;
	std::cin>>d>>l;

	a = d/l;
	if(d%l==0)
	{
		std::cout<<a<<"\n";
		return 0;
	}

	b = d-l*a;	
	std::cout<<b+a<<"\n";
	
	return 0;
}