//4問目
//(NOT(A)∩C)∪(B∩C)のを満たす人数を出力
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int N, x,y,z,a[100],b[100],c[100], count = 0, hoge[100];

	cin>>N;
	cin>>x;
	for(int i=0;i<x;++i)
		cin>>a[i];
	cin>>y;
	for(int i=0;i<y;++i)
		cin>>b[i];
	cin>>z;
	for(int i=0;i<z;++i)
		cin>>c[i];

	for(int i=0;i<=N;++i)
		hoge[i+1]=i+1;

	for(int i=0;i<x;++i)
	{
		for(int j = 0;j<y;++j)
		{
			for(int k=0;k<z;++k)
			{
				if(a[i]==b[j]&&b[j]==c[k])
					count++;
			}
		}			
	}
	

/*	for(int i=0;i<z;++i)
	{
		for(int j=0;j<=i+1;++j)
		{
			if(hoge[j+1]!=c[i])
				hoge[j+1]=0;
		}
	}*/

	for(int i=0;i<x;++i)
	{
		for(int j = 0;j<z;++j)
			if(a[i]==c[j])
				c[j]=0;
	}

	for(int i=0;i<z;++i)
		if(c[i]!=0)
			count++;
	cout<<count<<"\n";
	return 0;
}
