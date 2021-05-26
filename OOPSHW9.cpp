/*WAP to demonstrate the concept of:
a) Parametrized constructor
b) Copy constructor
c) Constructor overloading*/

#include<iostream>
using namespace std;

class room{
    int length;
    int breadth;
    public :
    //Parametrized constructor
    room(int a){
        length = a;
        cout << "\n Created a Square room";
        cout << "\n Length = "<< length;
    }
    //copy constructor
    room(room &obj){
        length = obj.length;
        cout << "\n\n Copied above Room";
        cout << "\n Length = "<< length;
    }
    //constructor overloading
    room(int b,int c){
        length = b;
        breadth = c;
        cout << "\n Created a Rectangular room";
        cout << "\n Length = "<< length;
        cout << "\n Breadth = "<< breadth;
    }
};

int main(){
    int x,y;
    cout <<"\n Creating a Square room";
    cout <<"\n Enter Length of the room : ";
    cin >> x;
    room square(x);
    room copy = square;
    cout <<"\n\n Creating a Rectangular room\n";
    cout <<" Enter Length of the room : ";
    cin >> x;
    cout <<" Enter Breadth of the room : ";
    cin >> y;
    room rectangle(x,y);
    return 0;
}