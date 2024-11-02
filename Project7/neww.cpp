#include<iostream>
using namespace std;

int main() {
	char letter;
	cout << "enter a letter:";
	cin >> letter;
	switch (letter) {
	case 'a':cout << letter << " is a vowel\n"; break;
	case 'e':cout << letter << " is a vowel\n"; break;
	case 'u':cout << letter << " is a vowel\n"; break;
	case 'o':cout << letter << " is a vowel\n"; break;
	case 'i':cout << letter << " is a vowel\n"; break;
	default:cout << letter << " is a consonant";
		cout << " or not a letter\n";
	}
	return 0;


}