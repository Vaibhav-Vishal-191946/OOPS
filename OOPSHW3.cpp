//Program to show that the effect of default arguments can be alternatively achieved by overloading.
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
	cout << "Enter Power(for default,press -999):";
	cin >> n;
	if(n== -999)
		result = power(m);
	else
		result = power(m, n);
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
