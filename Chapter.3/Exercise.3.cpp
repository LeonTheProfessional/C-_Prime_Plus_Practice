//Excierse.3
#include<iostream>
int main(void)
{
	using namespace std;
	const int DE_TO_MI(60);
	const int MI_TO_SE(60);
	cout << "Enter a latitude in degrees,minutes,seconds\n";
	cout << "First enter the degrees: ";
	int degrees;
	cin >> degrees;
	cout << "Next,enter minutes of arc: ";
	int minutes;
	cin >> minutes;
	cout << "Finally,enter the seconds of arc: ";
	float seconds;
	cin >>seconds;
	cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = ";
	cout << degrees + (minutes + seconds / MI_TO_SE) / DE_TO_MI << " degrees.";
	return 0;
} 
