//WAP to make the use of Inline function.
#include <iostream>
#include<cmath>
using namespace std;
inline double power(double base,int exponent){
	pow(base,exponent);
}
inline void display(double value){
	cout<<"The Result is:"<<value;
}
int main(){
	double m,result;
	int n;
	cout<<"Enter Base :";
	cin >> m ;
	cout<<"Enter Power(Positive Integer):";
	cin >> n;
	result=power(m,n);
	display(result);
	return 0;
}
