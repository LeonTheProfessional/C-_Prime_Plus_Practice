//Excierse.5
#include<iostream>
int main(void)
{
	using namespace std;
	cout << "Enter the world's population: ";
	long long population_w,population_u;
	cin >> population_w;
	cout <<"Enter the population of the US: ";
	cin >> population_u;
	cout << "The population of the US is " << double(population_u) / population_w * 100.0 << "% of the world population.";
	return 0;
} 
