#include <iostream>
using namespace std;

int main() {
	
	char op;
	float num1, num2;
	
	cout << "Unesite operaciju:\n";
	cout << "1. Zbrajanje\n";
	cout << "2. Oduzimanje\n";
	cout << "3. Mno�enje\n";
	cout << "4. Dijeljenje\n";
	cin >> op;
	
	cout << "Unesite prvi broj: ";
	cin >> num1;
	cout << "Unesite drugi broj: ";
	cin >> num2;
	
	switch(op){
		case '1':
			cout << num1 << " + " << num2 << " = " << num1 + num2;
			break;
			
		case '2':
			cout << num1 << " - " << num2 << " = " << num1 - num2;
			break;
			
		case '3':
			cout << num1 << " * " << num2 << " = " << num1 * num2;
			break;
			
		case '4':
			cout << num1 << " / " << num2 << " = " << num1 / num2;
			break;
			
		default:
			cout << "Gre�ka! Operacija nije ispravna.";
			break;
	}	
	return 0;
}
