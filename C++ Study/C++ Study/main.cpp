#include <iostream>
#include <initializer_list>

int main() {
	using namespace std;
	initializer_list<double> test = { 1, 2.2, 33, 1 };
	cout << test.size() << endl;
	cout << endl;
	double sum{};
	cout << sum << endl;
	for (auto p : test) {
		sum += p;
	}
	cout << sum << endl;
	sum = 0.0;
	for (auto p = test.begin(); p != test.end(); ++p) {
		sum += *p;
	}
	cout << sum << endl;

	string str = "abc"; // str = lvalue, "abc" = rvalue;
	string str2 = move(str);
	cout << str2 << endl << str << " °ú¿¬" << endl;


	return 0;
}