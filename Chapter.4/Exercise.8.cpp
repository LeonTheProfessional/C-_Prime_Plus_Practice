//Exercise.8
#include<iostream>
#include<string>
int main(void)
{
	using namespace std;
	struct PizaThings
	{
		string company;
		int diameter;
		double weight;
	};
	PizaThings * whatever = new PizaThings;
	cout << "The size of the piza?" << endl;
	cin >> whatever->diameter;
	cin.get();//丢弃输入流中留下的换行符。另外可以这样用： cin.get(whatever,number).get()
	cout << "What company does the piza come from?" << endl;
	getline(cin, whatever->company);
	cout << "Please tell me piza's wight.\n";
	cin >> whatever->weight;
	cout << "This is a piza made by " << whatever->company << " with " << whatever->diameter << " inchs diameter and "
		<< whatever->weight << " grams weight.";
	delete whatever;//Don't forget this shit!
	return 0;  
}