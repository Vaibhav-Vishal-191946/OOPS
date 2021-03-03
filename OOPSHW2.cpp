/*WAP power() which raise a number m to a power n. 
The function takes double value of m and integer value of n and returns the result. 
Use the default value of n as 2.*/
#include <iostream>
using namespace std;
double power(double,int=2);
void display(double);
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
double power(double base,int exponent){
	double results=1;
	for(int i=0;exponent>i;++i)
		results=results*base;
	return results;
}
void display(double value){
	cout<<"The Result is:"<<value;
}
