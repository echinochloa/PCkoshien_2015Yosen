//2問目
//ケンジローVSヒロシ
//入力
/*
    h1 h2	ヒロシが釣ったイワナの数 ヤマメの数
    k1 k2	ケンジローが釣ったイワナの数 ヤマメの数
    a b c d	イワナ1匹当たりのスコア ヤマメ1匹当たりのスコア イワナ10匹ごとのスコア ヤマメ20匹ごとのスコア
*/

#include <iostream>

int main()
{
	int h1,h2,k1,k2,a,b,c,d, sum1 = 0, sum2 = 0;
	std::cin>>h1>>h2;
	std::cin>>k1>>k2;
	std::cin>>a>>b>>c>>d;

//	sum1=a*h1+b*h2+(c*h1/10)+(d*h2/20);
//	sum2=a*k1+b*k2+(c*k1/10)+(d*k2/20);

	for(int i = 1;i<=h1;++i)
	{
		if(i%10==0)
			sum1+=c;
		else
			sum1+=a;
	}
	for(int i = 1;i<=h2;++i)
	{
		if(i%20==0)
			sum1+=d;
		else
				sum1+=b;
	}
	for(int i = 1;i<=k1;++i)
	{
		if(i%10==0)
			sum2+=c;
		else
			sum2+=a;
	}
	for(int i = 1;i<=k2;++i)
	{
		if(i%20==0)
			sum2+=d;
		else
			sum2+=b;
	}
	
	if(sum1<sum2)
		std::cout<<"kenjiro\n";
	else if(sum1>sum2)
		std::cout<<"hiroshi\n";
	else
		std::cout<<"even\n";
	
	return 0;
}
