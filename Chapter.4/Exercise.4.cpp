//Exercise.4
#include<iostream>
#include<string>
int main(void)
{
	using namespace std;
	string fir_name, las_name, name;
	cout << "Enter your first name:\n";
	getline(cin, fir_name);
	cout << "Enter your last name:\n";
	getline(cin, las_name);
	name = las_name + " ," + fir_name;
	cout << "Here's the information in a single string: " << name;
	return 0;
}