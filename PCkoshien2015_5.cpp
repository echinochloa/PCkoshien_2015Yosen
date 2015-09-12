#include <iostream>
using namespace std;

int main()
{
	int N, p[100], count, cnt = 0, hoge = 0;
	cin>>N;
	for(int i=0;i<N;++i)
		cin>>p[i];
	
	while(true)
	{
		count = 0;
		for(int i=0;i < N;++i)
		{
			if((N - cnt)<=p[i])
				++count;
		}
//		cout << count << "\n";
		if(count >= (N - cnt)){
			hoge = N - cnt;
			break;
		}
		cnt++;	
	}

	cout<< hoge <<"\n";
		
	return 0;
}