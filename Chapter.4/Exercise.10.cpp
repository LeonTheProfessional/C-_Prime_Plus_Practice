//Exercise.10
#include<iostream>
#include<array>
int main(void)
{
	using namespace std;
	array<double, 3> score;
	cout << "Please enter the 40 yards sprint score of first time: ";
	cin >> score[0];
	cout << "Please enter the sprint score of second time: ";
	cin >> score[1];
	cout << "Please enter the sprint score of third time: ";
	cin >> score[2];
	cout << "The score of first time: " << score[0] << " Sec\n";
	cout << "The score of second time: " << score[1] << " Sec\n";
	cout << "The score of third time: " << score[2] << " Sec\n";
	cout << "The average score:" << (score[0] + score[1] + score[2]) / 3 << " Sec";
	return 0;
}