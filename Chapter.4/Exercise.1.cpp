//Exercise.1
#include <iostream>
#include<string>
int main()
{
	using namespace std;
	cout << "What is your first name? ";
	string fir_name;
	getline(cin, fir_name);
	cout << "What is your last name? ";
	string las_name;
	getline(cin, las_name);
	cout << "What letter grade do you deserve? ";
	char grade;
	cin >> grade;
	cout << "What is your age? ";
	int age;
	cin >> age;
	cout << "Name: " << las_name << ',' << fir_name<<endl;
	cout << "Grade: " << ++grade << endl;
	cout << "Age: " << age;
	return 0;
}
