//Exercise.9
#include<iostream>
#include<string>
int main(void)
{
	using namespace std;
	struct CandyBar
	{
		string brand;
		float weight;
		int calories;
	};
	CandyBar *cb = new CandyBar[3]
	{
	{"Mocha Munch",2.3,350},
	{"Big Hanbeger",5.2,3000},
	{"KFC",1.5,2000}
	};
	cout << cb[0].brand << ", " << cb[0].weight << ", " << cb[0].calories << endl;
	cout << cb[1].brand << ", " << cb[1].weight << ", " << cb[1].calories << endl;
	cout << cb[2].brand << ", " << cb[2].weight << ", " << cb[2].calories;
	delete[]cb;//That is important!
	return 0;
}