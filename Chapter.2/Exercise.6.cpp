//Exercise.6
#include<iostream>
double LYtoAU(double);
int main(void)
{
	std::cout << "Please enter a light year number:";
	double light_year;
	std::cin >> light_year;
	std::cout << light_year << " light years = " << LYtoAU(light_year) << " astronomical units.";
	return 0;
}
double LYtoAU(double light_year)
{
	return light_year * 63240;
}
