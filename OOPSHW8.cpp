/*WAP to create an abstract class named Shape that contains an empty method numberOfSides(). 
Provide three classes named Trapezoid, Triangle and Hexagon such that each one of the classes inherits the class shape. 
Each one the classes contains only the method numberOfSides() that shows the number of sides in the given geometrical figures.*/
#include<iostream>
using namespace std;
class shape{
    protected :
    int side;
    public :
    virtual void numberOfSides() = 0;
};

class trapezoid : public shape{
    public :
    void numberOfSides(){
        side = 4;
        cout << "\nTRAPEZOID CONTAINS "<< side <<" SIDES\n";
    }
};

class triangle : public shape{
    public :
    void numberOfSides(){
        side = 3;
        cout << "\nTRIANGLE CONTAINS "<< side <<" SIDES\n";
    }
};

class hexagon : public shape{
    public :
    void numberOfSides(){
        side = 6;
        cout << "\nHEXAGON CONTAINS "<< side <<" SIDES\n";
    }
};

int main(){
    trapezoid s1;
    s1.numberOfSides();
    triangle s2;
    s2.numberOfSides();
    hexagon s3;
    s3.numberOfSides();
    return 0;
}