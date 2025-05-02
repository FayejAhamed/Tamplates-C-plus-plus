#include <iostream>
using namespace std;

class Person {
private:
	string name;
public:
	Person(string n) :name(n) {}
	string getName() { return name; }
};
template <class T>
T largest(T& one, T& two, T& three) {
	T max = one;
	if (max < two)
		max = two;
	if (max < three)
		max = three;
	return max;
}// endswap

int main() {
	int first = 3;
	int second = 5;
	int third = 6;
	cout << "Vslues are =: " << first << " " << second << " " << third << endl;
	cout << "The largest values is: " << largest(first, second, third) << endl;

	return 0;
}