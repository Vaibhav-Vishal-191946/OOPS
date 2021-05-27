//WAP to show multiple inheritance.
#include<iostream>
using namespace std;

class amphibian{
    public :
    amphibian(){
        cout << " Organism which can live in both land and water\n";
    }
};

class fourlegged_animal{
    public :
    fourlegged_animal(){
        cout << " Organism having 4 legs\n";
    }
};

class frog : public amphibian, public fourlegged_animal{};

int main(){
    cout << " Frog is a :- \n";
    frog f1;
    return 0;
}