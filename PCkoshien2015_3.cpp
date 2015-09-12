//3問目
//カエル
//d 巣までの距離 l 大ジャンプで飛べる距離（小ジャンプは1回1進める）
//巣まで何回のジャンプでたどり着けるかを出力

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
