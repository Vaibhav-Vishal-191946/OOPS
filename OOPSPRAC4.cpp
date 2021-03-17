#include<iostream>
using namespace std;
float power(float,int);
float power(float);
void display(float);
int main() {
	float m, result;
	int n;
	cout << "Enter Base :";
	cin >> m;
	cout << "Enter Power(Positive Integer):";
	cin >> n;
	result = power(m, n);
	result = power(m);
	display(result);
	return 0;
}
float power(float base, int exponent) {
		float results = 1;
		for (int i = 0; exponent > i; ++i)
			results = results * base;
		return results;
}
float power(float base) {
	int exponent = 2;
	float results = 1;
	for (int i = 0; exponent > i; ++i)
		results = results * base;
	return results;
}
void display(float value) {
		cout << "The Result is:" << value;
}