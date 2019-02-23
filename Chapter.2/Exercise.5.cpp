//Exercise.5
#include<iostream>
double Tem_tran(double);
int main(void)
{
	std::cout << "Please enter a Centigrade temperature." << std::endl;
	double temperature;
	std::cin >> temperature;
	std::cout << temperature << " degrees Centigrade equal to " << Tem_tran(temperature) << " degrees Fahrenheit.";
	return 0;
}
double Tem_tran(double Centigrade)
{
	return Centigrade * 1.8 + 32.0;
}
