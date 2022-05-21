#include<iostream>
#include"string"
using namespace std;

int main() {
	string first, secound;
	cout << "enter first string \n";
	cin.ignore();
	getline(cin, first);
	cout << "enter secound string \n";
	cin.ignore();
	getline(cin, secound);
	if (first == secound)
		cout << "both strings are same \n";
	else
		cout << "strings are different \n";
	return 0;
}