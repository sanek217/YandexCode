//Программа демонстрирует шифр Гронсфельда
#include <iostream>
#include <string>

using namespace std;




int main()
{
	string s; //шифруемое слово
	int n; //длина ключа

	cout << "enter n\n";

	cin >> n;
	int *mass = new int[n];
	//ключ:
	cout << "enter key \n";
	for (int i = 0; i < n; i++) {
		cin >> mass[i];
	}
	cout << "enter your word: ";

	cin>>s;

	int j = 0;
	for (int i = 0; i < s.length(); i++) {
		if (j < n) {
			s[i] += mass[j];
			j++;
		}
		else {
			j = 0;
			i--;
		}
	}
	cout << s << endl;
	system("pause");
	return 0;
}