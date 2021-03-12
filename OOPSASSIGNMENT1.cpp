#include <iostream>
using namespace std;
int factorial(int);
void display(int);
int main(){
	int m,result;
	cout<<"Enter a number :";
	cin >> m ;
	result=factorial(m);
	display(result);
	return 0;
}
int factorial(int base){
    if (base == 1|| base ==0)
   		return 1;
   	else
        return (base*factorial(base-1)); 
}
void display(int z){
	cout<<"The Resultant factorial is:"<<z;
}
