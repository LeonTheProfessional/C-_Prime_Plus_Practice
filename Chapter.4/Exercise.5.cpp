//Exercise.5
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
	CandyBar snack{ "Mocha Munch",2.3,350 };
	cout << "Brand: " << snack.brand << endl;
	cout << "Weight: " << snack.weight << endl;
	cout << "Calories: " << snack.calories;
	return 0;
}