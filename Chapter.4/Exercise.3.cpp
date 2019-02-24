//Exercise.3
#include<iostream>
#include<cstring>
int main(void)
{
	using namespace std;
	char fir_name[20], las_name[20], name[42]{ NULL, };
	cout << "Enter your first name:\n";
	cin.getline(fir_name, 20);
	cout << "Enter your last name:\n";
	cin.getline(las_name, 20);
	size_t tess = strlen(las_name);
	strcat_s(name, strlen(las_name) + 1, las_name);
	strcat_s(name, strlen(name) + 3, ", ");
	strcat_s(name, strlen(fir_name) + strlen(name) + 1, fir_name);
	cout << "Here's the information in a single string: " << name;
	return 0;
}